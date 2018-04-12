#include "../../model/Node.h"

string generateIf(Node* currentNode, string result, int tabs)
{
    string ifStatement = "";
    string condition = "";
    string comparison = "";


    for(int i=0; i< currentNode->getNodes().size(); i++){
        if(currentNode->getNodes().at(i)->getType() == COMPARISON)
            comparison = currentNode->getNodes().at(i)->getData();
        else if(currentNode->getNodes().at(i)->getType() == CONDITION)
            condition = currentNode->getNodes().at(i)->getData();
    }

    for(int i=0;i<tabs;i++){
        ifStatement+="\t";
    }
    ifStatement += "<![CDATA[ifStatement ";
    
    if(condition != ""){
        ifStatement += "condition= \"" + condition + "\" ";
    }
    if(comparison != ""){
        ifStatement += "operator= \"" + comparison + "\" ";
    }
    ifStatement += "]]>\n";

    ifStatement += result;

    for(int i=0;i<tabs;i++){
        ifStatement+="\t";
    }
    ifStatement += "<![CDATA[/ifStatement]]>\n";

    return ifStatement;
}