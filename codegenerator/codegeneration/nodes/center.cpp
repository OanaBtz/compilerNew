#include "../../model/Node.h"

string generateCenter(Node* currentNode, string result, int tabs)
{
    string center = "";

    if(currentNode->getNodes().size()>1 && (currentNode->getNodes().at(0)->getData()!="off" && currentNode->getNodes().at(0)->getData()!="OFF") ){
        for(int i=0;i<tabs;i++){
            center+="\t";
        }
        center += "<center>\n";
        center += result;

        for(int i=0;i<tabs;i++){
            center+="\t";
        }
        center += "</center>\n";

    }
    return center;
   
}