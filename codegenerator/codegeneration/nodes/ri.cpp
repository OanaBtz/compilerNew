#include "../../model/Node.h"

string generateRi(Node* currentNode, string result, int tabs)
{
    string ri = "";
    for(int i=0;i<tabs;i++){
        ri+="\t";
    }
    ri += "<rightAjust>\n";
    ri += result;

    for(int i=0;i<tabs;i++){
        ri+="\t";
    }
    ri += "</rightAjust>\n";
    return ri;
   
}