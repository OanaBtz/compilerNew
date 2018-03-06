//
// Created by dennis on 1/2/18.
//

#include "font.h"

bool typecheckFont(Node* currentNode)
{
    if(currentNode->getParent()->getType() != AREA
       && currentNode->getParent()->getType() != BOX
       && currentNode->getParent()->getType() != DOCUMENT)
    {
        cout << "FONT must be child of AREA, BOX, or DOCUMENT" << endl;
        return false;
    }
    if(currentNode->getNodes().at(0)->getType() != NAME
       || currentNode->getNodes().at(1)->getType() != NUMBER
       || currentNode->getNodes().at(2)->getType() != TYPE)
    {
        cout << "Wrong syntax in FONT. Must be: NAME NUMBER TYPE" << endl;
        return false;
    }
    return true;
}