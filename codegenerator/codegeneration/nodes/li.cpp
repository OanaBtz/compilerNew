#include "../../model/Node.h"

string generateLi(Node* currentNode, string result, int tabs)
{
    string li = "";
    for(int i=0;i<tabs;i++){
        li+="\t";
    }
    li += "<literal>\n";
    li += result;

    for(int i=0;i<tabs;i++){
        li+="\t";
    }
    li += "</literal>\n";
    return li;
   
}