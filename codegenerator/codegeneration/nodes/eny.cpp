#include "../../model/Node.h"

string generateEny(Node* currentNode, string result, int tabs)
{
    string eny = "";

    
    for(int i=0;i<tabs;i++){
        eny+="\t";
    }
    eny+="<ENY />\n";
    

    return eny;
}
