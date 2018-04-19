#include "../../model/Node.h"

string generateIf(Node* currentNode, string result, int tabs)
{
    string ifStatement = "";
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
        ifStatement+="\t";
    }
    ifStatement += "<![CDATA[ifStatement ";
    if(comparison != ""){
        ifStatement += "operator= \"" + comparison + "\" ";
    }
    ifStatement += "]]>\n";
    
    for(int i=0;i<tabs+1;i++){
        ifStatement+="\t";
    }
    ifStatement += "<![CDATA[firstValue";
    if(condition != ""){
        ifStatement += " condition= \"" + condition + "\" onValue=\""+currentNode->getNodes().at(k+1)->getData();
    }
    ifStatement += "]]>\n";
    for(int i=0;i<tabs+2;i++){
        ifStatement+="\t";
    }
    ifStatement += before+"\n";

    for(int i=0;i<tabs+1;i++){
        ifStatement+="\t";
    }
    ifStatement += "<![CDATA[/firstValue]]>\n";

    for(int i=0;i<tabs+1;i++){
        ifStatement+="\t";
    }
    ifStatement += "<![CDATA[secondValue]]>\n";

    for(int i=0;i<tabs+2;i++){
        ifStatement+="\t";
    }
    ifStatement += after+"\n";

    for(int i=0;i<tabs+1;i++){
        ifStatement+="\t";
    }
    ifStatement += "<![CDATA[/secondValue]]>\n";

    for(int i=0;i<tabs;i++){
        ifStatement+="\t";
    }
    ifStatement += "<![CDATA[/ifStatement]]>\n";

    return ifStatement;
}