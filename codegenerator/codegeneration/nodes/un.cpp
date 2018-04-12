#include "../../model/Node.h"

string generateUn(Node* currentNode, string result, int tabs)
{
    string un = "";
    for(int i=0;i<tabs;i++){
        un+="\t";
    }

    un+="<undent space=\"";
    
    if(currentNode->getNodes().size()>1){
        un += currentNode->getNodes().at(0)->getData()+"\" />";
    }else{
        un += "0\" />";
    }

    
    un += "\n";

    return un;
}
