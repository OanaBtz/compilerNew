//
// Created by dennis on 1/2/18.
//

#include "sp.h"

bool typecheckSP(Node* currentNode)
{
    if(currentNode->getParent()->getType() != AREA
       && currentNode->getParent()->getType() != BOX)
    {
        cout << "SP must be child of AREA or BOX" << endl;
        return false;
    }
    if(currentNode->getNodes().at(0)->getType() != NUMBER)
    {
        cout << "Child of SP must be NUMBER" << endl;
        return false;
    }
    return true;
}