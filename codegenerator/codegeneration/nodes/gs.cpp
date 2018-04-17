
#include "../../model/Node.h"

string generateGs(Node* currentNode, string result, int tabs)
{
    
    string gs = "";
    
    for(int i=0;i<tabs;i++){
        gs+="\t";
    }
    gs += "<GML service=\" ";
    for(int i=0; i< currentNode->getNodes().size(); i++){

        gs += currentNode->getNodes().at(i)->getData() + " ";
    }

    gs += "\"/>\n";

    return gs;
}