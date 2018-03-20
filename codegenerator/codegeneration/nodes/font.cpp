
#include "font.h"
#include <regex>
#include <string>
#include <stack>

string styleName(string style){
	string name = "";
    char flag[1000];
    strcpy(flag, style.c_str());
	int j=0;
	char returned[1000];
	for(int i=1;style[i]>='A'&&style[i]<='Z' || style[i]==':';i++){
        if(style[i]!=':'){
		    returned[j]=flag[i];
		    j++;
        }
	}
	returned[j]='\0';

	name = returned;
    return name;
	// printf("%s\n", name);
}

string styleSize(string style){
    string sizeLocal = "";
    char flag[1000];
	strcpy(flag, style.c_str() );
	int j=0;
	char returned[1000];
	for(int i=0; i<strlen(flag); i++){
		if(style[i]>='0' && style[i]<='9'){
			returned[j]=flag[i];
			j++;
		}
	}
	returned[j]='\0';

    sizeLocal = returned;
	return sizeLocal;
	// printf("%s\n", size);
}


void generateFont(Node* currentNode, string result, stack<string> &font, stack<string> &fontSize)
{
	std::size_t found = currentNode->getData().find("SKRSLUT");
	if(found!=std::string::npos){
		if(!font.empty())
			font.pop();
		if(!fontSize.empty())
			fontSize.pop();
	}else{
		font.push(styleName(currentNode->getData()));
		fontSize.push(styleSize(currentNode->getData()));
	}
}