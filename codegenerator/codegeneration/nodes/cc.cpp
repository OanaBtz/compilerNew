#include "../../model/Node.h"

string generateCc(Node* currentNode, string result, int tabs)
{
    string cc = "";
    for(int i=0;i<tabs;i++){
        cc+="\t";
    }

    cc+="<conditionalColumnBegin space=\""+currentNode->getNodes().at(0)->getData()+"\" />\n";
    
    return cc;
}
