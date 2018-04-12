#include "../../model/Node.h"

string generateOr(Node* currentNode, string result, int tabs)
{
    string orT = "";
    string condition = "";
    string comparison = "";


    for(int i=0; i< currentNode->getNodes().size(); i++){
        if(currentNode->getNodes().at(i)->getType() == COMPARISON)
            comparison = currentNode->getNodes().at(i)->getData();
        else if(currentNode->getNodes().at(i)->getType() == CONDITION)
            condition = currentNode->getNodes().at(i)->getData();
    }

    for(int i=0;i<tabs;i++){
        orT+="\t";
    }
    orT += "<![CDATA[or ";
    
    if(condition != ""){
        orT += "condition= \"" + condition + "\" ";
    }
    if(comparison != ""){
        orT += "operator= \"" + comparison + "\" ";
    }
    orT += "]]>\n";

    orT += result;

    for(int i=0;i<tabs;i++){
        orT+="\t";
    }
    orT += "<![CDATA[/or]]>\n";

    return orT;
}
