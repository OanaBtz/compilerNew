#include "../../model/Node.h"

string generateSu(Node* currentNode, string result, int tabs)
{
    string su = "";
    for(int i=0;i<tabs;i++){
        su += "\t";
    }
    su += "<SubstituteSymbol rule=\"";

    if(currentNode->getNodes().at(0)->getData() == "on" || currentNode->getNodes().at(0)->getData()== "ON"){
        su+="on\"";
    }else if(currentNode->getNodes().at(0)->getData() == "off" || currentNode->getNodes().at(0)->getData() == ".off" || currentNode->getNodes().at(0)->getData() == "OFF"){
        su+="off\"";
    }

    su += " />\n";
    
    return su;
}