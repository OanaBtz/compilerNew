# -*- coding: utf-8 -*-
from os import makedirs;
from os import path;
from os import listdir;
import subprocess;
import sys;
import re;

currentTemplateName = "";
currentTemplateData = [];
SPAmount = 0;
LTDAmount = 0;
renamedAmount = 0;
compiledAmount = 0;
failedAmount = 0;
segmentationFaultAmount = 0;
warningsAmount = 0;
failedDescription = "";
segmentationFaults = "";
missingFunctionality = "";
renamedDescription = "";
warnings = "";
unknownErrors = "";

ignoreLTD = False;
ignoreSP = False;
nocompile = False;
specificBank = "";
bankList = [];

for i in range(0, len(sys.argv)):
    if (sys.argv[i] == "iSP"):
        ignoreSP = True;
    if (sys.argv[i] == "iLTD"):
        ignoreLTD = True;
    if (sys.argv[i] == "iCMP"):
        nocompile = True;
    if(sys.argv[i] == "-b"):
        if(len(sys.argv[i + 1]) != 3):
            print("Bank must be 3 characters!");
        else:
            specificBank = sys.argv[i + 1];
    if(sys.argv[i] == "-l"):
        file = open(sys.argv[i + 1]);
        bankList = file.read().split("\n");
        bankList.pop();


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
    currentTemplateData.sort(key=lambda x: x[0]);
    output = "";
    for i in range(0, len(currentTemplateData)):
        output += currentTemplateData[i][1];
    SPAmount += 1;
    if (not path.exists("./Templates/" + currentTemplateName[:3])):
        makedirs("./Templates/" + currentTemplateName[:3]);
    f = open("./Templates/" + currentTemplateName[:3] + "/" + currentTemplateName, "w");
    f.write(output);
    print("\rCreated SP module: " + currentTemplateName + "!                             ", end='');


def processRowSP(row):
    global currentTemplateData;
    global currentTemplateName;
    global specificBank;
    global renamedAmount;
    global renamedDescription;
    global bankList;
    if (row[0] == "DGT_GIL_REC_IDE"):
        return;
    if(specificBank != "" and row[0][:3] != specificBank):
        print("Skipping SP: " + row[0]);
        return;

    if (row[0] != currentTemplateName and currentTemplateName != ""):
        saveSP();
        currentTemplateData = [];

    currentTemplateName = row[0];

    if("/" in currentTemplateName):
        renamedDescription += currentTemplateName + " renamed to: ";
        currentTemplateName = currentTemplateName.replace("/", "SLASH");
        renamedDescription += currentTemplateName + "\n";
        renamedAmount += 1;
    if("&" in currentTemplateName):
        renamedDescription += currentTemplateName + " renamed to: ";
        currentTemplateName = currentTemplateName.replace("&", "AND");
        renamedDescription += currentTemplateName + "\n";
        renamedAmount += 1;

    linebreaks = getLinebreaks(row[4]);

    line = row[5];

    newlines = 0;

    for i in linebreaks:
        line = line[:i + newlines] + "\n" + line[i + newlines:];
        newlines += i + 1;

    currentTemplateData.append([int(row[3]),line]);


def splitLine(line, process):
    columns = [];
    inString = False;
    col = "";
    i = 0;
    while(i < len(line)):
        c = line[i];
        if (ord(c) == 194 or ord(c) == 128):
            c = '\xA4';
        if (c == '"'):
            if (line[i + 1] == '"'):
                i += 1;
            else:
                inString = not inString;
                i += 1;
                continue;

        if (inString and c != '\n'):
            col += c;
        else:
            if (c == ';'):
                columns.append(col);
                col = "";
                i += 1;
                continue;
            elif (c != '\n'):
                col += c;
        i += 1;

    columns.append(col);

    process(columns);


if (ignoreSP != True):
    with open("templates.CSV", "r", encoding="iso-8859-1") as file:
        for line in file:
            splitLine(line, processRowSP);
        print("\rFinished creating SP modules                       ");

# Create LTD's

currentLTDName = "";
currentLTDData = [];


