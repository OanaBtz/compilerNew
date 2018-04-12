#include "../../model/Node.h"

string generateParagraph(Node* currentNode, string result, int tabs)
{
    string p = "";
    for(int i=0;i<tabs;i++){
        p+="\t";
    }
    p+="<paragraph name=\"Default\">\n"; 
    p = p+ result;

    for(int i=0;i<tabs;i++){
        p+="\t";
    }
    p+="</paragraph>\n";

    return p;
}
