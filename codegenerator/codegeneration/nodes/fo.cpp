#include "../../model/Node.h"

string generateFo(Node* currentNode, string result, int tabs)
{
    return currentNode->getNodes().at(0)->getData();
}