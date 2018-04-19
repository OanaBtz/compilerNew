#include "../../model/Node.h"
#include <stack>
string generateNumber(Node* currentNode, string result, int tabs, queue<string> &tp , string input, string fontAlign, stack <string> font, stack <string> fontSize, string &tabPosition, string &oldFontAlign, string &oldFont, string &oldFontSize, string &oldTabPosition)
{
    string fonthere = "";
    string fontSizehere = "";
    string nr = "";
    if(currentNode->getParent()->getType() == THEN || currentNode->getParent()->getType() == OR || currentNode->getParent()->getType() == IF || currentNode->getParent()->getType() == ELSE || currentNode->getParent()->getType() == AND){

        for(int i=0;i<tabs;i++){
            nr +="\t"; 
        }
        nr +=  currentNode->getData()+"\n";

    }else if(currentNode->getParent()->getType() == RH || currentNode->getParent()->getType() == CT || currentNode->getParent()->getType() == US){

    }
    return nr;
}