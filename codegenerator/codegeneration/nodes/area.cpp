
#include "area.h"

string generateArea(Node* currentNode, string result, int tabs)
{
    if(currentNode->getNodes().at(0)->getData()!="off"){
        string area = "";
        for(int i=0;i<tabs;i++){
            area+="\t";
        }
        area += "<area name= \"";
        area += currentNode->getNodes().at(0)->getData();
        area += "\">\n";
        area += result;

        for(int i=0;i<tabs;i++){
            area+="\t";
        }
        area += "</area>\n";
        return area;
    }
        return result;
    
}