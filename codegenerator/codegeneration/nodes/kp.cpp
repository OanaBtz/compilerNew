
#include "kp.h"

string generateKp(Node* currentNode, string result, int tabs, string fontAlign, string font, string fontSize)
{
    string kp = "";

    
    for(int i=0;i<tabs;i++){
        kp+="\t";
    }
    kp+="<paragraph name=\"Default\" fontAlign=\""+fontAlign+"\" font=\""+font+"\" size=\""+fontSize+"\">\n";
    result = result+kp;

    return result;
}
