// string doc= "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n";
// doc+= "<?xml-stylesheet type=\"text/xsl\" href=\"the style sheet here\"?>\n\n";

// doc+= "<Content>\n\n";

// doc+= "<SubstituteSymbol rule=\"on\" />\n";
// doc+= "<BalanceColumns rule=\"on\" />\n";
// doc+= "<InputTrace rule=\"off\" />\n";
// doc+= "<Hypernate rule=\"off\" />\n";
// doc+= "<MacroSubstitution rule=\"off\" />\n\n";
// doc+= result+"\n";

// doc+= "</Content>\n";
#include "../../model/Node.h"
#include <stdio.h>
#include <string.h>

string generateDoc(Node* currentNode, string result, string vars, string guid, int flowNumber,int flowNr, int varNumber)
{

    cout<<vars<<endl;
    string doc = "{"
        "\"InteractivePlusJsonDefinition\": {"
        "\"Type\": \"Template\","
        "\"Guid\": \"" + guid + "\","
        "\"Master\": \"map://interactive/MasterTemplates/BEC Sample Master.wfd\","
        "\"Subject\": \"\","
        "\"Nodes\": ["
            "{"
                "\"NodePath\": ["
                    "\"Flows\","
                    "\"Blocks\""
                "],"
                "\"Class\": \"Flow\","
                "\"LockedWebNode\": true,"
                "\"Type\": \"Simple\","
                "\"Width\": 0.16,"
                "\"Content\":[";

    //ADD CONTENT NODES
    doc +=  to_string(45+ varNumber +flowNumber-12)+",";
    doc +=  to_string(45+ varNumber +flowNumber-9)+",";

    int nr = 0;
    char str[999999];
    strcpy(str, result.c_str());
    char * pch;
    vector<string> words;

    pch = strtok (str," ,.-\":[]{}");
    words.push_back(string(pch));
    while (pch != NULL)
    {
        //cout<<pch<<endl;
        words.push_back(string(pch));
        cout<<pch<<endl;
        pch = strtok (NULL, " ,.-\":[]{}");
    }

    for(int i=0; i<words.size()-5; i++){
        if(words[i]=="NodePath" && words[i+1]=="Flows" && (words[i+2]=="Flow" || words[i+2]=="Space")){
            nr++;
            doc += to_string(33+varNumber+stoi(words[i+3]))+",";
        }
    }

    doc = doc.substr(0, doc.size()-1);

    cout<<flowNr<<" > "<<nr<<endl;


    cout<<endl<<endl<<"flowId: "<<flowNumber<<"flowNumber: "<<flowNr<<endl;

    // for(int i=0; i< flowNumber -1; i++){
    //     doc += to_string(33 + varNumber +i )+",";
    // }
    // doc += to_string(32+ varNumber +flowNumber);



    doc += "],"
                "\"DocxLock\": \"Inherit\","
                "\"IsInsertPoint\": false,"
                "\"WebEditingType\": \"Section\","
                "\"SectionFlow\": true"
            "},{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"Params\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"SubTree\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},";
    
    doc += vars;

    doc += "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"SubTree\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"PageCounter\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"Int\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"Overflow\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"Bool\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"JobName\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"String\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"PageIndex\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"Int\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"PreviousPageIndex\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"Int\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"PageName\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"String\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"PreviousPageName\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"String\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"RecordIndex\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"Int\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"PagesPerRecord\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"Int\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"GlobalPageCounter\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"Int\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"PageArrayIndex\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"Int\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"GlobalSheetCounter\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"Int\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"GlobalSheetCount\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"Int\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"GlobalPageCount\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"Int\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"JobStarted\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"DateTime\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"True\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"Bool\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"PagesPerSubRecord\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"Int\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"PageSubCounter\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"Int\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"GroupSheetCounter\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"Int\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"PrintingFace\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"Bool\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"GroupIndex\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"Int\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"SerieIndex\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"Int\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"ValueIndex\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"Int\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"Language\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"String\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"GroupSheetCount\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"Int\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"Skin\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"String\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"RealGroupSheetCounter\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"Int\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"RealGroupSheetCount\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"Int\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"SystemVariable\","
                    "\"DirectExternalFlowLocation\""
                "],"
                "\"Cls\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"VarType\": \"String\","
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},"
            "{"
                "\"NodePath\": ["
                    "\"Data\","
                    "\"NumberingVariable\""
                "],"
                "\"Class\": \"Variable\","
                "\"LockedWebNode\": true,"
                "\"Type\": \"Numbering\","
                "\"VarType\": \"Int\","
                "\"Content\": \"0\","
                "\"PresentationType\": \"Simple\","
                "\"DisplayConstant\": \"\","
                "\"PreviewContent\": \"0\","
                "\"IsShortLife\": false,"
                "\"OverflowFlowArea\": 0,"
                "\"ComplexUsage\": false,"
                "\"CanBeInsertedIntoInteractiveDocument\": false"
            "},";

    doc += result;

    doc += "{"
                "\"NodePath\": ["
                    "\"ParagraphStyles\","
                    "\"Normal\""
                "],"
                "\"Class\": \"ParaStyle\","
                "\"LockedWebNode\": true,"
                "\"AncestorId\": 0,"
                "\"LeftIndent\": 0,"
                "\"RightIndent\": 0,"
                "\"FirstLineLeftIndent\": 0,"
                "\"SpaceBefore\": 0,"
                "\"SpaceAfter\": 0,"
                "\"LineSpacing\": 0,"
                "\"LineSpacingType\": \"Aditional\","
                "\"DefaultTextStyleId\": " + to_string(45+ varNumber +flowNumber-9)+ ","
                "\"NextParagraphStyleId\": 0,"
                "\"BorderStyleId\": 0,"
                "\"NewAreaPageAfter\": \"None\","
                "\"HAlign\": \"Left\","
                "\"IsVisible\": true,"
                "\"ConnectBorders\": false,"
                "\"WithLineGap\": false,"
                "\"BullettingId\": 0,"
                "\"IgnoreEmptyLines\": false,"
                "\"TabulatorProperties\": {"
                    "\"Default\": 0.0125,"
                    "\"UseOutsideTabs\": false"
                "},"
                "\"Hyphenation\": {"
                    "\"Hyphenate\": false,"
                    "\"MinLeft\": 2,"
                    "\"MinRight\": 2,"
                    "\"MaxConsecutive\": 2"
                "},"
                "\"Orphan\": 1,"
                "\"Widow\": 1,"
                "\"NumberingType\": \"None\","
                "\"NumberingVariableId\": 0,"
                "\"NumberingFrom\": 1,"
                "\"SpaceBeforeFirst\": false,"
                "\"KeepTogether\": false,"
                "\"KeepWithNext\": false,"
                "\"DontWrap\": false,"
                "\"RightReadingOrder\": false,"
                "\"Reversed\": false,"
                "\"CutFreely\": false,"
                "\"CalcMaxSpaceBeforeAfter\": false,"
                "\"NewAreaPageBefore\": \"None\","
                "\"DistributeLineSpace\": false,"
                "\"Css\": {"
                    "\"File\": 0,"
                    "\"ClassSelector\": \"\""
                "}"
            "},";

    doc += "{"
                "\"NodePath\": ["
                    "\"ParagraphStyles\","
                    "\"InvisibleParaStyles\","
                    "\"Normal 1\""
                "],"
                "\"Class\": \"ParaStyle\","
                "\"LockedWebNode\": true,"
                "\"AncestorId\":" + to_string(45+ varNumber +flowNumber-12)+ ","
                "\"IsVisible\": false,"
                "\"TabulatorProperties\": {"
                    "\"Default\": 0.0125,"
                    "\"UseOutsideTabs\": false,"
                    "\"Tabulator\":["
                        "{"
                            "\"Type\": \"Left\","
                            "\"Pos\": 0.0067229"
                        "},"
                        "{"
                            "\"Type\": \"Left\","
                            "\"Pos\": 0.017042"
                        "}"
                    "]"
                "}"
            "},";

    
    doc += "{"
                "\"NodePath\": ["
                    "\"TextStyles\","
                    "\"Normal\""
                "],"
                "\"Class\": \"TextStyle\","
                "\"LockedWebNode\": false,"
                "\"AncestorId\": 0,"
                "\"FontSize\": 0.0035278,"
                "\"LineWidth\": 0.0001,"
                "\"MiterLimit\": 10,"
                "\"BaselineShift\": 0,"
                "\"InterCharacterSpacing\": 0,"
                "\"OutlineStyleId\": 0,"
                "\"FillStyleId\":" + to_string(45+ varNumber +flowNumber-5)+ ","
                "\"CapType\": \"Butt\","
                "\"JoinType\": \"Bevel\","
                "\"Kerning\": false,"
                "\"BorderStyleId\": 0,"
                "\"IsVisible\": true,"
                "\"ConnectBorders\": false,"
                "\"WithLineGap\": false,"
                "\"FontId\": " + to_string(45+ varNumber +flowNumber-3)+ ","
                "\"SubFont\": \"Regular\","
                "\"Bold\": false,"
                "\"Italic\": false,"
                "\"Underline\": false,"
                "\"Strikethrough\": false,"
                "\"Language\": \"en\","
                "\"SmallCap\": false,"
                "\"SuperScript\": false,"
                "\"SubScript\": false,"
                "\"SuperScriptOffset\": 0.33,"
                "\"SubScriptOffset\": 0.33,"
                "\"SuperSubScriptSize\": 0.58,"
                "\"AffectSuperSubScriptUnderline\": true,"
                "\"AffectSuperSubScriptStrikethrough\": true,"
                "\"SmallCapSize\": 0.7,"
                "\"CustomUnderlineStrikethrough\": false,"
                "\"UnderlineOffset\": 0.106,"
                "\"UnderlineWidth\": 0.073,"
                "\"StrikethroughOffset\": 0.236,"
                "\"StrikethroughWidth\": 0.073,"
                "\"URLLink\": 0,"
                "\"HorizontalScale\": 100,"
                "\"WrappingRuleId\": 0,"
                "\"Type\": \"Simple\","
                "\"UnderlineLineStyleId\": 0,"
                "\"StrikethroughLineStyleId\": 0,"
                "\"ShadowStyleId\": 0,"
                "\"ShadowStyleOffset\": {"
                    "\"@X\": 0,"
                    "\"@Y\": 0"
                "},"
                "\"IsFixedWidth\": false,"
                "\"FixedWidth\": 0.003,"
                "\"Css\": {"
                    "\"File\": 0,"
                    "\"ClassSelector\": \"\""
                "}"
            "},";

    doc += "{"
                "\"NodePath\": [\"TextStyles\"," 
                    "\"PartialEmpty\"],"
                "\"Class\": \"TextStyle\","
                "\"LockedWebNode\": true,"
                "\"AncestorId\": 0,"
                "\"IsVisible\": true,"
                "\"Type\": \"Delta\""
            "},";

    doc += "{"
                "\"NodePath\": ["
                    "\"TextStyles\","
                    "\"cour10\""
                "],"
                "\"Class\": \"TextStyle\","
                "\"LockedWebNode\": true,"
                "\"AncestorId\": 0,"
                "\"FontSize\": 0.0035278,"
                "\"LineWidth\": 0.0001,"
                "\"MiterLimit\": 10,"
                "\"BaselineShift\": 0,"
                "\"InterCharacterSpacing\": 0,"
                "\"OutlineStyleId\": 0,"
                "\"FillStyleId\":" + to_string(45+ varNumber +flowNumber-5)+ ","
                "\"CapType\": \"Butt\","
                "\"JoinType\": \"Bevel\","
                "\"Kerning\": false,"
                "\"BorderStyleId\": 0,"
                "\"IsVisible\": true,"
                "\"ConnectBorders\": false,"
                "\"WithLineGap\": false,"
                "\"FontId\":" + to_string(45+ varNumber +flowNumber-2)+ ","
                "\"SubFont\": \"Regular\","
                "\"Bold\": false,"
                "\"Italic\": false,"
                "\"Underline\": false,"
                "\"Strikethrough\": false,"
                "\"Language\": \"en\","
                "\"SmallCap\": false,"
                "\"SuperScript\": false,"
                "\"SubScript\": false,"
                "\"SuperScriptOffset\": 0.33,"
                "\"SubScriptOffset\": 0.33,"
                "\"SuperSubScriptSize\": 0.58,"
                "\"AffectSuperSubScriptUnderline\": true,"
                "\"AffectSuperSubScriptStrikethrough\": true,"
                "\"SmallCapSize\": 0.7,"
                "\"CustomUnderlineStrikethrough\": false,"
                "\"UnderlineOffset\": 0.106,"
                "\"UnderlineWidth\": 0.073,"
                "\"StrikethroughOffset\": 0.236,"
                "\"StrikethroughWidth\": 0.073,"
                "\"URLLink\": 0,"
                "\"HorizontalScale\": 100,"
                "\"WrappingRuleId\": 0,"
                "\"Type\": \"Simple\","
                "\"UnderlineLineStyleId\": 0,"
                "\"StrikethroughLineStyleId\": 0,"
                "\"ShadowStyleId\": 0,"
                "\"ShadowStyleOffset\": {"
                    "\"@X\": 0,"
                    "\"@Y\": 0"
                "},"
                "\"IsFixedWidth\": false,"
                "\"FixedWidth\": 0.003,"
                "\"Css\": {"
                    "\"File\": 0,"
                    "\"ClassSelector\": \"\""
                "}"
            "},";

    doc += "{"
                "\"NodePath\": ["
                    "\"TextStyles\","
                    "\"cour10bold\""
                "],"
                "\"Class\": \"TextStyle\","
                "\"LockedWebNode\": true,"
                "\"AncestorId\": 0,"
                "\"FontSize\": 0.0035278,"
                "\"LineWidth\": 0.0001,"
                "\"MiterLimit\": 10,"
                "\"BaselineShift\": 0,"
                "\"InterCharacterSpacing\": 0,"
                "\"OutlineStyleId\": 0,"
                "\"FillStyleId\": " + to_string(45+ varNumber +flowNumber-5)+ ","
                "\"CapType\": \"Butt\","
                "\"JoinType\": \"Bevel\","
                "\"Kerning\": false,"
                "\"BorderStyleId\": 0,"
                "\"IsVisible\": true,"
                "\"ConnectBorders\": false,"
                "\"WithLineGap\": false,"
                "\"FontId\": " + to_string(45+ varNumber +flowNumber-2)+ ","
                "\"SubFont\": \"Bold\","
                "\"Bold\": true,"
                "\"Italic\": false,"
                "\"Underline\": false,"
                "\"Strikethrough\": false,"
                "\"Language\": \"en\","
                "\"SmallCap\": false,"
                "\"SuperScript\": false,"
                "\"SubScript\": false,"
                "\"SuperScriptOffset\": 0.33,"
                "\"SubScriptOffset\": 0.33,"
                "\"SuperSubScriptSize\": 0.58,"
                "\"AffectSuperSubScriptUnderline\": true,"
                "\"AffectSuperSubScriptStrikethrough\": true,"
                "\"SmallCapSize\": 0.7,"
                "\"CustomUnderlineStrikethrough\": false,"
                "\"UnderlineOffset\": 0.106,"
                "\"UnderlineWidth\": 0.073,"
                "\"StrikethroughOffset\": 0.236,"
                "\"StrikethroughWidth\": 0.073,"
                "\"URLLink\": 0,"
                "\"HorizontalScale\": 100,"
                "\"WrappingRuleId\": 0,"
                "\"Type\": \"Simple\","
                "\"UnderlineLineStyleId\": 0,"
                "\"StrikethroughLineStyleId\": 0,"
                "\"ShadowStyleId\": 0,"
                "\"ShadowStyleOffset\": {"
                    "\"@X\": 0,"
                    "\"@Y\": 0"
                "},"
                "\"IsFixedWidth\": false,"
                "\"FixedWidth\": 0.003,"
                "\"Css\": {"
                    "\"File\": 0,"
                    "\"ClassSelector\": \"\""
                "}"
            "},";
    doc +=  "{"
                "\"NodePath\": ["
                    "\"TextStyles\","
                    "\"courUnderlined\""
                "],"
                "\"Class\": \"TextStyle\","
                "\"LockedWebNode\": true,"
                "\"AncestorId\": 0,"
                "\"FontSize\": 0.0035278,"
                "\"LineWidth\": 0.0001,"
                "\"MiterLimit\": 10,"
                "\"BaselineShift\": 0,"
                "\"InterCharacterSpacing\": 0,"
                "\"OutlineStyleId\": 0,"
                "\"FillStyleId\": " + to_string(45+ varNumber +flowNumber-5)+ ","
                "\"CapType\": \"Butt\","
                "\"JoinType\": \"Bevel\","
                "\"Kerning\": false,"
                "\"BorderStyleId\": 0,"
                "\"IsVisible\": true,"
                "\"ConnectBorders\": false,"
                "\"WithLineGap\": false,"
                "\"FontId\": " + to_string(45+ varNumber +flowNumber-2)+ ","
                "\"SubFont\": \"Regular\","
                "\"Bold\": false,"
                "\"Italic\": false,"
                "\"Underline\": true,"
                "\"Strikethrough\": false,"
                "\"Language\": \"en\","
                "\"SmallCap\": false,"
                "\"SuperScript\": false,"
                "\"SubScript\": false,"
                "\"SuperScriptOffset\": 0.33,"
                "\"SubScriptOffset\": 0.33,"
                "\"SuperSubScriptSize\": 0.58,"
                "\"AffectSuperSubScriptUnderline\": true,"
                "\"AffectSuperSubScriptStrikethrough\": true,"
                "\"SmallCapSize\": 0.7,"
                "\"CustomUnderlineStrikethrough\": false,"
                "\"UnderlineOffset\": 0.106,"
                "\"UnderlineWidth\": 0.073,"
                "\"StrikethroughOffset\": 0.236,"
                "\"StrikethroughWidth\": 0.073,"
                "\"URLLink\": 0,"
                "\"HorizontalScale\": 100,"
                "\"WrappingRuleId\": 0,"
                "\"Type\": \"Simple\","
                "\"UnderlineLineStyleId\": 0,"
                "\"StrikethroughLineStyleId\": 0,"
                "\"ShadowStyleId\": 0,"
                "\"ShadowStyleOffset\": {"
                    "\"@X\": 0,"
                    "\"@Y\": 0"
                "},"
                "\"IsFixedWidth\": false,"
                "\"FixedWidth\": 0.003,"
                "\"Css\": {"
                    "\"File\": 0,"
                    "\"ClassSelector\": \"\""
                "}"
            "},";
            
    doc += "{"
                "\"NodePath\": ["
                    "\"FillStyles\","
                    "\"Black 1FillStyle\""
                "],"
                "\"Class\": \"FillStyle\","
                "\"LockedWebNode\": true,"
                "\"ColorId\":" + to_string(45+ varNumber +flowNumber-4)+ ","
                "\"Offset\": {"
                    "\"@X\": 0,"
                    "\"@Y\": 0"
                "},"
                "\"Rotation\": 0,"
                "\"Skew\": 0,"
                "\"FlipX\": false,"
                "\"Scale\": {"
                    "\"@X\": 1,"
                    "\"@Y\": 1"
                "},"
                "\"ApplyObjectTransformation\": true,"
                "\"TileImage\": true,"
                "\"AutoScale\": false,"
                "\"Transformation_M0\": 1,"
                "\"Transformation_M1\": 0,"
                "\"Transformation_M2\": 0,"
                "\"Transformation_M3\": 1,"
                "\"Transformation_M4\": 0,"
                "\"Transformation_M5\": 0"
            "},";
    
    doc +=  "{"
                "\"NodePath\": ["
                    "\"Colors\","
                    "\"Black\""
                "],"
                "\"Class\": \"Color\","
                "\"LockedWebNode\": true,"
                "\"RGB\": \"0,0,0\","
                "\"CMYK\": \"0,1,1,0.99958\","
                "\"LAB\": \"0,0.000000059605,0.000000059605\","
                "\"HSB\": \"0,0,0\","
                "\"DefaultColorSpace\": \"RGB\","
                "\"SpotColor\": 0,"
                "\"OverwriteSpotColor\": true,"
                "\"SeparationColorSpace\": \"\","
                "\"Density\": 100,"
                "\"IsDeviceN\": false,"
                "\"IsInherit\": false"
            "},";

    doc += "{"
                "\"NodePath\": ["
                    "\"Fonts\","
                    "\"Arial\""
                "],"
                "\"Class\": \"Font\","
                "\"LockedWebNode\": true,"
                "\"Name\": \"Arial\","
                "\"FontName\": \"Arial\","
                "\"SubFont\": ["
                    "{"
                        "\"@Name\": \"Regular\","
                        "\"@Bold\": false,"
                        "\"@Italic\": false,"
                        "\"FontIndex\": 0,"
                        "\"FontLocation\": \"#2#gaqsc7sZuZsrzyew60JBEw/XQsn4BjCDqDvgS1/G0+bLHiaNr0+z3tffkIk=,arial.ttf\","
                        "\"OpenFontFileFlag\": 68"
                    "},"
                    "{"
                        "\"@Name\": \"Bold\","
                        "\"@Bold\": true,"
                        "\"@Italic\": false,"
                        "\"FontIndex\": 0,"
                        "\"FontLocation\": \"#2#gaqsc7sZuZsrzyew60JBEw/XQsm0FmqR7wEo3ek5U1ko2VnsS0TXzw+piKmeGQ==,arialbd.ttf\","
                        "\"OpenFontFileFlag\": 68"
                    "},"
                    "{"
                        "\"@Name\": \"Italic\","
                        "\"@Bold\": false,"
                        "\"@Italic\": true,"
                        "\"FontIndex\": 0,"
                        "\"FontLocation\": \"#2#gaqsc7sZuZsrzyew60JBEw/XQsm/XDCR/Xe49dnUe4wJpjsEKAO3W8E8kTWT,ariali.ttf\","
                        "\"OpenFontFileFlag\": 68"
                    "}"
                "]"
            "},";

    doc += "{"
                "\"NodePath\": ["
                    "\"Fonts\","
                    "\"Courier New\""
                "],"
                "\"Class\": \"Font\","
                "\"LockedWebNode\": true,"
                "\"FontName\": \"Courier New\","
                "\"SubFont\": ["
                    "{"
                        "\"@Name\": \"Regular\","
                        "\"@Bold\": false,"
                        "\"@Italic\": false,"
                        "\"FontIndex\": 0,"
                        "\"FontLocation\": \"#2#gaqsc7sZuZsrzyew60JBEQRHjUhJDctSrWjzz5rItV+uumChbb5Qb0v/CA==,cour.ttf\","
                        "\"OpenFontFileFlag\": 68"
                    "},"
                    "{"
                        "\"@Name\": \"Bold\","
                        "\"@Bold\": true,"
                        "\"@Italic\": false,"
                        "\"FontIndex\": 0,"
                        "\"FontLocation\": \"#2#gaqsc7sZuZsrzyew60JBEQRHjQRZV9ngXrounjab+UZduy6H/YhNWQhM8oNv,courbd.ttf\","
                        "\"OpenFontFileFlag\": 68"
                    "},"
                    "{"
                        "\"@Name\": \"Italic\","
                        "\"@Bold\": false,"
                        "\"@Italic\": true,"
                        "\"FontIndex\": 0,"
                        "\"FontLocation\": \"#2#gaqsc7sZuZsrzyew60JBEQRHjQ8TDdnywnbXOgwFaxFBC2HlieX8WWRrCXQ=,couri.ttf\","
                        "\"OpenFontFileFlag\": 68"
                    "}"
                "]"
            "}";
    
    
    

    doc += "]}}";

    return doc;
}