def saveLTD():
    global currentLTDData;
    global currentLTDName;
    global LTDAmount;
    currentLTDData.sort(key=lambda x: x[0]);
    output = "";
    for i in range(0, len(currentLTDData)):
        output += currentLTDData[i][1];
    if (not path.exists("./LTD/" + currentLTDName[:3])):
        makedirs("./LTD/" + currentLTDName[:3]);
    f = open("./LTD/" + currentLTDName[:3] + "/" + currentLTDName, "w");
    f.write(output);
    LTDAmount += 1;
    print("\rCreated LTD: " + currentLTDName + "!                         ", end='');


def processRowLTD(row):
    global currentLTDData;
    global currentLTDName;
    global renamedDescription;
    global renamedAmount;
    if(specificBank != "" and row[0][:3] != specificBank or (len(bankList) > 0 and row[0] not in bankList)):
        print("\rSkipping LTD: " + row[0] + "\n");
        return;
    if (True):
        if (path.exists("./Templates/" + row[4][:3] + "/" + row[4]) and row[4] != "" and row[4] != "."):
            if (currentLTDName != "" and currentLTDName != row[0]):
                saveLTD();
                currentLTDData = [];

            currentLTDName = row[0];
            if ("/" in currentLTDName):
                renamedDescription += currentLTDName + " renamed to: ";
                currentLTDName = currentLTDName.replace("/", "SLASH");
                renamedDescription += currentLTDName + "\n";
                renamedAmount += 1;
            if ("&" in currentLTDName):
                renamedDescription += currentLTDName + " renamed to: ";
                currentLTDName = currentLTDName.replace("&", "AND");
                renamedDescription += currentLTDName + "\n";
                renamedAmount += 1;

            f = open("./Templates/" + row[4][:3] + "/" + row[4]);
            currentLTDData.append([row[3], f.read()]);
    else:
        print("\rSkipping " + row[0] + "...\n");

def fixTiSpacing(template, bank):
    global regex;
    global dataset;
    print("\rFixing ti character spacing in: " + template + "                           ", end="");
    file = open("./LTD/" + bank + "/" + template);
    data = file.read();

    lines = data.split("\n");

    tabChar = "";

    output = "";

    for i in range(0, len(lines)):
        line = "";
        if (re.match("\.ti . 05", lines[i]) or re.match("\.ti ¤ 05", lines[i])):
            tabChar = lines[i][4];
            for j in range(0, len(lines[i])):
                c = lines[i][j];
                line += c;
        elif (tabChar != ""):

            for j in range(0, len(lines[i])):
                c = lines[i][j];

                if (tabChar == lines[i][j]):
                    if (lines[i][j - 1] != " " and lines[i][j - 1] != tabChar):
                        line += "\x20";

                    line += c;
                    if (j + 1 < len(lines[i]) and lines[i][j + 1] != " "):
                        line += "\x20";

                else:
                    line += c;
        else:
            line = lines[i];
        output += line + "\n";

    file = open("./LTD/" + bank + "/" + template, "w");
    file.write(output);

if (ignoreLTD != True):
    if(not path.exists("LTD")):
        makedirs("LTD");
    with open("TASF0110.txt", "r", encoding="iso-8859-1") as file:
        for line in file:
            splitLine(line, processRowLTD);
        print("\rFinished creating LTD's               ");

    dataset = [];

    banks = listdir("./LTD");
    banks.sort();

    for b in banks:
        templates = listdir("./LTD/" + b);
        templates.sort();

        count = 0;
        for t in templates:
            count += 1;
            fixTiSpacing(t, b);


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
        return "line not found";


