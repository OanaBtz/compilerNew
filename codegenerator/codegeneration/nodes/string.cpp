#include "../../model/Node.h"
#include <stack>

string generateString(Node* currentNode, string result, int tabs, queue<string> &tp, queue<string> &tpCopy , string input, string fontAlign, stack<string> font, stack<string> fontSize, string &tabPosition)
{
    cout<<"here "<<currentNode->getData()<<endl;
    cout << currentNode->getType()<<endl;
    cout <<"AAAA"<<endl;
    cout << currentNode->getParent()->getType()<<endl;
    string strings = "";
    string fonthere = "";
    string fontSizehere = "";

    if(currentNode->getParent()->getType() == TI)
    {
        return result;
    }
    
    if(currentNode->getData() == input){
    
        if(tpCopy.empty()){
            tpCopy = tp;
        }
        if(!tpCopy.empty())
        {
            tabPosition = tpCopy.front();
            tpCopy.pop();
        }
        else{
            tabPosition = "TAB";
        }
    }else if(currentNode->getParent()->getType() == PARAGRAPH || currentNode->getParent()->getType() == THEN || currentNode->getParent()->getType() == OR || currentNode->getParent()->getType() == IF || currentNode->getParent()->getType() == ELSE || currentNode->getParent()->getType() == AND || currentNode->getParent()->getType() == US){

         if(font.size()>0){
            fonthere=font.top();
        }else
            fonthere="";

        if(fontSize.size()>0){
            fontSizehere=font.top();
        }else
            fontSizehere="";

        for(int i=0;i<tabs;i++){
            strings +="\t"; 
        }
        strings += "<text name=\"Default\" fontAlign=\""+fontAlign+"\" font=\""+fonthere+"\" size=\""+fontSizehere+"\" tabPosition=\""+tabPosition+"\" >\n";
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