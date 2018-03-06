//
// Created by dennis on 1/2/18.
//

#include "ti.h"

bool typecheckTI(Node* currentNode)
{
    if(currentNode->getParent()->getType() != DOCUMENT)
    {
        cout << "TI must be child of DOCUMENT" << endl;
        return false;
    }
    if(currentNode->getNodes().at(0)->getType() != CHARACTER
       || currentNode->getNodes().at(1)->getType() != NUMBER)
    {
        cout << "Wrong syntax in TI. Must be: CHARACTER NUMBER" << endl;
        return false;
    }
    return true;
}
