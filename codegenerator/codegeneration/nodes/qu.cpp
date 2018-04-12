#include "../../model/Node.h"

string generateQu(Node* currentNode, string result, int tabs)
{
    string qu = "";

    qu += "\n";
    
    for(int i=0;i<tabs;i++){
        qu+="\t";
    }
    qu+="<QUIT />\n\n";
    

    return qu;
}
