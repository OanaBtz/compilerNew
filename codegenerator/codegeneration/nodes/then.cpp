
#include "then.h"

string generateThen(Node* currentNode, string result, int tabs)
{
    string then = "";
    
    for(int i=0;i<tabs;i++){
        then+="\t";
    }
    then += "<then>\n";
    
    then += result;

    for(int i=0;i<tabs;i++){
        then+="\t";
    }
    then += "</then>\n";

    return then;
}