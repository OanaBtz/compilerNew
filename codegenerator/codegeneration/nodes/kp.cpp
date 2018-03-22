
#include "kp.h"

string generateKp(Node* currentNode, string result, int tabs)
{
    string kp = "";

    
    for(int i=0;i<tabs;i++){
        kp+="\t";
    }
    kp+="<paragraph name=\"Default\">\n"; 
    
    kp = kp+ result;

    for(int i=0;i<tabs;i++){
        kp+="\t";
    }
    kp+="</paragraph>\n";

    return result;
}
