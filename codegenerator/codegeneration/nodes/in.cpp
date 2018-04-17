
#include "../../model/Node.h"

string generateIn(Node* currentNode, string result, int tabs)
{
    
    string in = "";
    
    for(int i=0;i<tabs;i++){
        in+="\t";
    }
    in += "<indentation size=\"";
    
    for(int i=0; i<currentNode->getNodes().size()-1; i++){
        in += currentNode->getNodes().at(i)->getData() + " ";
    }

    in += "\" />\n";
    return in;
}