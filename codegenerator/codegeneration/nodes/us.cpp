
#include "../../model/Node.h"

string generateUs(Node* currentNode, string result, int tabs)
{
    string us = "";
    cout<< result<< "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    if(currentNode->getNodes().size()>1 || currentNode->getNodes().at(0)->getType()!= NEWLINE ){
        if(currentNode->getNodes().at(0)->getType()!=NUMBER){
            
            for(int i=0;i<tabs;i++){
                us +="\t"; 
            }
            us +="<underline>\n" + result;


            for(int i=0;i<tabs;i++){
                us +="\t"; 
            }
            
            us += "</underline>\n";
                
        }
    }
    cout<< us <<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    return us;

}




// #include "../../model/Node.h"

// string generateUs(Node* currentNode, string result, int tabs, string fontAlign, stack<string> font, stack<string> fontSize, string &tabPosition, string &oldFontAlign, string &oldFont, string &oldFontSize, string &oldTabPosition)
// {
//     string us = "";
//     string fonthere = "";
//     string fontSizehere = "";
//     if(currentNode->getNodes().size()>1){
//         if(currentNode->getNodes().at(0)->getType()!=NUMBER){
//             if(font.size()>0){
//                 fonthere=font.top();
//             }else{
//                 fonthere="";
//             }
//             if(fontSize.size()>0){
//                 fontSizehere=fontSize.top();
//             }else{
//                 fontSizehere="";
//             }
//             for(int i=0;i<tabs;i++){
//                 us +="\t"; 
//             }
//             us +="<underline>\n" + result;

//             for(int i=0;i<tabs+1;i++){
//                 us +="\t"; 
//             }
//             us += "<text name=\"Default\" fontAlign=\""+fontAlign+"\" font=\""+fonthere+"\" size=\""+fontSizehere+"\" tabPosition=\""+tabPosition+"\" >\n";
//             tabPosition = "";

//             for(int i=0;i<tabs+2;i++){
//                 us +="\t"; 
//             }

//             for(int i=1; i<currentNode->getNodes().size(); i++){
//                 if(currentNode->getNodes().at(i)->getType() == VARIABLE){
//                     us += "<![CDATA[var name=\"" + currentNode->getNodes().at(i)->getData()+"\"]]> ";
//                 }else{
//                     us += currentNode->getNodes().at(i)->getData()+ " ";
//                 }
//             }

//             for(int i=0;i<tabs+1;i++){
//                 us +="\t"; 
//             }

//             us += "</text>\n";

//             for(int i=0;i<tabs;i++){
//                 us +="\t"; 
//             }
            
//             us += "</underline>\n";
                
//         }
//     }
//     return us;

// }
