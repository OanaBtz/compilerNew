

#include "ti.h"

string generateTI(Node* currentNode, string &hexCode)
{
    hexCode = currentNode->getNodes().at(1)->getData();
    return currentNode->getNodes().at(0)->getData();
}