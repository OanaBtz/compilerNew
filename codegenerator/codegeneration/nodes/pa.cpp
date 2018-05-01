#include "../../model/Node.h"

string generatePa(Node* currentNode, string result, int tabs)
{
    string pa = "";
    for(int i=0;i<tabs;i++){
        pa+="\t";
    }

    pa += "<PageEject";

    if(currentNode->getNodes().size()>1){
        pa += " rule=\"";

        for(int i=0; i<currentNode->getNodes().size(); i++){
            pa += currentNode->getNodes().at(i)->getData()+" ";
        }

        pa += "\"";
    }

    pa += "/>\n";

    return pa;
}
