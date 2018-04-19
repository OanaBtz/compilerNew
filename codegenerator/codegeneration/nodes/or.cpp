#include "../../model/Node.h"

string generateOr(Node* currentNode, string result, int tabs)
{
    string orT = "";
    string condition = "";
    string comparison = "";
    int j = 0;
    int k = 0;
    int beforeOperator = 1;
    string before = "";
    string after = "";

    for(int i=0; i< currentNode->getNodes().size(); i++){
        if(currentNode->getNodes().at(i)->getType() == COMPARISON){
            comparison = currentNode->getNodes().at(i)->getData();
            beforeOperator = 0;
            j=i;
        }
        else if(currentNode->getNodes().at(i)->getType() == CONDITION){
            condition = currentNode->getNodes().at(i)->getData();
            k = i;
        }
        if(beforeOperator == 1){
            if(currentNode->getNodes().at(i)->getType()==STRING || currentNode->getNodes().at(i)->getType()==NUMBER ){
                before += currentNode->getNodes().at(i)->getData()+" ";
            }else if(currentNode->getNodes().at(i)->getType()==VARIABLE){
                before += "<![CDATA[var name=\""+ currentNode->getNodes().at(i)->getData()+"\"]]> ";
            }
        }else{
            if(currentNode->getNodes().at(i)->getType()==STRING || currentNode->getNodes().at(i)->getType()==NUMBER ){
                after += currentNode->getNodes().at(i)->getData()+" ";
            }else if(currentNode->getNodes().at(i)->getType()==VARIABLE){
                after += "<![CDATA[var name=\""+ currentNode->getNodes().at(i)->getData()+"\"]]> ";
            }
        }
    }

    for(int i=0;i<tabs;i++){
        orT+="\t";
    }
    orT += "<![CDATA[or ";
    if(comparison != ""){
        orT += "operator= \"" + comparison + "\" ";
    }
    orT += "]]>\n";
    
    for(int i=0;i<tabs+1;i++){
        orT+="\t";
    }
    orT += "<![CDATA[firstValue";
    if(condition != ""){
        orT += " condition= \"" + condition + "\" onValue=\""+currentNode->getNodes().at(k+1)->getData();
    }
    orT += "]]>\n";
    for(int i=0;i<tabs+2;i++){
        orT+="\t";
    }
    orT += before+"\n";

    for(int i=0;i<tabs+1;i++){
        orT+="\t";
    }
    orT += "<![CDATA[/firstValue]]>\n";

    for(int i=0;i<tabs+1;i++){
        orT+="\t";
    }
    orT += "<![CDATA[secondValue]]>\n";

    for(int i=0;i<tabs+2;i++){
        orT+="\t";
    }
    orT += after+"\n";

    for(int i=0;i<tabs+1;i++){
        orT+="\t";
    }
    orT += "<![CDATA[/secondValue]]>\n";

    for(int i=0;i<tabs;i++){
        orT+="\t";
    }
    orT += "<![CDATA[/or]]>\n";

    return orT;
}