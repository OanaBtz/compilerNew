#include "../../model/Node.h"

string generateDr(Node* currentNode, string result, int tabs)
{
    
    string dr = "";
    
    for(int i=0;i<tabs;i++){
        dr+="\t";
    }
    dr += "<defineRule name=\""+currentNode->getNodes().at(0)->getData()+"\" weight=\""+currentNode->getNodes().at(2)->getData();

    if(currentNode->getNodes().size()>4){
        dr += " "+currentNode->getNodes().at(3)->getData();
    }

    dr += "\" />\n";

    return dr;
}