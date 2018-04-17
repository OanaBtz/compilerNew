
#include "../../model/Node.h"

string generateDu(Node* currentNode, string result, int tabs)
{
    
    string du = "";
    
    for(int i=0;i<tabs;i++){
        du+="\t";
    }
    du += "<dictionaryUpdate rule=\" "+ currentNode->getNodes().at(0)->getData()+"\" word=\" ";
    for(int i=1; i< currentNode->getNodes().size(); i++){

        du += currentNode->getNodes().at(i)->getData() + " ";
    }

    du += "\"/>\n";

    return du;
}