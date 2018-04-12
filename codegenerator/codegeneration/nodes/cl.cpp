#include "../../model/Node.h"

string generateCl(Node* currentNode, string result, int tabs)
{
    string cl = "";
    for(int i=0;i<tabs;i++){
        cl+="\t";
    }

    cl+="<column length=\"";
    
    if(currentNode->getNodes().size()>1){
        cl += currentNode->getNodes().at(0)->getData()+"\" />";
    }else{
        cl += "0\" />";
    }

    
    cl += "\n";

    return cl;
}
