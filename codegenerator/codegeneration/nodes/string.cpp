#include "string.h"
#include <stack>
string generateString(Node* currentNode, string result, int tabs, queue<string> &tp , string input, string fontAlign, stack<string> font, stack<string> fontSize, string &tabPosition)
{
    string strings = "";
    if(currentNode->getData() == input){
        if(tp.empty()){
            if(tabPosition == "")
                tabPosition = "1";
            else{
                int posNr = stoi(tabPosition);
                posNr++;
                tabPosition = to_string(posNr);
            }
        }else{
            tabPosition = tp.front();
            tp.pop();
        }
    }else if(currentNode->getParent()->getType() == PARAGRAPH || currentNode->getParent()->getType() == US || currentNode->getParent()->getType() == IF || currentNode->getParent()->getType() == THEN || currentNode->getParent()->getType() == ELSE || currentNode->getParent()->getType() == OR){

        for(int i=0;i<tabs;i++){
            strings +="\t"; 
        }
        strings += "<text name=\"Default\" fontAlign=\""+fontAlign+"\" font=\""+font.top()+"\" size=\""+fontSize.top()+"\" tabPosition=\""+tabPosition+"\" >\n";
        tabPosition = "";
        for(int i=0;i<tabs+1;i++){
            strings +="\t"; 
        }
        strings +=  currentNode->getData()+"\n";
        for(int i=0;i<tabs;i++){
            strings +="\t"; 
        }
        strings += "</text>";
        
        result= strings +"\n";
    }
    return result;
}