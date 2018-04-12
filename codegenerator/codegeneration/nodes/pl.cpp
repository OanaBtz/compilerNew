#include "../../model/Node.h"

string generatePl(Node* currentNode, string result, int tabs)
{
    string pl = "\n";
    for(int i=0;i<tabs;i++){
        pl+="\t";
    }

    pl+="<pageLength size=\""+currentNode->getNodes().at(0)->getData()+"\" />\n\n";

    return pl;
}
