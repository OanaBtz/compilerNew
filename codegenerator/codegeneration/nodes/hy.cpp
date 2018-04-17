
#include "../../model/Node.h"

string generateHy(Node* currentNode, string result, int tabs)
{
    
    string hy = "";
    
    for(int i=0;i<tabs;i++){
        hy+="\t";
    }
    hy += "<Hypernate rule= \" ";
    for(int i=0; i< currentNode->getNodes().size(); i++){

        hy += currentNode->getNodes().at(i)->getData() + " ";
    }

    hy += "\"/>\n";

    return hy;
}