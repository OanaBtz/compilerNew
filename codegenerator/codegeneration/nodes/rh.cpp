
#include "../../model/Node.h"

string generateRh(Node* currentNode, string result, int tabs)
{
    
    string rh = "";
    
    if(currentNode->getNodes().size()>1 && currentNode->getNodes().at(0)->getData() == "on"){

        for(int i=0;i<tabs;i++){
            rh+="\t";
        }
        rh += "<runningHeading rule=\"";
        
        for(int i=0; i<currentNode->getNodes().size()-1; i++){
            rh += currentNode->getNodes().at(i)->getData()+ " ";
        }

        rh += "\" >\n";

        rh += result;

        for(int i=0;i<tabs;i++){
            rh+="\t";
        }
        rh += "</runningHeading>\n";
    }else if(currentNode->getNodes().size()>1 && currentNode->getNodes().at(0)->getData()!= "off" && currentNode->getNodes().at(0)->getData()!= "OFF"){
        for(int i=0;i<tabs;i++){
            rh+="\t";
        }
        rh += "<runningHeading rule=\"";
        for(int i=0; i<currentNode->getNodes().size()-1; i++){
            rh += currentNode->getNodes().at(i)->getData()+ " ";
        }

        rh += "\" />\n";
    }


    return rh;
}