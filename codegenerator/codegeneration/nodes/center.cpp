
#include "center.h"

string generateCenter(Node* currentNode, string result, int tabs)
{
    string center = "";
    for(int i=0;i<tabs;i++){
        center+="\t";
    }
    center += "<center>\n";
    center += result;

    for(int i=0;i<tabs;i++){
        center+="\t";
    }
    center += "</center>\n";
    return center;
   
}