def compileFile(bank, template):
    global failedDescription;
    global compiledAmount;
    global failedAmount;
    global segmentationFaultAmount;
    global segmentationFaults;
    global missingFunctionality;
    global warnings;
    global warningsAmount;
    global unknownErrors;
    output = "";

    print("\rCompiling template: "+ template + "                               ", end="");

    try:
        process = subprocess.Popen("./compiler <LTD/" + bank + "/" + template + " silent", stdout=subprocess.PIPE,
                                   stderr=subprocess.PIPE, shell=True);

        for line in process.stdout:
            output += line.decode("iso-8859-1");
        for line in process.stderr:
            output += line.decode("iso-8859-1");

    except subprocess.CalledProcessError as e:
        failedAmount += 1;

        failedDescription += "Bank: " + bank + " LTD: " + template + "       " + e.output + "\n";

    if ("Template generated successfully!" in output):
        compiledAmount += 1;
    else:
        numberOfMoreThan1Space = len(re.findall("More than 1 space here!", output));

        if(numberOfMoreThan1Space > 0):
            warnings += template + ": " + str(numberOfMoreThan1Space) + " \"More than 1 space\" occurences\n";
            warningsAmount += 1;
            print("\r"+str(numberOfMoreThan1Space) + " \"More than 1 space\" occurences in " + template);

        if ("Segmentation fault" in output):
            segmentationFaultAmount += 1;
            segmentationFaults += "Bank: " + bank + " LTD: " + template + "\n";
            print("\rSegmentation fault in: " + template + "")
        else:
            if("Missing functionality!" in output):
                output = output.rstrip();
                missingFunctionality += "Bank: " + bank + " LTD: " + template + "       " + output + "\n";
                print("\rUnimplemented token in: " + template + "   " + output+"\n");
            elif("std::out_of_range" in output):
                segmentationFaultAmount += 1;
                segmentationFaults += "Bank: " + bank + " LTD: " + template + " (std::out_of_range)\n";
                print("\rstd::out_of_range in: " + template + " (Noted in segmentationfaults)");
            elif("std::bad_alloc" in output):
                segmentationFaultAmount += 1;
                segmentationFaults += "Bank: " + bank + " LTD: " + template + " (std::bad_alloc)\n";
                print("\rstd::bad_alloc in: " + template + " (Noted in segmentationfaults)");
            elif("No such file" in output or "not found" in output):
                warnings += "File " + template + " was not found (LTD filename might contain illegal characters)\n";
                print("\rFile " + template + " was not found (LTD filename might contain illegal characters)           ");
            elif("Syntax error" in output):
                output = output.rstrip();
                failedAmount += 1;

                fileline = getSyntaxErrorLine(output, bank, template);

                error = "Bank: " + bank + " LTD: " + template;
                while(len(error) < 50):
                    error += " ";

                error += fileline + "\n";

                failedDescription += error;
                print("\rSyntax error in: " + template + "    " + fileline);
            else:
                failedAmount += 1;
                unknownErrors += "Unknown error in " + template + "\n";
                print("\rUnknown error in: " + template);



if (nocompile != True):
    banks = listdir("./LTD");
    banks.sort();
    if(len(bankList) == 0):
        for b in banks:
            if(specificBank != "" and b != specificBank):
                continue;
            files = listdir("./LTD/" + b);
            files.sort();
            for f in files:
                compileFile(b, f);
    else:
        for t in bankList:
            if(specificBank != "" and t[0:3] != specificBank):
                continue;
            compileFile(t[:3], t);


if (len(failedDescription) > 0):
    errors = open("errors.txt", "w+");
    errors.write(failedDescription);

if(len(segmentationFaults) > 0):
    segment = open("segmentationfaults.txt", "w+");
    segment.write(segmentationFaults);

if(len(missingFunctionality) > 0):
    missing = open("missingfunctionality.txt", "w+");
    missing.write(missingFunctionality);
    missing.close();

if(len(renamedDescription) > 0):
    rename = open("renamedfiles.txt", "w+");
    rename.write(renamedDescription);

if(len(warnings) > 0):
    warning = open("warnings.txt", "w+");
    warning.write(warnings);
    warning.close();

if(len(unknownErrors) > 0):
    unknown = open("unknownerrors.txt", "w+");
    unknown.write(unknownErrors);
    unknown.close();

finalreport = "-Syntax Errors:" + str(failedAmount) + "\n\n" + failedDescription + "\n\n-Segmentation faults:" + str(segmentationFaultAmount) + "\n\n" + segmentationFaults + "\n\n-Missing functionality:" + missingFunctionality + "\n\n-Renamed files: " + str(renamedAmount) + "\n\n" + renamedDescription + "\n\n-Warnings: " + str(warningsAmount) + "\n\n" + warnings + "\n\n" + "Unknown errors:\n\n" + unknownErrors;
final = open("finalreport.txt", "w+");
final.write(finalreport);

print("\rSuccessfully created " + str(SPAmount) + " SP modules and " + str(LTDAmount) + " LTD's and compiled " + str(
    compiledAmount) + " templates! (" + str(failedAmount) + " did not compile " + str(segmentationFaultAmount) + " segmentation faults and other memory errors)");
