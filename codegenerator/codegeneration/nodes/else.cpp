#include "../../model/Node.h"

string generateElse(Node* currentNode, string result, int tabs)
{
    string elseT = "";

    for(int i=0;i<tabs;i++){
        elseT+="\t";
    }
    elseT+="<else>\n";
    elseT += result;

    for(int i=0;i<tabs;i++){
        elseT+="\t";
    }
    elseT+="</else>\n";
    return elseT;
}
