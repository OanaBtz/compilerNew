#include "../../model/Node.h"
#include <stack>

string generateString(Node* currentNode, string result, int tabs, queue<string> &tp, queue<string> &tpCopy , string input, string fontAlign, stack<string> font, stack<string> fontSize, string &tabPosition, string &oldFontAlign, string &oldFont, string &oldFontSize, string &oldTabPosition)
{
    string strings = "";
    string fonthere = "";
    string fontSizehere = "";

    if(currentNode->getParent()->getType() == TI)
    {
        return result;
    }
    
    if(currentNode->getData() == input){
        if(tp.empty()){
            tabPosition = "tab";
        }else{
            if(tpCopy.empty()){
                tpCopy = tp;
            }else{
                tabPosition = tpCopy.front();
                tpCopy.pop();

            }
        }
    }else if(currentNode->getParent()->getType() == THEN || currentNode->getParent()->getType() == OR || currentNode->getParent()->getType() == IF || currentNode->getParent()->getType() == ELSE || currentNode->getParent()->getType() == AND){

        for(int i=0;i<tabs;i++){
            strings +="\t"; 
        }
        strings +=  currentNode->getData()+"\n";

    }else if(currentNode->getParent()->getType() == CT || currentNode->getParent()->getType() == US){

    }
    return strings;
}