//
// Created by dennis on 1/2/18.
//

#include "fo.h"

bool typecheckFO(Node* currentNode)
{
    if(currentNode->getParent()->getType() != DOCUMENT)
    {
        cout << "FO must be child of DOCUMENT" << endl;
        return false;
    }
    if(currentNode->getNodes().at(0)->getType() != RIGHT
       && currentNode->getNodes().at(0)->getType() != LEFT)
    {
        cout << "Child of FO must be LEFT or RIGHT" << endl;
        return false;
    }
    return true;
}