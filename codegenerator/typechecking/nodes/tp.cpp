//
// Created by dennis on 1/2/18.
//

#include "tp.h"

bool typecheckTP(Node* currentNode)
{
    if(currentNode->getParent()->getType() != AREA)
    {
        cout << "TP must be child of AREA" << endl;
        return false;
    }
    for (unsigned long i = 0; i < currentNode->getNodes().size(); ++i)
    {
        if(currentNode->getNodes().at(i)->getType() != NUMBER)
        {
            cout << "Children of TP must be NUMBER" << endl;
            return false;
        }
    }
    return true;
}