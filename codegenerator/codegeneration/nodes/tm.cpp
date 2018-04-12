#include "../../model/Node.h"

string generateTm(Node* currentNode, string result, int tabs)
{
    string tm = "";
    for(int i=0;i<tabs;i++){
        tm+="\t";
    }

    tm+="<top margin=\""+currentNode->getNodes().at(0)->getData()+"\" />";
    
    tm+="\n";

    return tm;
}
