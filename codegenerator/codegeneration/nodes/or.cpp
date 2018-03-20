
#include "or.h"

string generateOr(Node* currentNode, string result, int tabs)
{
    string orT = "";

    for(int i=0;i<tabs;i++){
        orT+="\t";
    }
    orT+="<else>\n";
    orT += result;

    for(int i=0;i<tabs;i++){
        orT+="\t";
    }
    orT+="</else>\n";
    return orT;
}
