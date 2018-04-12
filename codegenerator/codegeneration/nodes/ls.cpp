
#include "../../model/Node.h"

string generateLs(Node* currentNode, string result, int tabs)
{
    
    string ls = "";
    
    for(int i=0;i<tabs;i++){
        ls+="\t";
    }
    ls += "<lineSpacing rule=\" ";
    for(int i=0; i< currentNode->getNodes().size(); i++){

        ls += currentNode->getNodes().at(i)->getData() + " ";
    }

    ls += "\"/>\n";

    return ls;
}