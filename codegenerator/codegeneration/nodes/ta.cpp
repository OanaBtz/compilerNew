
#include "../../model/Node.h"

string generateTa(Node* currentNode, string result, int tabs)
{
    
    string ta = "";
    
    for(int i=0;i<tabs;i++){
        ta+="\t";
    }
    ta += "<table rule=\" ";
    for(int i=0; i< currentNode->getNodes().size(); i++){

        ta += currentNode->getNodes().at(i)->getData() + " ";
    }

    ta += "\"/>\n";

    return ta;
}