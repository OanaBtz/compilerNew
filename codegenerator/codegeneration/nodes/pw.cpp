#include "../../model/Node.h"

string generatePw(Node* currentNode, string result, int tabs)
{
    string pw = "";
    for(int i=0;i<tabs;i++){
        pw+="\t";
    }

    pw+="<pageWidth size=\""+currentNode->getNodes().at(0)->getData()+"\" />\n";

    return pw;
}
