
#include "../../model/Node.h"
#include <stack> 
// string generateVariable(Node* currentNode, string result, int tabs, queue<string> &tp , string input, string fontAlign, stack <string> font, stack <string> fontSize, string &tabPosition, string &oldFontAlign, string &oldFont, string &oldFontSize, string &oldTabPosition)
// {
//     string vars = "";
//     string fonthere = "";
//     string fontSizehere = "";
//     if(currentNode->getParent()->getType() == THEN || currentNode->getParent()->getType() == OR || currentNode->getParent()->getType() == IF || currentNode->getParent()->getType() == ELSE || currentNode->getParent()->getType() == AND){

//         for(int i=0;i<tabs;i++){
//             vars +="\t"; 
//         }
//         vars += "<![CDATA[var name=\"";
//         vars +=  currentNode->getData()+"\"]]>\n";

//     }else if(currentNode->getParent()->getType() == RH || currentNode->getParent()->getType() == CT || currentNode->getParent()->getType() == US){

//     }
//     return vars;
        
// }

vector<char> danishCharacters = {'A'};

bool findDanishCharacter(char c)
{
    for(int i = 0; i < danishCharacters.size(); i++)
    {
        if(c == danishCharacters[i])
        {
            return true;
        }
    }
    return false;
}

string getVariableData(string var){
    string name = "";
    char flag[1000];
    strcpy(flag, var.c_str());
	int j=0;
	char returned[1000];
	for(int i=1;i < var.size(); i++){
        if(i == var.size() - 1 && var[i] == '.')
            break;
    	returned[j]=flag[i];
		j++;
	}
	returned[j]='\0';

	name = returned;
    return name;
}


string generateVariable(Node* currentNode, string result){
    string vars = "";

    vars += "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"Params\",";
    vars +=        "\""+getVariableData(currentNode->getData())+"\"";
    vars +=        "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": false,"
                "\"VarType\": \"String\","
                "\"CanBeInsertedIntoInteractiveDocument\": true"
            "},";

    return vars;
}