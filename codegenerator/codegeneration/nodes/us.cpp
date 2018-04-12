
#include "../../model/Node.h"

string generateUs(Node* currentNode, string result, int tabs)
{
    string us = "";
    if(currentNode->getNodes().size()>1){
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
    return us;

}