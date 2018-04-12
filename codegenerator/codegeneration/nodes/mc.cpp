#include "../../model/Node.h"

string generateMc(Node* currentNode, string result, int tabs)
{
    string mc = "";

    
    for(int i=0;i<tabs;i++){
        mc+="\t";
    }
    mc+="<MultiColumnMode />\n";
    

    return mc;
}
