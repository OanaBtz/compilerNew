#include "../../model/Node.h"

string generateIl(Node* currentNode, string result, int tabs)
{
    string il = "";
    for(int i=0;i<tabs;i++){
        il+="\t";
    }

    il+="<identLine space=\"";
    
    if(currentNode->getNodes().size()>1){
        il += currentNode->getNodes().at(0)->getData()+"\" />";
    }else{
        il += "0\" />";
    }

    
    il += "\n";

    return il;
}
