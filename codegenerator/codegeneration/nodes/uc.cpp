#include "../../model/Node.h"

string generateUc(Node* currentNode, string result, int tabs)
{
    string uc = "";
    for(int i=0;i<tabs;i++){
        uc+="\t";
    }
    uc += "<underscore>\n";
    uc += result;

    for(int i=0;i<tabs;i++){
        uc+="\t";
    }
    uc += "</underscore>\n";
    return uc;
   
}