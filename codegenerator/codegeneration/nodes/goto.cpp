
#include "../../model/Node.h"

string generateGo(Node* currentNode, string result, int tabs)
{
    string gotoT = "";

    for(int i=0;i<tabs;i++){
        gotoT+="\t";
    }
    gotoT+="<goto label=\""+ currentNode->getNodes().at(0)->getData()+"\" />\n";
    
    return gotoT;
}
