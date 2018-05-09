#include "../../model/Node.h"
#include <stack>
#include "style.cpp"

string generateSp(Node* currentNode, string result, int &flowId, stack<STYLE> fonts,int varNr,int flowNr)
{
    string fontHere = fonts.top().styleName;
    string fontSizeHere = fonts.top().styleSize;
    fonts.pop();
    string sp = "{"
                    "\"NodePath\":["
                            "\"Flows\","
                            "\"Space "+to_string(flowId)+"\""
                        "],"
                    "\"Class\":\"Flow\","
                    "\"LockedWebNode\": true,"
                    "\"Type\":\"Simple\","
                    "\"Width\": 0.2,"
                    "\"Content\": [\"";
    
    flowId++;

    if((fontHere == "cour" || fontHere == "COUR") && (fontSizeHere == "10") && currentNode->getParent()->getType() == US){
       sp+= to_string(45+varNr+flowNr-12)+",";
       sp+= to_string(45+varNr+flowNr-6)+",";
    }
    else if((fontHere == "FED" || fontHere == "fed") && (fonts.top().styleName=="COUR" || fonts.top().styleName=="cour") && fonts.top().styleSize == "10"){
       sp+= to_string(45+varNr+flowNr-12)+",";
       sp+= to_string(45+varNr+flowNr-7)+",";
    }else{
       sp+= to_string(45+varNr+flowNr-12)+",";
       sp+= to_string(45+varNr+flowNr-8)+",";
    }

    int length = 1;
    if(currentNode->getNodes().size() > 1)
    {
        length = stoi(currentNode->getNodes().at(0)->getData());
    }
    for(int i = 0; i < length; i++)
    {
        sp += "\\n";
        if(i != length - 1)
        {
            sp += ",";
        }
    }

    sp += "\"],\"DocxLock\":\"Inherit\",\"IsInsertPoint\":false,\"SectionFlow\":false},";
    
    return sp;
}











// #include "../../model/Node.h"

// string generateSp(Node* currentNode, string result, int tabs)
// {
   
//     string sp = "";
//     for(int i=0;i<tabs;i++){
//         sp += "\t";
//     }
//     sp += "<paragraph name=\"Gap\"";
//     if(currentNode->getNodes().size() > 1 ){
//         sp += " size=\""+currentNode->getNodes().at(0)->getData() +"\">\n";
//     }else{
//         sp += " size=\"1mm\">\n";
//     }

//     for(int i=0;i<tabs;i++){
//         sp += "\t";
//     }
//     sp+= "</paragraph>\n";
//     return sp;
// }