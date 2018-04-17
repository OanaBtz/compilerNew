#include "../../model/Node.h"

string generateThen(Node* currentNode, string result, int tabs)
{
    string then = "";
    
    if(currentNode->getNodes().size()>1 && currentNode->getNodes().at(0)->getType()!= FONT){

        for(int i=0;i<tabs;i++){
            then+="\t";
        }
        then += "<then>\n";
        
        then += result;

        for(int i=0;i<tabs;i++){
            then+="\t";
        }
        then += "</then>\n";
    }


    return then;
}