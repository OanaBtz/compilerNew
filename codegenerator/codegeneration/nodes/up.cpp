#include "../../model/Node.h"

string generateUp(Node* currentNode, string result, int tabs)
{
    string up = "";
    for(int i=0;i<tabs;i++){
        up+="\t";
    }
    up += "<uppercase>\n";
    up += result;

    for(int i=0;i<tabs;i++){
        up+="\t";
    }
    up += "</uppercase>\n";
    return up;
   
}