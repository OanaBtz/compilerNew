
#include "variable.h"
#include <stack> 
string generateVariable(Node* currentNode, string result, int tabs, queue<string> &tp , string input, string fontAlign, stack <string> font, stack <string> fontSize, string &tabPosition)
{
    string vars = "";
    if(currentNode->getParent()->getType() == PARAGRAPH || currentNode->getParent()->getType() == US || currentNode->getParent()->getType() == IF || currentNode->getParent()->getType() == THEN || currentNode->getParent()->getType() == ELSE || currentNode->getParent()->getType() == OR){

        for(int i=0;i<tabs;i++){
            vars +="\t"; 
        }
        vars += "<text name=\"Default\" fontAlign=\""+fontAlign+"\" font=\""+font.top()+"\" size=\""+fontSize.top()+"\" tabPosition=\""+tabPosition+"\" >\n";
        tabPosition = "";
        for(int i=0;i<tabs+1;i++){
            vars +="\t"; 
        }
        vars += "<![CDATA[var name=\"";
        vars +=  currentNode->getData()+"\"]]>\n";
        for(int i=0;i<tabs;i++){
            vars +="\t"; 
        }
        vars += "</text>";
        result= vars +"\n";
    }
    
    return result;
}