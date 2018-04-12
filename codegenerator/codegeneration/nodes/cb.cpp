#include "../../model/Node.h"

string generateCb(Node* currentNode, string result, int tabs)
{
    string cb = "";

    
    for(int i=0;i<tabs;i++){
        cb+="\t";
    }
    cb+="<ColumnBegin />\n";
    

    return cb;
}
