
#include "../../model/Node.h"

string generateCd(Node* currentNode, string result, int tabs)
{
    
    string cd = "";
    
    for(int i=0;i<tabs;i++){
        cd+="\t";
    }
    cd += "<column definition =\" ";
    for(int i=0; i< currentNode->getNodes().size(); i++){

        cd += currentNode->getNodes().at(i)->getData() + " ";
    }

    cd += "\"/>\n";

    return cd;
}