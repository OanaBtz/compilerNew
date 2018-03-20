
#include "box.h"

string generateBox(Node* currentNode, string result, int tabs)
{
    string box = "";
    if(currentNode->getNodes().at(0)->getData()!= "off" && currentNode->getNodes().at(0)->getData()!= "can" ){

        for(int i=0;i<tabs;i++){
            box+="\t";
        }
        box += "<box ";

        int i=0;
        while(currentNode->getNodes().at(i)->getType()!= NEWLINE){
            if(i == 0 && (currentNode->getNodes().at(i)->getData() == "left" || currentNode->getNodes().at(i)->getData() == "right"))
                box += "fromMargin=\""+currentNode->getNodes().at(i)->getData()+"\" ";
            else if (i == 1 && (currentNode->getNodes().at(i)->getData() == "left" || currentNode->getNodes().at(i)->getData() == "right"))
                box += "toMargin=\""+currentNode->getNodes().at(i)->getData()+"\" ";
            i++;    
        }

        box += ">\n" + result;
        for(int i=0;i<tabs;i++){
            box+="\t";
        }
        box +="</box>\n";
    }
    
    return box;
}
