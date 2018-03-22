
#include "am.h"

string generateAm(Node* currentNode, string result, int tabs)
{
    string am = "";

    for(int i=0;i<tabs;i++){
        am+="\t";
    }
    am+="<ajustMargin size=\"";
    
    if(currentNode->getNodes().size()> 1){
        am+= currentNode->getNodes().at(0)->getData()+"\" />\n";
    }else{
        am+= "0\" />\n";
    }
    return am;
}
