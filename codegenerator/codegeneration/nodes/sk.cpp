
#include "../../model/Node.h"

string generateSk(Node* currentNode, string result, int tabs)
{
    
    string sk = "";
    
    for(int i=0;i<tabs;i++){
        sk+="\t";
    }
    sk += "<skip rule=\" ";
    for(int i=0; i< currentNode->getNodes().size(); i++){

        sk += currentNode->getNodes().at(i)->getData() + " ";
    }

    sk += "\"/>\n";

    return sk;
}