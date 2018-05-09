#include "../../model/Node.h"
#include <string>
#include <stack>
#include <queue>
#include "style.cpp"


int getTpNumber(string tpString){
    string sizeLocal = "";
    char flag[1000];
	strcpy(flag, tpString.c_str() );
	int j=0;
	char returned[1000];
	for(int i=0; i<strlen(flag); i++){
		if(tpString[i]>='0' && tpString[i]<='9'){
			returned[j]=flag[i];
			j++;
		}
	}
	returned[j]='\0';

    sizeLocal = returned;

	return stoi(sizeLocal);
	// printf("%s\n", size);
}



string generateParagraph(Node* currentNode, string result, int &flowId, int &flowNr, int varNr, stack<STYLE> fonts, vector<string> uniqueNames, queue<string> tp, int &tableNumber, int &rowSetNumber )
{
    bool flag = false;
    int columnNr = 0;
    for(int i=0;i<currentNode->getNodes().size();i++){
        if(currentNode->getNodes().at(i)->getData()=="¤"){
            flag = true;
            columnNr++;
        }
    }

    string fontHere = fonts.top().styleName;
    string fontSizeHere = fonts.top().styleSize;
    fonts.pop();

    if(currentNode->getParent()->getType()!=THEN && currentNode->getParent()->getType()!=ELSE && flag == false){

        //fontSize.pop();
        cout<<"!!!!!!!!!!!!!!in paragraph node!!!!!!!!!!!!!"<<endl;
        cout<<flowNr<<endl;
        cout<<varNr<<endl;
        string p = "{"
                        "\"NodePath\":["
                                "\"Flows\","
                                "\"Flow "+to_string(flowId)+"\""
                            "],"
                        "\"Class\":\"Flow\","
                        "\"LockedWebNode\": true,"
                        "\"Type\":\"Simple\","
                        "\"Width\": 0.2,"
                        "\"Content\": [";
        flowId++;

        cout<<"------------"<<fontHere<<endl;
        cout<<"------------"<<fontSizeHere;
        cout<<"------------";

        if((fontHere == "cour" || fontHere == "COUR") && (fontSizeHere == "10") && currentNode->getParent()->getType() == US){
        p+= to_string(45+varNr+flowId-12)+",";
        p+= to_string(45+varNr+flowId-6)+",";
        }
        else if((fontHere == "FED" || fontHere == "fed") && (fonts.top().styleName=="COUR" || fonts.top().styleName=="cour") && fonts.top().styleSize == "10"){
        p+= to_string(45+varNr+flowId-12)+",";
        p+= to_string(45+varNr+flowId-7)+",";
        }else{
        p+= to_string(45+varNr+flowId-12)+",";
        p+= to_string(45+varNr+flowId-8)+",";
        }




        bool stringStarted = false;
        bool addedVariable = false;

        for(int i = 0; i < currentNode->getNodes().size(); i++)
        {
            if(currentNode->getNodes().at(i)->getType() == STRING || currentNode->getNodes().at(i)->getType() == NUMBER)
            {
                if(!stringStarted)
                {
                    p += "\"";
                    if(addedVariable)
                    {
                        p += " ";
                    }
                    stringStarted = true;
                }
                p += currentNode->getNodes().at(i)->getData() + " ";
            }
            if(currentNode->getNodes().at(i)->getType() == VARIABLE)
            {
                addedVariable = true;
                if(stringStarted)
                {
                    p += "\",";
                    stringStarted = false;
                }
                int k = 0;
                for(int j=0; j<uniqueNames.size(); j++){
                    if(currentNode->getNodes().at(i)->getData()==uniqueNames[j])
                        k=j;
                }
                p += to_string(k+2);
                p += ",";
            }
        }

        if(p.substr(p.size() - 1) == ",")
        {
            p = p.substr(0, p.size() - 1);
        }
        
        if(stringStarted)
        {
            p += "\"";
        }

        p += "],\"DocxLock\":\"Inherit\",\"IsInsertPoint\":false,\"SectionFlow\":false},";

        return p;
    }
    else if(flag==true){
        if(columnNr == 2){

            string first = tp.front();
            tp.pop();
            string second = tp.front();

            string name = "Table "+to_string( tableNumber );
            tableNumber++;

            string rowSet = "RowSet "+to_string(rowSetNumber);
            rowSetNumber++;

            string paragraphStyle = "";
            string textStyle = "";

            if((fontHere == "cour" || fontHere == "COUR") && (fontSizeHere == "10") && currentNode->getParent()->getType() == US){
                paragraphStyle= to_string(45+varNr+flowId-12);
                textStyle= to_string(45+varNr+flowId-6);
            }
            else if((fontHere == "FED" || fontHere == "fed") && (fonts.top().styleName=="COUR" || fonts.top().styleName=="cour") && fonts.top().styleSize == "10"){
                paragraphStyle= to_string(45+varNr+flowId-12);
                textStyle= to_string(45+varNr+flowId-7);
            }else{
                paragraphStyle= to_string(45+varNr+flowId-12);
                textStyle= to_string(45+varNr+flowId-8);
            }

            int i;
            string firstText = "";
            string secondText = "";
            for( i=1; currentNode->getNodes().at(i)->getData()!="¤"; i++){
                firstText += currentNode->getNodes().at(i)->getData() + " ";
            }
            for(int j=i+1; j< currentNode->getNodes().size()-1; j++){
                secondText += currentNode->getNodes().at(j)->getData() + " ";
            }



            string table = "";

            table =  "{"
                        "\"NodePath\": ["
                            "\"Flows\","
                            "\"Flow "+to_string(flowId)+"\""
                        "],"
                        "\"Class\": \"Flow\","
                        "\"LockedWebNode\": true,"
                        "\"Type\": \"Simple\","
                        "\"Width\": 0.2,"
                        "\"Content\": ["
                            ""+paragraphStyle+","
                            ""+textStyle+","
                            ""+ to_string(33 + varNr + flowNr + 1) +""
                        "],"
                        "\"DocxLock\": \"Inherit\","
                        "\"IsInsertPoint\": false,"
                        "\"SectionFlow\": false"
                    "},"
                    "{"
                        "\"NodePath\": ["
                            "\"Tables\","
                            "\""+name+"\""
                        "],"
                        "\"Class\": \"Table\","
                        "\"LockedWebNode\": true,"
                        "\"RowSetId\":"+ to_string(33 + varNr + flowNr + 2) +","
                        "\"BorderId\": 0,"
                        "\"HorizontalCellSpacing\": 0,"
                        "\"VerticalCellSpacing\": 0,"
                        "\"MinWidth\": 0.001,"
                        "\"MaxWidth\": 300,"
                        "\"PercentWidth\": 100,"
                        "\"SpaceLeft\": 0,"
                        "\"SpaceTop\": 0,"
                        "\"SpaceRight\": 0,"
                        "\"SpaceBottom\": 0,"
                        "\"TableAlignment\": \"Left\","
                        "\"BordersType\": \"MergeBorders\","
                        "\"IncludeLineGap\": false,"
                        "\"UseColumnWidths\": true,"
                        "\"ColumnWidths\": ["
                            "{"
                                "\"MinWidth\": 0.001,"
                                "\"PercentWidth\": "+ to_string(getTpNumber(first)) +""
                            "},"
                            "{"
                                "\"MinWidth\": 0.001,"
                                "\"PercentWidth\":" + to_string(getTpNumber(second)-getTpNumber(first))+""
                            "},"
                            "{"
                                "\"MinWidth\": 0.001,"
                                "\"PercentWidth\":" + to_string(160-getTpNumber(second)-getTpNumber(first))+""
                            "}"
                        "],"
                        "\"HTMLFormatting\": false,"
                        "\"DisplayAsImage\": true,"
                        "\"TableStyleId\": 0,"
                        "\"EnableById\": ["
                            "0,"
                            "0"
                        "],"
                        "\"IsHeader\": ["
                            "false,"
                            "false"
                        "]"
                    "},"
                    "{"
                        "\"NodePath\": ["
                            "\"RowSets\","
                            "\""+rowSet+"\""
                        "],"
                        "\"Class\": \"RowSet\","
                        "\"LockedWebNode\": true,"
                        "\"RowSetType\": \"Row\","
                        "\"SubRowId\": ["
                            ""+ to_string(33 + varNr + flowNr + 3) +","
                            ""+ to_string(33 + varNr + flowNr + 4) +","
                            ""+ to_string(33 + varNr + flowNr + 5) +""
                        "],"
                        "\"KeepWithPreviousId\": 0,"
                        "\"KeepWithNextId\": 0,"
                        "\"BreakBeforeId\": 0,"
                        "\"BreakAfterId\": 0"
                    "},"
                    "{"
                        "\"NodePath\": ["
                            "\"Cells\","
                            "\""+rowSet+"\","
                            "\"Cell 1\""
                        "],"
                        "\"Class\": \"Cell\","
                        "\"LockedWebNode\": true,"
                        "\"FlowId\": "+ to_string(33 + varNr + flowNr + 6) +","
                        "\"BorderId\": 0,"
                        "\"WithFixedHeight\": false,"
                        "\"AlwaysProcess\": true,"
                        "\"MinWidth\": 0.001,"
                        "\"MaxWidth\": 300,"
                        "\"RatioWidth\": 1,"
                        "\"MinHeight\": 0,"
                        "\"MaxHeight\": 300,"
                        "\"FlowToNextPage\": false,"
                        "\"SpanLeft\": false,"
                        "\"SpanUp\": false,"
                        "\"CellVerticalAlignment\": \"Top\","
                        "\"FittingType\": \"None\","
                        "\"RelativeFill\": true,"
                        "\"HtmlWidthType\": \"Auto\","
                        "\"HtmlWidthValue\": 100"
                    "},"
                    "{"
                        "\"NodePath\": ["
                            "\"Cells\","
                            "\""+rowSet+"\","
                            "\"Cell 2\""
                        "],"
                        "\"Class\": \"Cell\","
                        "\"LockedWebNode\": true,"
                        "\"FlowId\": "+ to_string(33 + varNr + flowNr + 7) +","
                        "\"BorderId\": 0,"
                        "\"WithFixedHeight\": false,"
                        "\"AlwaysProcess\": true,"
                        "\"MinWidth\": 0.001,"
                        "\"MaxWidth\": 300,"
                        "\"RatioWidth\": 1,"
                        "\"MinHeight\": 0,"
                        "\"MaxHeight\": 300,"
                        "\"FlowToNextPage\": false,"
                        "\"SpanLeft\": false,"
                        "\"SpanUp\": false,"
                        "\"CellVerticalAlignment\": \"Top\","
                        "\"FittingType\": \"None\","
                        "\"RelativeFill\": true,"
                        "\"HtmlWidthType\": \"Auto\","
                        "\"HtmlWidthValue\": 100"
                    "},"
                    "{"
                        "\"NodePath\": ["
                            "\"Cells\","
                            "\""+rowSet+"\","
                            "\"Cell 3\""
                        "],"
                        "\"Class\": \"Cell\","
                        "\"LockedWebNode\": true,"
                        "\"FlowId\": "+ to_string(33 + varNr + flowNr + 8) +","
                        "\"BorderId\": 0,"
                        "\"WithFixedHeight\": false,"
                        "\"AlwaysProcess\": true,"
                        "\"MinWidth\": 0.001,"
                        "\"MaxWidth\": 300,"
                        "\"RatioWidth\": 1,"
                        "\"MinHeight\": 0,"
                        "\"MaxHeight\": 300,"
                        "\"FlowToNextPage\": false,"
                        "\"SpanLeft\": false,"
                        "\"SpanUp\": false,"
                        "\"CellVerticalAlignment\": \"Top\","
                        "\"FittingType\": \"None\","
                        "\"RelativeFill\": true,"
                        "\"HtmlWidthType\": \"Auto\","
                        "\"HtmlWidthValue\": 100"
                    "},"
                    "{"
                        "\"NodePath\": ["
                            "\"Flows\","
                            "\""+rowSet+"\","
                            "\"Cell 1Flow\""
                        "],"
                        "\"Class\": \"Flow\","
                        "\"LockedWebNode\": true,"
                        "\"Type\": \"Simple\","
                        "\"Width\": 0.2,"
                        "\"Content\": ["
                            ""+paragraphStyle+","
                            ""+textStyle+""
                            
                        "],"
                        "\"DocxLock\": \"Inherit\","
                        "\"IsInsertPoint\": false,"
                        "\"SectionFlow\": false"
                    "},"
                    "{"
                        "\"NodePath\": ["
                            "\"Flows\","
                            "\""+rowSet+"\","
                            "\"Cell 2Flow\""
                        "],"
                        "\"Class\": \"Flow\","
                        "\"LockedWebNode\": true,"
                        "\"Type\": \"Simple\","
                        "\"Width\": 0.2,"
                        "\"Content\": ["
                            ""+paragraphStyle+","
                            ""+textStyle+","
                            "\""+firstText+"\""
                        "],"
                        "\"DocxLock\": \"Inherit\","
                        "\"IsInsertPoint\": false,"
                        "\"SectionFlow\": false"
                    "},"
                    "{"
                        "\"NodePath\": ["
                            "\"Flows\","
                            "\""+rowSet+"\","
                            "\"Cell 3Flow\""
                        "],"
                        "\"Class\": \"Flow\","
                        "\"LockedWebNode\": true,"
                        "\"Type\": \"Simple\","
                        "\"Width\": 0.2,"
                        "\"Content\": ["
                            ""+paragraphStyle+","
                            ""+textStyle+","
                            "\""+secondText+"\""
                        "],"
                        "\"DocxLock\": \"Inherit\","
                        "\"IsInsertPoint\": false,"
                        "\"SectionFlow\": false"
                    "},";
                flowId+=9;
                return table;
        }
    }
    return "";
}