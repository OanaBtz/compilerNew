
#include "../../model/Node.h"

string generateTd(Node* currentNode, string result, int tabs)
{
    
    string td = "";
    
    for(int i=0;i<tabs;i++){
        td+="\t";
    }
    td += "<table definition=\" ";
    for(int i=0; i< currentNode->getNodes().size(); i++){

        td += currentNode->getNodes().at(i)->getData() + " ";
    }

    td += "\"/>\n";

    return td;
}