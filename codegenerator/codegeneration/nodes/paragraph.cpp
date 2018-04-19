#include "../../model/Node.h"

string generateParagraph(Node* currentNode, string result, int tabs, queue<string> &tp, queue<string> &tpCopy , string input, string fontAlign, stack<string> font, stack<string> fontSize, string &tabPosition, string &oldFontAlign, string &oldFont, string &oldFontSize, string &oldTabPosition)
{
    string p = "";
    string text = "off";
    string fonthere = "";
    string fontSizehere = "";

    if(currentNode->getParent()->getType()==THEN || currentNode->getParent()->getType()==ELSE || currentNode->getParent()->getType()==US || currentNode->getParent()->getType()==CT || currentNode->getParent()->getType()==CE)
        tabs++;


    for(int i=0;i<tabs-1;i++){
        p+="\t";
    }
    p+="<paragraph name=\"Default\">\n"; 

    for(int i=0; i<currentNode->getNodes().size(); i++){
        if(currentNode->getNodes().at(i)->getType()==STRING){
            if(currentNode->getNodes().at(i)->getData() == input){
                if(tp.empty()){
                    tabPosition = "0";
                }else{
                    if(tpCopy.empty()){
                        tpCopy = tp;
                    }else{
                        tabPosition = tpCopy.front();
                        tpCopy.pop();
                    }
                }
            }else{
                if(font.size()>0){
                    fonthere=font.top();
                }else{
                    fonthere="";
                }
                if(fontSize.size()>0){
                    fontSizehere=fontSize.top();
                }else{
                    fontSizehere="";
                }
                if(fontAlign!=oldFontAlign || fonthere!= oldFont || fontSizehere!=oldFontSize || tabPosition!=oldTabPosition){
                    if(text=="on"){
                        p+="\n";
                        for(int i=0;i<tabs;i++){
                            p +="\t"; 
                        }
                        p += "</text>\n";
                        for(int i=0;i<tabs;i++){
                            p +="\t"; 
                        }
                        p += "<text name=\"Default\" fontAlign=\""+fontAlign+"\" font=\""+fonthere+"\" size=\""+fontSizehere+"\" tabPosition=\""+tabPosition+"\" >\n";
                        tabPosition = "";
                        for(int i=0;i<tabs+1;i++){
                            p +="\t"; 
                        }
                        p +=  currentNode->getNodes().at(i)->getData()+" ";
                    }else{
                        for(int i=0;i<tabs;i++){
                            p +="\t"; 
                        }
                        p += "<text name=\"Default\" fontAlign=\""+fontAlign+"\" font=\""+fonthere+"\" size=\""+fontSizehere+"\" tabPosition=\""+tabPosition+"\" >\n";
                        tabPosition = "";
                        text = "on";
                        for(int i=0;i<tabs+1;i++){
                            p +="\t"; 
                        }
                        p +=  currentNode->getNodes().at(i)->getData()+" ";
                    }
                    oldFontAlign = fontAlign;
                    oldFont = fonthere;
                    oldFontSize = fontSizehere;
                    oldTabPosition = tabPosition;
                }else if(text == "off"){
                    for(int i=0;i<tabs;i++){
                        p +="\t"; 
                    }
                    p += "<text name=\"Default\" fontAlign=\""+fontAlign+"\" font=\""+fonthere+"\" size=\""+fontSizehere+"\" tabPosition=\""+tabPosition+"\" >\n";
                    tabPosition = "";
                    text = "on";
                    for(int i=0;i<tabs+1;i++){
                        p +="\t"; 
                    }
                    p +=  currentNode->getNodes().at(i)->getData()+" ";
                }else if(text =="on"){
                    p +=  currentNode->getNodes().at(i)->getData()+" ";
                }
            }
        }else if(currentNode->getNodes().at(i)->getType()==NEWLINE){
            p+="\n";
            for(int i=0;i<tabs;i++){
                p +="\t"; 
            }
            p += "</text>\n";
        }else if(currentNode->getNodes().at(i)->getType()==VARIABLE){
            if(font.size()>0){
                fonthere=font.top();
            }else{
                fonthere="";
            }
            if(fontSize.size()>0){
                fontSizehere=fontSize.top();
            }else{
                fontSizehere="";
            }
            if(fontAlign!=oldFontAlign || fonthere!= oldFont || fontSizehere!=oldFontSize || tabPosition!=oldTabPosition){
                if(text=="on"){
                    p+="\n";
                    for(int i=0;i<tabs;i++){
                        p +="\t"; 
                    }
                    p += "</text>\n";
                    for(int i=0;i<tabs;i++){
                        p +="\t"; 
                    }
                    p += "<text name=\"Default\" fontAlign=\""+fontAlign+"\" font=\""+fonthere+"\" size=\""+fontSizehere+"\" tabPosition=\""+tabPosition+"\" >\n";
                    tabPosition = "";
                    for(int i=0;i<tabs+1;i++){
                        p +="\t"; 
                    }
                        p += "<![CDATA[var name=\"";
                        p +=  currentNode->getNodes().at(i)->getData()+"\"]]> ";
                }else{
                    for(int i=0;i<tabs;i++){
                        p +="\t"; 
                    }
                    p += "<text name=\"Default\" fontAlign=\""+fontAlign+"\" font=\""+fonthere+"\" size=\""+fontSizehere+"\" tabPosition=\""+tabPosition+"\" >\n";
                    tabPosition = "";
                    text = "on";
                    for(int i=0;i<tabs+1;i++){
                        p +="\t"; 
                    }
                    p += "<![CDATA[var name=\"";
                    p +=  currentNode->getNodes().at(i)->getData()+"\"]]> ";
                }
                oldFontAlign = fontAlign;
                oldFont = fonthere;
                oldFontSize = fontSizehere;
                oldTabPosition = tabPosition;
            }else if(text == "off"){
                for(int i=0;i<tabs;i++){
                    p +="\t"; 
                }
                p += "<text name=\"Default\" fontAlign=\""+fontAlign+"\" font=\""+fonthere+"\" size=\""+fontSizehere+"\" tabPosition=\""+tabPosition+"\" >\n";
                tabPosition = "";
                text = "on";
                for(int i=0;i<tabs+1;i++){
                    p +="\t"; 
                }
                p += "<![CDATA[var name=\"";
                p +=  currentNode->getNodes().at(i)->getData()+"\"]]> ";
            }else if(text =="on"){
                p += "<![CDATA[var name=\"";
                p +=  currentNode->getNodes().at(i)->getData()+"\"]]> ";
            }
        }else{
            if(font.size()>0){
                fonthere=font.top();
            }else{
                fonthere="";
            }
            if(fontSize.size()>0){
                fontSizehere=fontSize.top();
            }else{
                fontSizehere="";
            }
            if(fontAlign!=oldFontAlign || fonthere!= oldFont || fontSizehere!=oldFontSize || tabPosition!=oldTabPosition){
                if(text=="on"){
                    p+="\n";
                    for(int i=0;i<tabs;i++){
                        p +="\t"; 
                    }
                    p += "</text>\n";
                    for(int i=0;i<tabs;i++){
                        p +="\t"; 
                    }
                    p += "<text name=\"Default\" fontAlign=\""+fontAlign+"\" font=\""+fonthere+"\" size=\""+fontSizehere+"\" tabPosition=\""+tabPosition+"\" >\n";
                    tabPosition = "";
                    for(int i=0;i<tabs+1;i++){
                        p +="\t"; 
                    }
                    p +=  currentNode->getNodes().at(i)->getData()+" ";
                }else{
                    for(int i=0;i<tabs;i++){
                        p +="\t"; 
                    }
                    p += "<text name=\"Default\" fontAlign=\""+fontAlign+"\" font=\""+fonthere+"\" size=\""+fontSizehere+"\" tabPosition=\""+tabPosition+"\" >\n";
                    tabPosition = "";
                    text = "on";
                    for(int i=0;i<tabs+1;i++){
                        p +="\t"; 
                    }
                    p +=  currentNode->getNodes().at(i)->getData()+" ";
                }
                oldFontAlign = fontAlign;
                oldFont = fonthere;
                oldFontSize = fontSizehere;
                oldTabPosition = tabPosition;
            }else if(text == "off"){
                for(int i=0;i<tabs;i++){
                    p +="\t"; 
                }
                p += "<text name=\"Default\" fontAlign=\""+fontAlign+"\" font=\""+fonthere+"\" size=\""+fontSizehere+"\" tabPosition=\""+tabPosition+"\" >\n";
                tabPosition = "";
                text = "on";
                for(int i=0;i<tabs+1;i++){
                    p +="\t"; 
                }
                p +=  currentNode->getNodes().at(i)->getData()+" ";
            }else if(text =="on"){
                p +=  currentNode->getNodes().at(i)->getData()+" ";
            }
        }
    }

    for(int i=0;i<tabs-1;i++){
        p+="\t";
    }
    p+="</paragraph>\n";

    return p;
}
