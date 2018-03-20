
#include "dr.h"

string generateDr(Node* currentNode, string result, int tabs)
{
    
    string dr = "";
    
    for(int i=0;i<tabs;i++){
        dr+="\t";
    }
    dr += "<dr rule= \"";

    for(int i=0; i< currentNode->getNodes().size(); i++){

        dr += currentNode->getNodes().at(i)->getData() + " ";
    }

    dr += "\"/>\n";

    return dr;
}