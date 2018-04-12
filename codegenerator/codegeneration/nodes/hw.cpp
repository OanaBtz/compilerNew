
#include "../../model/Node.h"

string generateHw(Node* currentNode, string result, int tabs)
{
    
    string hw = "";
    
    for(int i=0;i<tabs;i++){
        hw+="\t";
    }
    hw += "<hypernate word= \" ";
    for(int i=0; i< currentNode->getNodes().size(); i++){

        hw += currentNode->getNodes().at(i)->getData() + " ";
    }

    hw += "\"/>\n";

    return hw;
}