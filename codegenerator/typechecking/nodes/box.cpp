//
// Created by dennis on 1/2/18.
//

#include "box.h"

bool typecheckBox(Node* currentNode)
{
    if(currentNode->getParent()->getType() != AREA)
    {
        cout << "BOX must be child of AREA" << endl;
        return false;
    }
    return true;
}