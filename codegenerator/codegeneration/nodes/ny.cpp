
#include "ny.h"

string generateNy(Node* currentNode, string result, int tabs)
{
    string ny = "";

    
    for(int i=0;i<tabs;i++){
        ny+="\t";
    }
    ny+="<NY />\n";
    

    return ny;
}
