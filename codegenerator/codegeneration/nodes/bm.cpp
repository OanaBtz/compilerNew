#include "../../model/Node.h"

string generateBm(Node* currentNode, string result, int tabs)
{
    string bm = "";
    for(int i=0;i<tabs;i++){
        bm+="\t";
    }

    bm+="<bottom margin=\""+currentNode->getNodes().at(0)->getData()+"\" />";
    
    bm+="\n";

    return bm;
}
