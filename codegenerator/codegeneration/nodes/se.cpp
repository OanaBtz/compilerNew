
#include "../../model/Node.h"

string generateSe(Node* currentNode, string result, int tabs)
{
    
    string se = "";
    
    for(int i=0;i<tabs;i++){
        se+="\t";
    }
    se += "<setSymbol rule= \"";
    for(int i=0; i< currentNode->getNodes().size(); i++){

        se += currentNode->getNodes().at(i)->getData() + " ";
    }

    se += "\"/>\n";

    return se;
}