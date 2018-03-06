//
// Created by dennis on 1/2/18.
//

#include "codegeneration.h"
#include "nodes/area.cpp"
#include "nodes/areadefinition.cpp"
#include "nodes/box.cpp"
#include "nodes/fo.cpp"
#include "nodes/font.cpp"
#include "nodes/linebreak.cpp"
#include "nodes/sp.cpp"
#include "nodes/stringliteral.cpp"
#include "nodes/stringvariable.cpp"
#include "nodes/ti.cpp"
#include "nodes/tp.cpp"
#include "nodes/us.cpp"

string traverseGenerate(Node* currentNode)
{
    string result;

    for (unsigned long i = 0; i < currentNode->getNodes().size(); ++i)
    {
        result += traverseGenerate(currentNode->getNodes().at(i));
    }
    if(currentNode->getType() == AREA)
    {
        result = generateArea(currentNode, result);
    }
    if(currentNode->getType() == AREADEFINITION)
    {
        result = generateAreadefinition(currentNode, result);
    }
    if(currentNode->getType() == BOX)
    {
        result = generateBox(currentNode, result);
    }
    if(currentNode->getType() == FO)
    {
        result = generateFO(currentNode, result);
    }
    if(currentNode->getType() == FONT)
    {
        result = generateFont(currentNode, result);
    }
    if(currentNode->getType() == LINEBREAK)
    {
        result = generateLinebreak(currentNode, result);
    }
    if(currentNode->getType() == SP)
    {
        result = generateSP(currentNode, result);
    }
    if(currentNode->getType() == STRING)
    {
        result = generateStringliteral(currentNode, result);
    }
    if(currentNode->getType() == VARIABLE)
    {
        result = generateStringvariable(currentNode, result);
    }
    if(currentNode->getType() == TI)
    {
        result = generateTI(currentNode, result);
    }
    if(currentNode->getType() == TP)
    {
        result = generateTP(currentNode, result);
    }
    if(currentNode->getType() == US)
    {
        result = generateUS(currentNode, result);
    }
    return result;
}