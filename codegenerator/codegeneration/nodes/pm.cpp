#include "../../model/Node.h"

string generatePm(Node* currentNode, string result, int tabs)
{
    string pm = "";
    for(int i=0;i<tabs;i++){
        pm+="\t";
    }

    pm+="<pageMargin size=\""+currentNode->getNodes().at(0)->getData()+"\" />\n";
    
    return pm;
}
