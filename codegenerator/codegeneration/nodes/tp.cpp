
#include <queue>
#include "tp.h"

queue<string> generateTP(Node* currentNode)
{
    queue<string> tp;
    for(int i=0; i<currentNode->getNodes().size()-1; i++)
        tp.push(currentNode->getNodes().at(i)->getData());
        
    return tp;
}
