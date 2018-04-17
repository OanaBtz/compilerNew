#include "../../model/Node.h"

string generateIt(Node* currentNode, string result, int tabs)
{
    string it = "";

    it += "\n";
    
    for(int i=0;i<tabs;i++){
        it+="\t";
    }
    it+="<InputTrace rule=\"";

    if(currentNode->getNodes().at(0)->getData() == "off"){
        it += "off";
    }else if(currentNode->getNodes().at(0)->getData() == "all"){
        it += "on traceAll";
    }
    it += "\" />\n";
    return it;
}
