#include "../../model/Node.h"

string generateLl(Node* currentNode, string result, int tabs)
{
    string ll = "";
    for(int i=0;i<tabs;i++){
        ll+="\t";
    }

    ll+="<line length=\""+currentNode->getNodes().at(0)->getData()+"\" />";
    
    ll+="\n";

    return ll;
}
