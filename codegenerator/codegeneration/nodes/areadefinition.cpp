#include "../../model/Node.h"

string generateAreadefinition(Node* currentNode, string result, int tabs)
{
    string areadef = "";
    string width = "";
    string wData = "";
    string rotate = "";
    string rData = "";
    string depth = "";
    string dData = "";

    for(int i=0; i< currentNode->getNodes().size(); i++){
        if(currentNode->getNodes().at(i)->getType() == WIDTH){
            width = "found";
            wData = currentNode->getNodes().at(i+1)->getData();
        }
        else if(currentNode->getNodes().at(i)->getType() == ROTATE){
            rotate = "found";
            rData = currentNode->getNodes().at(i+1)->getData();
        }
        else if(currentNode->getNodes().at(i)->getType() == DEPTH){
            depth = "found";
            dData = currentNode->getNodes().at(i+1)->getData();
        }
    }
    
    for(int i=0;i<tabs;i++){
        areadef+="\t";
    }
    if(currentNode->getNodes().size() > 1){
        areadef += "<defineArea name=\""+currentNode->getNodes().at(0)->getData()+"\" ";
    }

    if(currentNode->getNodes().size() > 2){
        if(currentNode->getNodes().at(1)->getType() == SIZE)
            areadef += "marginLeft=\""+currentNode->getNodes().at(1)->getData()+"\" ";
    }
    if(currentNode->getNodes().size() > 3){
        if(currentNode->getNodes().at(2)->getType() == SIZE)
            areadef += "marginRight=\""+currentNode->getNodes().at(2)->getData()+"\" ";
    }
    if(width != ""){
        areadef += "width= \""+ wData +"\" ";
    }
    if(rotate != ""){
        areadef += "rotate= \""+ rData +"\" ";
    }  
    if(depth != ""){
        areadef += "depth= \""+ dData +"\" ";
    }    
    areadef += "/>";
    

    result = result+areadef+"\n";

    return result;
}
