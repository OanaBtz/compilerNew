#include "../../model/Node.h"

string generateLabel(Node* currentNode, string result, int tabs)
{
    string label = "";

    for(int i=0;i<tabs;i++){
        label+="\t";
    }
    label+="<label name=\""+ currentNode->getData()+"\" />\n";
    
    return label;
}
