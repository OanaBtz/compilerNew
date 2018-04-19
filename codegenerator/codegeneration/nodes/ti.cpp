#include "../../model/Node.h"

string generateTI(Node* currentNode, string &hexCode)
{
    if(currentNode->getNodes().size()>1){
        hexCode = currentNode->getNodes().at(1)->getData();
        return currentNode->getNodes().at(0)->getData();
    }
    return "";
}