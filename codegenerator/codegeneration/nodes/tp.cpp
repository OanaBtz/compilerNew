#include "../../model/Node.h"
#include <queue>

queue<string> generateTP(Node* currentNode)
{
    queue<string> tp;
    for(int i=0; i<currentNode->getNodes().size()-1; i++){
        string value = "";
        if(currentNode->getNodes().at(i+1)->getData()=="CENTER" || currentNode->getNodes().at(i+1)->getData()== "center"){
            value += currentNode->getNodes().at(i)->getData()+" center";
            tp.push(value);
            i++;
        }else if(currentNode->getNodes().at(i+1)->getData()=="RIGHT" || currentNode->getNodes().at(i+1)->getData()== "right"){
            value += currentNode->getNodes().at(i)->getData()+" right";
            tp.push(value);
            i++;
        }else if(currentNode->getNodes().at(i+1)->getData()=="LEFT" || currentNode->getNodes().at(i+1)->getData()== "left"){
            value += currentNode->getNodes().at(i)->getData()+" left";
            tp.push(value);
            i++;
        }else if(currentNode->getNodes().at(i+1)->getData()=="CHAR" || currentNode->getNodes().at(i+1)->getData()== "char"){
            value += currentNode->getNodes().at(i)->getData()+" after character: "+currentNode->getNodes().at(i+2)->getData();
            tp.push(value);
            i += 2;
        }else{
            tp.push(currentNode->getNodes().at(i)->getData());
        }
        
    }
    
    return tp;
}
