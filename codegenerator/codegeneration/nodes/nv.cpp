
#include "../../model/Node.h"

string generateNv(Node* currentNode, string result, int tabs)
{
    string nv = "";
    for(int i=0;i<tabs;i++){
        nv+="\t";
    }
    cout<<currentNode->getNodes().at(1)->getData()<<"    "<<currentNode->getNodes().at(2)->getData()<<endl;
    nv+="<![CDATA[NV page=\""+currentNode->getNodes().at(1)->getData()+"\" ";
    nv+="variable="+currentNode->getNodes().at(2)->getData()+" ]]>";
    
    result = result+nv+"\n";

    return result;
}
