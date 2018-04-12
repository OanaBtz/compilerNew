
#include "../../model/Node.h"

string generateVr(Node* currentNode, string result, int tabs)
{
    
    string vr = "";
    


    for(int i=0;i<tabs;i++){
        vr+="\t";
    }
    vr += "<vr ";

    if(currentNode->getNodes().at(0)->getType() == STRING)
        vr += "name =\""+currentNode->getNodes().at(0)->getData()+"\"";
    
    vr+= "rule= \"";
    for(int i=0; i< currentNode->getNodes().size(); i++){

        vr += currentNode->getNodes().at(i)->getData() + " ";
    }

    vr += "\"/>\n";

    return vr;
}