
#include "../../model/Node.h"

string generateHr(Node* currentNode, string result, int tabs)
{
    
    string hr = "";
    string left = "";
    string leftend = "";


    for(int i=0;i<tabs;i++){
        hr+="\t";
    }
    hr += "<hr ";

    if(currentNode->getNodes().at(0)->getType() == STRING)
        hr += "name =\""+currentNode->getNodes().at(0)->getData()+"\"";
    
    hr+= "rule= \"";
    for(int i=0; i< currentNode->getNodes().size(); i++){

        hr += currentNode->getNodes().at(i)->getData() + " ";
    }

    hr += "\"/>\n";

    return hr;
}