#include "../../model/Node.h"

string generateOf(Node* currentNode, string result, int tabs)
{
    string of = "";
    for(int i=0;i<tabs;i++){
        of+="\t";
    }

    of+="<offset space=\"";
    
    if(currentNode->getNodes().size()>1){
        of += currentNode->getNodes().at(0)->getData()+"\" />";
    }else{
        of += "0\" />";
    }

    
    of += "\n";

    return of;
}
