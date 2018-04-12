
#include "../../model/Node.h"

string generateOc(Node* currentNode, string result, int tabs)
{
    
    string oc = "";
    
    for(int i=0;i<tabs;i++){
        oc+="\t";
    }
    oc += "<output comment=\" ";
    for(int i=0; i< currentNode->getNodes().size(); i++){

        oc += currentNode->getNodes().at(i)->getData() + " ";
    }

    oc += "\"/>\n";

    return oc;
}