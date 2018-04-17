
#include "../../model/Node.h"

string generateIm(Node* currentNode, string result, int tabs)
{
    
    string im = "";
    
    for(int i=0;i<tabs;i++){
        im+="\t";
    }
    im += "<imbeded fileName=\" " + currentNode->getNodes().at(0)->getData() + "\" />";

    return im;
}