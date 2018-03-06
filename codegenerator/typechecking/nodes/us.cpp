//
// Created by dennis on 1/2/18.
//

#include "us.h"

bool typecheckUS(Node* currentNode)
{
    if(currentNode->getParent()->getType() != AREA
       && currentNode->getParent()->getType() != BOX
       && currentNode->getParent()->getType() != DOCUMENT)
    {
        cout << "US must be child of AREA, BOX, or DOCUMENT" << endl;
        return false;
    }
    if(currentNode->getNodes().at(0)->getType() != STRINGLITERAL
       && currentNode->getNodes().at(0)->getType() != STRINGVARIABLE)
    {
        cout << "Child of US must be STRINGLITERAL or STRINGVARIABLE" << endl;
        return false;
    }
    return true;
}