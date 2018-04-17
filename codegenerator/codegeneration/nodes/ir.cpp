
#include "../../model/Node.h"

string generateIr(Node* currentNode, string result, int tabs)
{
    
    string ir = "";
    
    for(int i=0;i<tabs;i++){
        ir+="\t";
    }
    ir += "<indentationRight size=\"";
    
    for(int i=0; i<currentNode->getNodes().size()-1; i++){
     ir += currentNode->getNodes().at(i)->getData() + " ";
    }
    ir += "\" />\n";
    return ir;
}