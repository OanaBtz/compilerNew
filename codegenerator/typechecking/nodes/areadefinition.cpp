//
// Created by dennis on 1/2/18.
//

#include "areadefinition.h"

bool typecheckAreaDefinition(Node* currentNode)
{
    if(currentNode->getParent()->getType() != DOCUMENT)
    {
        cout << "AREADEFINITION must be child of DOCUMENT" << endl;
        return false;
    }

    if(currentNode->getNodes().at(0)->getType() != NAME
       || currentNode->getNodes().at(1)->getType() != NUMBER
       || currentNode->getNodes().at(2)->getType() != NUMBER
       || currentNode->getNodes().at(3)->getType() != NUMBER)
    {
        cout << "Wrong syntax in AREADEFINITION. Must be: NAME NUMBER NUMBER NUMBER (ROTATE)" << endl;
        return false;
    }
    if(currentNode->getNodes().size() > 4)
    {
        if(currentNode->getNodes().at(4)->getType() != ROTATE)
        {
            cout << "5th child in AREADEFINITION is not a ROTATE" << endl;
            return false;
        }
    }
    return true;
}