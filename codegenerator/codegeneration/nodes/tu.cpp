
#include "../../model/Node.h"

string generateTu(Node* currentNode, string result, int tabs)
{
    
    string tu = "";
    
    for(int i=0;i<tabs;i++){
        tu+="\t";
    }
    tu += "<translateUppercase rule=\" ";
    for(int i=0; i< currentNode->getNodes().size(); i++){

        tu += currentNode->getNodes().at(i)->getData() + " ";
    }

    tu += "\"/>\n";

    return tu;
}