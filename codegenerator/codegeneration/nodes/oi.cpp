#include "../../model/Node.h"

string generateOi(Node* currentNode, string result, int tabs)
{
    string oi = "";

    oi += "\n";
    
    for(int i=0;i<tabs;i++){
        oi+="\t";
    }
    oi+="<OverlayInclude name=\""+currentNode->getNodes().at(0)->getData()+"\" />\n";
    
    return oi;
}
