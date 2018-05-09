#include <stack>
#include "../../model/Node.h"
#include "style.cpp"

Node* getParentAreaOf(Node* node)
{
    do
    {
        node = node->getParent();
    }while(node->getType() != DOCUMENT && node->getType() != AREA);
    return node;
}

string generateArea(Node* currentNode, string result, stack<STYLE> &fonts)
{

    if(currentNode->getNodes().size() > 1)
    {
        if(currentNode->getNodes().at(0)->getData() == "off")
        {
            Node* areaNameNode = currentNode->getParent()->getNodes().at(0);

            while(areaNameNode->getData() == getParentAreaOf(fonts.top().style)->getNodes().at(0)->getData())
            {
                fonts.pop();
            }
        }
    }
    return result;
    
}







    // if(currentNode->getNodes().size()>1){
    //     if(currentNode->getNodes().at(0)->getData()!="off"){
    //         string area = "";
    //         for(int i=0;i<tabs;i++){
    //             area+="\t";
    //         }
    //         area += "<area name= \"";
    //         area += currentNode->getNodes().at(0)->getData();
    //         area += "\">\n";
    //         area += result;

    //         for(int i=0;i<tabs;i++){
    //             area+="\t";
    //         }
    //         area += "</area>\n";
    //         return area;
    //     }
    // }