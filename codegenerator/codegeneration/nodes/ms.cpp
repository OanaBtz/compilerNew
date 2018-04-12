#include "../../model/Node.h"

string generateMs(Node* currentNode, string result, int tabs)
{
    string ms = "";
    for(int i=0;i<tabs;i++){
        ms+="\t";
    }
    ms+="<MacroSubstitution rule=\"";
    if(currentNode->getNodes().at(0)->getData() == "on"){
        ms+="on\"";
    }
    ms+=" />\n";
    return ms;
}
