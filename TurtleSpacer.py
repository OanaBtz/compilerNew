# -*- coding: utf-8 -*-

from os import listdir;
import re;
import sys;

dataset = [];

banks = listdir("./LTD");
banks.sort();

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
    # sys.stdout.write(string);
    # sys.stdout.flush();
    # print ('\x1b[2K\r',)


def processTemplate(template, bank):
    global regex;
    global dataset;
    file = open("./LTD/"+bank+"/"+template);
    data = file.read();

    lines = data.split("\n");

    tabChar = "";

    output = "";

    for i in range(0, len(lines)):
        line ="";
        if(re.match("\.ti . 05" ,lines[i]) or re.match("\.ti ¤ 05", lines[i])):
            tabChar = lines[i][4];
            for j in range(0, len(lines[i])):
                c = lines[i][j];
                line += c;
        elif (tabChar != ""):

            for j in range(0, len(lines[i])):
                c = lines[i][j];

                if(tabChar == lines[i][j]):
                    if(lines[i][j - 1] != " " and lines[i][j-1] != tabChar):
                        line += "\x20";

                    line += c;
                    if(j + 1 < len(lines[i]) and lines[i][j+1] != " "):
                        line += "\x20";

                else:
                    line += c;
        else:
            line = lines[i];
        output += line + "\n";

    file = open("./LTD/"+bank+"/"+template, "w");
    file.write(output);




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

print("All done!");