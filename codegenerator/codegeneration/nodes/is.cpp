
#include "../../model/Node.h"

string generateIs(Node* currentNode, string result, int tabs)
{
    
    string is = "";
    
    for(int i=0;i<tabs;i++){
        is+="\t";
    }
    is += "<inlineSpace rule=\" ";
    for(int i=0; i< currentNode->getNodes().size(); i++){

        is += currentNode->getNodes().at(i)->getData() + " ";
    }

    is += "\"/>\n";

    return is;
}