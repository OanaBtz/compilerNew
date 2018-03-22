# -*- coding: utf-8 -*-

from os import listdir;

import sys;
import re;

banks = listdir("./LTD");
banks.sort();

regex = "";
dataset = [];

try:
    regex = sys.argv[1];
except:
    print("Missing Regex argument");

def printProgressBar(progress, workload, text = ""):
    string = text + "[";
    i = 0.0;
    while (i < progress):
        string += "*";
        i += float(workload) / 10;
    while (len(string) - len(text) < 11):
        string += ".";
    string += "]";
    string += str(int(float(progress) / float(workload) * 100));
    string += "%";
    print('\r' + string, end='');

def translateLineToTokens(line):
    words = line.split(" ");

    tokenLine = "";

    for w in words:
        if(re.match("[0-9]+mm", w) or re.match("[0-9]+\.[0-9]+mm", w)):
            tokenLine += "(SIZE) ";
        elif(re.match("[0-9]", w) or re.match("[0-9]\.[0-9]", w)):
            tokenLine += "(NUMBER) ";
        elif(re.match("[xX\.]?\&[A-Za-z\-æøåØÆÅ0-9]+", w)):
            tokenLine += "(VAR) ";
        else:
            if(w != ""):
                tokenLine += w + " ";

    return tokenLine;

def processTemplate(template, bank):
    global regex;
    global dataset;
    file = open("./LTD/"+bank+"/"+template);
    data = file.read();

    lines = data.split("\n");

    for i in range(0, len(lines)):
        if(lines[i][:len(regex)].lower() == regex.lower()):
            line = translateLineToTokens(lines[i]);
            if(line + ";" + template not in dataset):
                dataset.append(line + ";" + template);


count = 0;

for j in range(0, len(banks)):
    templates = listdir("./LTD/"+banks[j]);
    templates.sort();

    count = 0;
    for i in range(0, len(templates)):
        count += 1;
        processTemplate(templates[i], banks[j]);
        if(count > 10):
            count = 0;
            printProgressBar(i, len(templates), banks[j] + "(" + str(j) +"/"+str(len(banks))+")");

currentTemplateData = "";
currentTemplate = "";
csv = "";
columnIndex = 0;

dataset.sort();

for i in range(0, len(dataset)):
    count += 1;

    if(count > 100):
        count = 0;
        printProgressBar(i, len(dataset), "Creating csv ");

    data = dataset[i].split(";");

    if(currentTemplate != "" and currentTemplate != data[0]):
        csv += "\n" + currentTemplate + ";"+currentTemplateData + "\n";
        currentTemplateData = "";
        columnIndex = 0;

    currentTemplate = data[0];
    currentTemplateData += data[1];
    columnIndex += 1;

    if(columnIndex > 10):
        currentTemplateData += "\n;";
        columnIndex = 0;
    else:
        currentTemplateData += ";";
csv += "\n" + currentTemplate + ";"+currentTemplateData + "\n";

file = open("Expressions.csv", "w+");
file.write(csv);

print('\rAll done! Found ' + str(len(dataset)) + ' matches!        ');