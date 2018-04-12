#include "../../model/Node.h"

string generateBc(Node* currentNode, string result, int tabs)
{
    string bc = "";

    
    for(int i=0;i<tabs;i++){
        bc+="\t";
    }
    bc+="<BalanceColumns ";

    if(currentNode->getNodes().at(0)->getData()=="off"){
        bc += "rule=\"off\" />\n";
    }else{
        bc += "rule=\"on\" />\n";
    }
    

    return bc;
}
