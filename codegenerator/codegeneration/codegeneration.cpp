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
#include "nodes/ct.cpp"
#include "nodes/vr.cpp"
#include "nodes/uc.cpp"
#include "nodes/li.cpp"
#include "nodes/ri.cpp"
#include "nodes/up.cpp"
#include "nodes/pw.cpp"
#include "nodes/cc.cpp"
#include "nodes/un.cpp"
#include "nodes/ll.cpp"
#include "nodes/tm.cpp"
#include "nodes/bm.cpp"
#include "nodes/cl.cpp"
#include "nodes/of.cpp"
#include "nodes/il.cpp"
#include "nodes/se.cpp"
#include "nodes/cb.cpp"
#include "nodes/sc.cpp"
#include "nodes/mc.cpp"
#include "nodes/qu.cpp"
#include "nodes/hw.cpp"
#include "nodes/cd.cpp"
#include "nodes/sk.cpp"
#include "nodes/tb.cpp"
#include "nodes/oi.cpp"
#include "nodes/oc.cpp"
#include "nodes/bc.cpp"
#include "nodes/is.cpp"
#include "nodes/ls.cpp"
#include "nodes/tu.cpp"
#include "nodes/td.cpp"
#include "nodes/gs.cpp"
#include "nodes/ta.cpp"
#include "nodes/it.cpp"
#include "nodes/du.cpp"
#include "nodes/im.cpp"
#include "nodes/hy.cpp"
#include "nodes/goto.cpp"
#include "nodes/in.cpp"
#include "nodes/ir.cpp"
#include "nodes/rh.cpp"


int nl = 0;
queue <string> tp;
queue <string> tpCopy;
stack <string> font;
stack <string> fontSize;
string input = "";
string tabPosition = "0";
string fontAlign = "left";
string hexCode = "";

string oldFont = "";
string oldFontSize = "";
string oldFontAlign = "";
string oldTabPosition = "";

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
        result = generateString(currentNode, result, depth, tp, tpCopy, input, fontAlign, font, fontSize, tabPosition, oldFontAlign, oldFont, oldFontSize, oldTabPosition);
    } 
    if(currentNode->getType() == KP)
    {
        result = generateKp(currentNode, result, depth);
    } 
    if(currentNode->getType() == VARIABLE)
    {
        result = generateVariable(currentNode, result, depth, tpCopy, input, fontAlign, font, fontSize, tabPosition, oldFontAlign, oldFont, oldFontSize, oldTabPosition);
    }
    if(currentNode->getType() == NUMBER)
    {
        result = generateNumber(currentNode, result, depth, tpCopy, input, fontAlign, font, fontSize, tabPosition, oldFontAlign, oldFont, oldFontSize, oldTabPosition);
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
        result = generateParagraph(currentNode, result, depth, tp, tpCopy, input, fontAlign, font, fontSize, tabPosition, oldFontAlign, oldFont, oldFontSize, oldTabPosition);
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
    if(currentNode->getType() == UC)
    {
        result = generateUc(currentNode, result, depth);
    }
    if(currentNode->getType() == LI)
    {
        result = generateLi(currentNode, result, depth);
    }
    if(currentNode->getType() == RI)
    {
        result = generateRi(currentNode, result, depth);
    }
    if(currentNode->getType() == UP)
    {
        result = generateUp(currentNode, result, depth);
    }
    if(currentNode->getType() == VR)
    {
        result = generateVr(currentNode, result, depth);
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
    if(currentNode->getType() == CT)
    {
        result = generateCt(currentNode, result, depth);
    }
    if(currentNode->getType() == PW)
    {
        result = generatePw(currentNode, result, depth);
    }
    if(currentNode->getType() == CC)
    {
        result = generateCc(currentNode, result, depth);
    }
    if(currentNode->getType() == UN)
    {
        result = generateUn(currentNode, result, depth);
    }
    if(currentNode->getType() == LL)
    {
        result = generateLl(currentNode, result, depth);
    }
    if(currentNode->getType() == TM)
    {
        result = generateTm(currentNode, result, depth);
    }
    if(currentNode->getType() == BM)
    {
        result = generateBm(currentNode, result, depth);
    }
    if(currentNode->getType() == CL)
    {
        result = generateCl(currentNode, result, depth);
    }
    if(currentNode->getType() == OF)
    {
        result = generateOf(currentNode, result, depth);
    }
    if(currentNode->getType() == IL)
    {
        result = generateIl(currentNode, result, depth);
    }
    if(currentNode->getType() == SE)
    {
        result = generateSe(currentNode, result, depth);
    }
    if(currentNode->getType() == CB)
    {
        result = generateCb(currentNode, result, depth);
    }
    if(currentNode->getType() == SC)
    {
        result = generateSc(currentNode, result, depth);
    }
    if(currentNode->getType() == MC)
    {
        result = generateMc(currentNode, result, depth);
    }
    if(currentNode->getType() == GO)
    {
        result = generateGo(currentNode, result, depth);
    }
    if(currentNode->getType() == QU)
    {
        result = generateQu(currentNode, result, depth);
    }
    if(currentNode->getType() == HW)
    {
        result = generateHw(currentNode, result, depth);
    }
    if(currentNode->getType() == CD)
    {
        result = generateCd(currentNode, result, depth);
    }
    if(currentNode->getType() == SK)
    {
        result = generateSk(currentNode, result, depth);
    }
    if(currentNode->getType() == TB)
    {
        result = generateTb(currentNode, result, depth);
    }
    if(currentNode->getType() == OI)
    {
        result = generateOi(currentNode, result, depth);
    }
    if(currentNode->getType() == OC)
    {
        result = generateOc(currentNode, result, depth);
    }
    if(currentNode->getType() == BC)
    {
        result = generateBc(currentNode, result, depth);
    }
    if(currentNode->getType() == IS)
    {
        result = generateIs(currentNode, result, depth);
    }
    if(currentNode->getType() == LS)
    {
        result = generateLs(currentNode, result, depth);
    }
    if(currentNode->getType() == TU)
    {
        result = generateTu(currentNode, result, depth);
    }
    if(currentNode->getType() == TD)
    {
        result = generateTd(currentNode, result, depth);
    }
    if(currentNode->getType() == GS)
    {
        result = generateGs(currentNode, result, depth);
    }
    if(currentNode->getType() == TA)
    {
        result = generateTa(currentNode, result, depth);
    }
    if(currentNode->getType() == IT)
    {
        result = generateIt(currentNode, result, depth);
    }
    if(currentNode->getType() == DU)
    {
        result = generateDu(currentNode, result, depth);
    }
    if(currentNode->getType() == VS)
    {
        fontAlign = "left";
    }
    if(currentNode->getType() == IM)
    {
        result = generateIm(currentNode, result, depth);
    }
    if(currentNode->getType() == HY)
    {
        result = generateHy(currentNode, result, depth);
    }
    if(currentNode->getType() == IN)
    {
        result = generateIn(currentNode, result, depth-1);
    }
    if(currentNode->getType() == IR)
    {
        result = generateIr(currentNode, result, depth);
    }
    if(currentNode->getType() == RH)
    {
        result = generateRh(currentNode, result, depth);
    }
    if(currentNode->getType() == SPACE)
    {
        cout<<endl<<"More than 1 space here!"<<endl<<endl;
    }
    return result;
}