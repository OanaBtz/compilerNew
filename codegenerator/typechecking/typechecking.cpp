//
// Created by dennis on 1/2/18.
//

#include "typechecking.h"
#include "nodes/areadefinition.h"
#include "nodes/area.h"
#include "nodes/box.h"
#include "nodes/font.h"
#include "nodes/tp.h"
#include "nodes/ti.h"
#include "nodes/us.h"
#include "nodes/string.h"
#include "nodes/sp.h"
#include "nodes/linebreak.h"
#include "nodes/fo.h"


bool traverseTypecheck(Node* currentNode, bool hasNoErrors)
{
    for (unsigned long i = 0; i < currentNode->getNodes().size(); ++i)
    {
        hasNoErrors = traverseTypecheck(currentNode->getNodes().at(i), hasNoErrors);
        if(!hasNoErrors)
        {
            break;
        }
    }
    if(hasNoErrors)
    {
        if(currentNode->getType() == AREADEFINITION)
        {
            hasNoErrors = typecheckAreaDefinition(currentNode);
        }
        if(currentNode->getType() == AREA)
        {
            hasNoErrors = typecheckArea(currentNode);
        }
        if(currentNode->getType() == BOX)
        {
            hasNoErrors = typecheckBox(currentNode);
        }
        if(currentNode->getType() == FONT)
        {
            hasNoErrors = typecheckFont(currentNode);
        }
        if(currentNode->getType() == TP)
        {
            hasNoErrors = typecheckTP(currentNode);
        }
        if(currentNode->getType() == TI)
        {
            hasNoErrors = typecheckTI(currentNode);
        }
        if(currentNode->getType() == US)
        {
            hasNoErrors = typecheckUS(currentNode);
        }
        if(currentNode->getType() == STRINGVARIABLE || currentNode->getType() == STRINGLITERAL)
        {
            hasNoErrors = typecheckString(currentNode);
        }
        if(currentNode->getType() == SP)
        {
            hasNoErrors = typecheckSP(currentNode);
        }
        if(currentNode->getType() == LINEBREAK)
        {
            hasNoErrors = typecheckLinebreak(currentNode);
        }
        if(currentNode->getType() == FO)
        {
            hasNoErrors = typecheckFO(currentNode);
        }
    }
    return hasNoErrors;
}


