#include "string.h"
#include <stack>

string transformInNr(string tab){
    string nrLocal = "";
    char flag[1000];
	strcpy(flag, tab.c_str() );
	int j=0;
	char returned[1000];
	for(int i=0; i<strlen(flag); i++){
		if(tab[i]>='0' && tab[i]<='9'){
			returned[j]=flag[i];
			j++;
		}
	}
	returned[j]='\0';

    nrLocal = returned;
	return nrLocal;
	// printf("%s\n", size);
}



string generateString(Node* currentNode, string result, int tabs, queue<string> &tp, queue<string> &tpCopy , string input, string fontAlign, stack<string> font, stack<string> fontSize, string &tabPosition)
{
    string strings = "";
    if(currentNode->getData() == input){
    
        if(tpCopy.empty()){
            tpCopy = tp;
        }
        
        if(tabPosition != ""){
            int posNr = stoi(transformInNr(tabPosition));
            
            tabPosition = tpCopy.front();
            tpCopy.pop();

            posNr += stoi(transformInNr(tabPosition));
            tabPosition = to_string(posNr);
            tabPosition += "mm";
        }else{
            tabPosition = tpCopy.front();
            tpCopy.pop();
        }
    }else if(currentNode->getParent()->getType() == PARAGRAPH || currentNode->getParent()->getType() == US || currentNode->getParent()->getType() == IF || currentNode->getParent()->getType() == THEN || currentNode->getParent()->getType() == ELSE || currentNode->getParent()->getType() == OR){

        for(int i=0;i<tabs;i++){
            strings +="\t"; 
        }
        strings += "<text name=\"Default\" fontAlign=\""+fontAlign+"\" font=\""+font.top()+"\" size=\""+fontSize.top()+"\" tabPosition=\""+tabPosition+"\" >\n";
        tabPosition = "";
        for(int i=0;i<tabs+1;i++){
            strings +="\t"; 
        }
        strings +=  currentNode->getData()+"\n";
        for(int i=0;i<tabs;i++){
            strings +="\t"; 
        }
        strings += "</text>";
        
        result= strings +"\n";
    }
    return result;
}