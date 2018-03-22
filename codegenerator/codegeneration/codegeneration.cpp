#include <queue> 
#include <stack>
#include "codegeneration.h"
#include "nodes/area.cpp"
#include "nodes/areadefinition.cpp"
#include "nodes/box.cpp"
#include "nodes/fo.cpp"
#include "nodes/font.cpp"
#include "nodes/sp.cpp"
#include "nodes/string.cpp"
#include "nodes/variable.cpp"
#include "nodes/ti.cpp"
#include "nodes/tp.cpp"
#include "nodes/us.cpp"
#include "nodes/doc.cpp"
#include "nodes/pm.cpp"
#include "nodes/nv.cpp"
#include "nodes/newLine.cpp"
#include "nodes/paragraph.cpp"
#include "nodes/br.cpp"
#include "nodes/if.cpp"
#include "nodes/number.cpp"
#include "nodes/else.cpp"
#include "nodes/then.cpp"
#include "nodes/or.cpp"
#include "nodes/dr.cpp"
#include "nodes/hr.cpp"
#include "nodes/pa.cpp"
#include "nodes/am.cpp"
#include "nodes/center.cpp"
#include "nodes/eny.cpp"
#include "nodes/ny.cpp"
#include "nodes/su.cpp"
#include "nodes/ms.cpp"
#include "nodes/dc.cpp"
#include "nodes/kp.cpp"
#include "nodes/pl.cpp"
int nl = 0;
queue <string> tp;
queue <string> tpCopy;
stack <string> font;
stack <string> fontSize;
string input = "";
string tabPosition = "";
string fontAlign = "";
string hexCode = "";

string traverseGenerate(Node* currentNode, int depth)
{
    string result;
    
    
    for (unsigned long i = 0; i < currentNode->getNodes().size(); ++i)
    {
        result += traverseGenerate(currentNode->getNodes().at(i), depth + 1);
    }
    if(currentNode->getType() == DOCUMENT){
        result = generateDoc(currentNode, result, depth);
    }
    if(currentNode->getType() == AREA)
    {
        result = generateArea(currentNode, result, depth);
    }
    if(currentNode->getType() == LINEBREAK)
    {
        result = generateBr(currentNode, result, depth);
    }
    if(currentNode->getType() == AREADEFINITION)
    {
        result = generateAreadefinition(currentNode, result, depth);
    }
    if(currentNode->getType() == BOX)
    {
        result = generateBox(currentNode, result, depth);
    }
    if(currentNode->getType() == FO)
    {
        fontAlign = generateFo(currentNode, result, depth);
    }
    if(currentNode->getType() == FONT)
    {
        generateFont(currentNode, result, font, fontSize);
    }
    if(currentNode->getType() == SP)
    {
        result = generateSp(currentNode, result, depth);
    }
    if(currentNode->getType() == STRING)
    {
        result = generateString(currentNode, result, depth, tp, tpCopy, input, fontAlign, font, fontSize, tabPosition);
    } 
    if(currentNode->getType() == KP)
    {
        result = generateKp(currentNode, result, depth);
    } 
    if(currentNode->getType() == VARIABLE)
    {
        result = generateVariable(currentNode, result, depth, tpCopy, input, fontAlign, font, fontSize, tabPosition);
    }
    if(currentNode->getType() == NUMBER)
    {
        result = generateNumber(currentNode, result, depth, tpCopy, input, fontAlign, font, fontSize, tabPosition);
    }
    if(currentNode->getType() == TI)
    {
        input = generateTI(currentNode, hexCode);
    }
    if(currentNode->getType() == TP)
    {
        tp = generateTP(currentNode);
        tpCopy = tp;
    }
    if(currentNode->getType() == US)
    {
        result = generateUs(currentNode, result, depth);
    }
    if(currentNode->getType() == PM)
    {
        result = generatePm(currentNode, result, depth);
    }
    if(currentNode->getType() == PARAGRAPH)
    {
        result = generateParagraph(currentNode, result, depth);
    }
    if(currentNode->getType() == NV)
    {
        result = generateNv(currentNode, result, depth);
    }
    if(currentNode->getType() == NEWLINE)
    {
        nl++;
        if(nl == 1){
            font.push("");
            fontSize.push("");
        }
        result = generateNewLine(currentNode, result, depth, tp, tpCopy);
    }
    if(currentNode->getType() == IF)
    {
        result = generateIf(currentNode, result, depth);
    }
    if(currentNode->getType() == ELSE)
    {
        result = generateElse(currentNode, result, depth);
    }
    if(currentNode->getType() == OR)
    {
        result = generateOr(currentNode, result, depth);
    }
    if(currentNode->getType() == THEN)
    {
        result = generateThen(currentNode, result, depth);
    }
    if(currentNode->getType() == DR)
    {
        result = generateDr(currentNode, result, depth);
    }
    if(currentNode->getType() == HR)
    {
        result = generateHr(currentNode, result, depth);
    }
    if(currentNode->getType() == PA)
    {
        result = generatePa(currentNode, result, depth);
    }
    if(currentNode->getType() == AM)
    {
        result = generateAm(currentNode, result, depth);
    }
    if(currentNode->getType() == CE)
    {
        result = generateCenter(currentNode, result, depth);
    }
    if(currentNode->getType() == ENY)
    {
        result = generateEny(currentNode, result, depth);
    }
    if(currentNode->getType() == NY)
    {
        result = generateNy(currentNode, result, depth);
    }
    if(currentNode->getType() == SU)
    {
        result = generateSu(currentNode, result, depth);
    }
    if(currentNode->getType() == MS)
    {
        result = generateMs(currentNode, result, depth);
    }
    if(currentNode->getType() == DC)
    {
        result = generateDc(currentNode, result, depth);
    }
    if(currentNode->getType() == PL)
    {
        result = generatePl(currentNode, result, depth);
    }
    return result;
}