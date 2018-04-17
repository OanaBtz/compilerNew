#include "../../model/Node.h"
#include <stack>
string generateNumber(Node* currentNode, string result, int tabs, queue<string> &tp , string input, string fontAlign, stack <string> font, stack <string> fontSize, string &tabPosition)
{
    string fonthere = "";
    string fontSizehere = "";
    string nr = "";
    if(currentNode->getParent()->getType() == PARAGRAPH || currentNode->getParent()->getType() == RH || currentNode->getParent()->getType() == THEN || currentNode->getParent()->getType() == OR || currentNode->getParent()->getType() == CT || currentNode->getParent()->getType() == IF || currentNode->getParent()->getType() == ELSE || currentNode->getParent()->getType() == AND || currentNode->getParent()->getType() == US){

        if(font.size()>0){
            fonthere=font.top();
        }else
            fonthere="";

        if(fontSize.size()>0){
            fontSizehere=fontSize.top();
        }else
            fontSizehere="";

        for(int i=0;i<tabs;i++){
            nr +="\t"; 
        }
        nr += "<text name=\"Default\" fontAlign=\""+fontAlign+"\" font=\""+fonthere+"\" size=\""+fontSizehere+"\" tabPosition=\""+tabPosition+"\" >\n";
        tabPosition = "";
        for(int i=0;i<tabs+1;i++){
            nr +="\t"; 
        }
        nr +=  currentNode->getData()+"\n";
        for(int i=0;i<tabs;i++){
            nr +="\t"; 
        }
        nr += "</text>";
        result= nr +"\n";
    }
    
    return result;
}