#include "../../model/Node.h"

string generateBox(Node* currentNode, string result, int tabs)
{
    string box = "";
    if(currentNode->getNodes().at(0)->getData()!= "off" && currentNode->getNodes().at(0)->getData()!= "can" ){

        for(int i=0;i<tabs;i++){
            box+="\t";
        }
        box += "<box rule=\" ";

        int i=0;
        while(currentNode->getNodes().at(i)->getType()!= NEWLINE){
            box +=  currentNode->getNodes().at(i)->getData()+" ";
            i++;
        }
        box += "\" >\n";
        cout<<endl<<box<<endl;

        box += result;

        for(int i=0;i<tabs;i++){
            box+="\t";
        }
        box +="</box>\n";
    }
    
    return box;
}
