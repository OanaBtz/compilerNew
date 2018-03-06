//
// Created by dennis on 1/2/18.
//

#include "string.h"

bool typecheckString(Node* currentNode)
{
    if(currentNode->getParent()->getType() != AREA
       && currentNode->getParent()->getType() != BOX
       && currentNode->getParent()->getType() != DOCUMENT
       && currentNode->getParent()->getType() != US)
    {
        cout << "STRINGVARIABLE or STRINGLITERAL must be child of AREA, BOX, DOCUMENT, or US" << endl;
        return false;
    }
    if(currentNode->getType() == STRINGVARIABLE)
    {
        if(currentNode->getNodes().at(0)->getType() != NAME)
        {
            cout << "Child of STRINGVARIABLE must be NAME" << endl;
            return false;
        }
    }
    return true;
}