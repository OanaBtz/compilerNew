#include "../../model/Node.h"

string generateCt(Node* currentNode, string result, int tabs)
{
    string ct = "";
    for(int i=0;i<tabs;i++){
        ct+="\t";
    }
    ct += "<ct>\n";
    ct += result;

    for(int i=0;i<tabs;i++){
        ct+="\t";
    }
    ct += "</ct>\n";
    return ct;
   
}