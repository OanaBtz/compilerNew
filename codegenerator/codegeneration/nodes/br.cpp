#include "../../model/Node.h"

string generateBr(Node* currentNode, string result, int tabs)
{
    
    string br = "";
    for(int i=0;i<tabs;i++){
        br+="\t";
    }
    br += "<br />\n";

    return br;
}