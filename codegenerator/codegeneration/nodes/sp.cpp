//
// Created by dennis on 1/2/18.
//

#include "sp.h"

string generateSp(Node* currentNode, string result, int tabs)
{
   
    string sp = "";
    for(int i=0;i<tabs;i++){
        sp += "\t";
    }
    sp += "<paragraph name=\"Gap\"";
    if(currentNode->getNodes().size() > 1 ){
        sp += " size=\""+currentNode->getNodes().at(0)->getData() +"\">\n";
    }else{
        sp += " size=\"1mm\">\n";
    }

    for(int i=0;i<tabs;i++){
        sp += "\t";
    }
    sp+= "</paragraph>\n";
    return sp;
}