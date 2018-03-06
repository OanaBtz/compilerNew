//
// Created by dennis on 1/2/18.
//

#include "area.h"
#include "../../utility/searching.h"

bool typecheckArea(Node* currentNode)
{
    if (findAreaDefinition(currentNode, currentNode->getNodes().at(0)->getData(), NULL) == NULL)
    {
        cout << "AREA has no related AREADEFINITION" << endl;
        return false;
    }
    if (currentNode->getParent()->getType() != DOCUMENT)
    {
        cout << "AREA must be child of DOCUMENT" << endl;
        return false;
    }
    if (currentNode->getNodes().at(0)->getType() != NAME)
    {
        cout << "First child of AREA must be NAME" << endl;
        return false;
    }
    return true;
}