
#include "../../model/Node.h"
#include <stack> 
string generateVariable(Node* currentNode, string result, int tabs, queue<string> &tp , string input, string fontAlign, stack <string> font, stack <string> fontSize, string &tabPosition)
{
    string vars = "";
    string fonthere = "";
    string fontSizehere = "";
    if(currentNode->getParent()->getType() == PARAGRAPH || currentNode->getParent()->getType() == THEN || currentNode->getParent()->getType() == OR || currentNode->getParent()->getType() == IF || currentNode->getParent()->getType() == ELSE || currentNode->getParent()->getType() == AND || currentNode->getParent()->getType() == CT  || currentNode->getParent()->getType() == CE  || currentNode->getParent()->getType() == US ){

        
        for(int i=0;i<tabs;i++){
            vars +="\t"; 
        }
        if(font.size()>0){
            fonthere=font.top();
        }else
            fonthere="";

        if(fontSize.size()>0){
            fontSizehere=font.top();
        }else
            fontSizehere="";

        vars += "<text name=\"Default\" fontAlign=\""+fontAlign+"\" font=\""+fonthere+"\" size=\""+fontSizehere+"\" tabPosition=\""+tabPosition+"\" >\n";
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