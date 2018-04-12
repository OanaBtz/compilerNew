
#include "../../model/Node.h"

string generateAnd(Node* currentNode, string result, int tabs)
{
    string andT = "";

    for(int i=0;i<tabs;i++){
        andT+="\t";
    }
    andT+="<and>\n";
    andT += result;

    for(int i=0;i<tabs;i++){
        andT+="\t";
    }
    andT+="</and>\n";
    return andT;
}
