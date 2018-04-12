#include "../../model/Node.h"

string generateSc(Node* currentNode, string result, int tabs)
{
    string sc = "";

    
    for(int i=0;i<tabs;i++){
        sc+="\t";
    }
    sc+="<SingleColumnMode />\n";
    

    return sc;
}
