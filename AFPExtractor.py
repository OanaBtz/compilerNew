# -*- coding: utf-8 -*-
from os import makedirs;
from os import path;
from os import listdir;
import subprocess;
import sys;

currentTemplateName = "";
currentTemplateData = "";
SPAmount = 0;
LTDAmount = 0;
compiledAmount = 0;
failedAmount = 0;
segmentationFaultAmount = 0;
failedDescription = "";
segmentationFaults = "";
missingFunctionality = "";

ignoreLTD = False;
ignoreSP = False;
nocompile = False;
specificBank = "";

for i in range(0, len(sys.argv)):
    if (sys.argv[i] == "ignoreSP"):
        ignoreSP = True;
    if (sys.argv[i] == "ignoreLTD"):
        ignoreLTD = True;
    if (sys.argv[i] == "nocompile"):
        nocompile = True;
    if(sys.argv[i] == "-b"):
        if(len(sys.argv[i + 1]) != 3):
            print("Bank must be 3 characters!");
        else:
            specificBank = sys.argv[i + 1];


if (not path.exists("Templates")):
    makedirs("Templates");


def getLinebreaks(column):
    linebreaks = [];
    add = False;
    string = "";
    for c in column:
        string += c;
        if (len(string) == 2):
            if (add):
                lb = int(string, 16);
                if (lb == 255):
                    break;
                linebreaks.append(lb);
            add = not add;
            string = "";
    return linebreaks;


def saveSP():
    global SPAmount;
    SPAmount += 1;
    if (not path.exists("./Templates/" + currentTemplateName[:3])):
        makedirs("./Templates/" + currentTemplateName[:3]);
    f = open("./Templates/" + currentTemplateName[:3] + "/" + currentTemplateName, "w");
    f.write(currentTemplateData.encode("utf-8"));
    print("Created SP module: " + currentTemplateName + "!");


def processRowSP(row):
    global currentTemplateData;
    global currentTemplateName;
    global specificBank;
    if (row[0] == "DGT_GIL_REC_IDE" or (specificBank != "" and row[0][:3] == specificBank)):
        return;

    if (row[0] != currentTemplateName and currentTemplateName != ""):
        saveSP();
        currentTemplateData = "";

    currentTemplateName = row[0];
    currentTemplateName = currentTemplateName.replace("/", "SLASH");

    linebreaks = getLinebreaks(row[4]);

    line = row[5];

    newlines = 0;

    for i in linebreaks:
        line = line[:i + newlines] + "\n" + line[i + newlines:];
        newlines += i + 1;

    currentTemplateData += line;


def splitLine(line, process):
    columns = [];
    inString = False;
    col = "";
    for i in range(0, len(line)):
        c = line[i];
        if (ord(c) == 194 or ord(c) == 128):
            c = '\xA4';
        if (c == '"'):
            if (line[i + 1] == '"'):
                i += 1;
            else:
                inString = not inString;
                continue;

        if (inString and c != '\n'):
            col += c.decode("iso-8859-1");
        else:
            if (c == ';'):
                columns.append(col);
                col = "";
                continue;
            elif (c != '\n'):
                col += c.decode("iso-8859-1");

    columns.append(col);

    process(columns);


if (ignoreSP != True):
    with open("templates.CSV") as file:
        for line in file:
            splitLine(line, processRowSP);

# Create LTD's

currentLTDName = "";
currentLTDData = "";


def saveLTD():
    global currentLTDData;
    global currentLTDName;
    global LTDAmount;
    if (not path.exists("./LTD/" + currentLTDName[:3])):
        makedirs("./LTD/" + currentLTDName[:3]);
    f = open("./LTD/" + currentLTDName[:3] + "/" + currentLTDName, "w");
    f.write(currentLTDData);
    LTDAmount += 1;
    print("Created LTD: " + currentLTDName);


def processRowLTD(row):
    global currentLTDData;
    global currentLTDName;
    if(specificBank != "" and currentLTDName[:3] != specificBank):
        return;
    if (True):
        if (path.exists("./Templates/" + row[4][:3] + "/" + row[4]) and row[4] != "" and row[4] != "."):
            if (currentLTDName != "" and currentLTDName != row[0]):
                saveLTD();
                currentLTDData = "";

            currentLTDName = row[0];
            currentLTDName = currentLTDName.replace("/", "SLASH");

            f = open("./Templates/" + row[4][:3] + "/" + row[4]);
            currentLTDData += f.read();
    else:
        print("Skipping " + row[0] + "...");


if (ignoreLTD != True):
    with open("TASF0110.txt") as file:
        for line in file:
            splitLine(line, processRowLTD);


# Compile templates

def getSyntaxErrorLine(line, bank, template):
    line = line.rstrip();
    line = line.split(" ");

    if ("line" in line):
        index = int(line[line.index("line") + 1]);

        file = open("./LTD/" + bank + "/" + template);
        datafile = file.read();
        datafile = datafile.split("\n");

        return str(index) + ":          " + datafile[index - 1];
    else:
        return "";


def compileFile(bank, template):
    global failedDescription;
    global compiledAmount;
    global failedAmount;
    global segmentationFaultAmount;
    global segmentationFaults;
    global missingFunctionality;
    str = "Compiling template: " + template;
    while(len(str) < 50):
        str += " ";
    print(str + " from bank " + bank);
    output = "";

    try:
        process = subprocess.Popen("./compiler <LTD/" + bank + "/" + template + " silent", stdout=subprocess.PIPE,
                                   stderr=subprocess.PIPE, shell=True);

        for line in process.stdout:
            output += line;
        for line in process.stderr:
            output += line;

    except subprocess.CalledProcessError as e:
        failedAmount += 1;

        failedDescription += "Bank: " + bank + " LTD: " + template + "       " + e.output + "\n";

    if ("Template generated successfully!" in output):
        compiledAmount += 1;
    else:
        if ("Segmentation fault" in output):
            segmentationFaultAmount += 1;
            segmentationFaults += "Bank: " + bank + " LTD: " + template + "\n";
        else:
            if("Missing functionality!" in output):
                missingFunctionality += "Bank: " + bank + " LTD: " + template + "       " + output + "\n";
            else:
                output = output.rstrip();
                failedAmount += 1;

                fileline = getSyntaxErrorLine(output, bank, template);

                error = "Bank: " + bank + " LTD: " + template;
                while(len(error) < 50):
                    error += " ";

                error += fileline + "\n";

                failedDescription += error;


if (nocompile != True):
    banks = listdir("./LTD");
    banks.sort();
    for b in banks:
        if(specificBank != "" and b != specificBank):
            continue;
        files = listdir("./LTD/" + b);
        files.sort();

        for f in files:
            compileFile(b, f);

errors = open("errors.txt", "w");
errors.write(failedDescription);

segment = open("segmentationfaults.txt", "w+");
segment.write(segmentationFaults);

missing = open("missingfunctionality.txt", "w+");
missing.write(missingFunctionality);

print("Successfully created " + str(SPAmount) + " SP modules and " + str(LTDAmount) + " LTD's and compiled " + str(
    compiledAmount) + " templates! (" + str(failedAmount) + " failed)");
