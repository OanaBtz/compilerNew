
#include "../../model/Node.h"

string generateTb(Node* currentNode, string result, int tabs)
{
    
    string tb = "";
    
    for(int i=0;i<tabs;i++){
        tb+="\t";
    }
    tb += "<tabSetting rule=\" ";
    for(int i=0; i< currentNode->getNodes().size(); i++){

        tb += currentNode->getNodes().at(i)->getData() + " ";
    }

    tb += "\"/>\n";

    return tb;
}