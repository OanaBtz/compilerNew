//
// Created by dennis on 1/2/18.
//

#include "linebreak.h"

bool typecheckLinebreak(Node* currentNode)
{
    if(currentNode->getParent()->getType() != AREA
       && currentNode->getParent()->getType() != BOX)
    {
        cout << "LINEBREAK must be child of AREA or BOX" << endl;
        return false;
    }
    return true;
}