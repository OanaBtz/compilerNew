#include "../../model/Node.h"

string generateDc(Node* currentNode, string result, int tabs)
{
    string dc = "";
    for(int i=0;i<tabs;i++){
        dc += "\t";
    }
    dc += "<DefineCharacter ";

    if(currentNode->getNodes().at(0)->getData() == "cont" || currentNode->getNodes().at(0)->getData() == "CONT"){
        dc+="continuationRule=\""+currentNode->getNodes().at(1)->getData();
    }else if(currentNode->getNodes().at(0)->getData() == "cw"){
        dc+="separationRule=\""+currentNode->getNodes().at(1)->getData();
    }

    dc += "\" />\n";
    
    return dc;
}