#include <iostream>
#include "./typechecking/typechecking.h"
#include "codegeneration/codegeneration.h"

using namespace std;

int main()
{
    Node docNode(DOCUMENT, "");

    Node fooooo(FO, "");
    Node leeeeft(LEFT, "");

    fooooo.addNode(&leeeeft);

    Node fontNode(FONT, "");
    Node fontNameNode(NAME, "swiss");
    Node fontsizeNode(NUMBER, "12");
    Node fonttypeNode(TYPE, "bold");

    fontNode.addNode(&fontNameNode);
    fontNode.addNode(&fontsizeNode);
    fontNode.addNode(&fonttypeNode);

    Node tiNode(TI, "");
    Node charNode(CHARACTER, "¤");
    Node numNode(NUMBER, "5");

    tiNode.addNode(&charNode);
    tiNode.addNode(&numNode);

    Node da1Node(AREADEFINITION, "");
    Node da1nameNode(NAME, "OVERSKR");
    Node da1xNode(NUMBER, "20");
    Node da1yNode(NUMBER, "32");
    Node da1WidthNode(NUMBER, "175");

    da1Node.addNode(&da1nameNode);
    da1Node.addNode(&da1xNode);
    da1Node.addNode(&da1yNode);
    da1Node.addNode(&da1WidthNode);

    Node area1Node(AREA, "");
    Node usNode(US, "");
    Node textNode(STRINGLITERAL, "Kreditoplysninger");

    area1Node.addNode(&da1nameNode);
    usNode.addNode(&textNode);
    area1Node.addNode(&usNode);


    Node da2Node(AREADEFINITION, "");
    Node da2nameNode(NAME, "VEND");
    Node da2xNode(NUMBER, "7");
    Node da2yNode(NUMBER, "270");
    Node da2WidthNode(NUMBER, "175");
    Node da2RotoNode(ROTATE, "");
    Node da2rotoNumberNode(NUMBER, "-90");

    da2RotoNode.addNode(&da2rotoNumberNode);

    da2Node.addNode(&da2nameNode);
    da2Node.addNode(&da2xNode);
    da2Node.addNode(&da2yNode);
    da2Node.addNode(&da2WidthNode);
    da2Node.addNode(&da2RotoNode);

    Node font2Node(FONT, "");
    Node font2NameNode(NAME, "swiss");
    Node font2sizeNode(NUMBER, "6");
    Node font2typeNode(TYPE, "FED");

    font2Node.addNode(&font2NameNode);
    font2Node.addNode(&font2sizeNode);
    font2Node.addNode(&font2typeNode);

    Node area2Node(AREA, "");
    Node text2Node(STRINGLITERAL, "BECKSIK      CVR-nr. 7777777777 København");
    Node text21Node(STRINGLITERAL, "KL. ");
    Node text22Node(STRINGVARIABLE, "");
    Node nameNode(NAME, "TID");
    Node breakNode(LINEBREAK, "");

    text22Node.addNode(&nameNode);

    area2Node.addNode(&da2nameNode);
    area2Node.addNode(&font2Node);
    area2Node.addNode(&text2Node);
    area2Node.addNode(&breakNode);
    area2Node.addNode(&text21Node);
    area2Node.addNode(&text22Node);

    Node da3Node(AREADEFINITION, "");
    Node da3nNode(NAME, "BOX");
    Node da3xNode(NUMBER, "20");
    Node da3yNode(NUMBER, "40");
    Node da3widthNode(NUMBER, "175");

    da3Node.addNode(&da3nNode);
    da3Node.addNode(&da3xNode);
    da3Node.addNode(&da3yNode);
    da3Node.addNode(&da3widthNode);

    Node area3Node(AREA, "");
    Node area3nNode(NAME, "BOX");

    Node area3BoxNode(BOX, "");
    Node spaceNode(SP, "");
    Node spacenNode(NUMBER, "6");

    spaceNode.addNode(&spacenNode);

    Node space3Node(SP, "");
    Node space3nNode(NUMBER, "4");

    space3Node.addNode(&space3nNode);


    Node tpNode(TP, "");
    Node tpn1Node(NUMBER, "1");
    Node tpn2Node(NUMBER, "30");
    Node tpn3Node(NUMBER, "65");
    Node tpn4Node(NUMBER, "140");

    tpNode.addNode(&tpn1Node);
    tpNode.addNode(&tpn2Node);
    tpNode.addNode(&tpn3Node);
    tpNode.addNode(&tpn4Node);

    area3Node.addNode(&area3nNode);
    area3Node.addNode(&tpNode);

    Node strNode(STRINGLITERAL, "¤Banksted¤Kontonummer¤Kredittype¤Dannelsesdato");

    area3BoxNode.addNode(&strNode);
    area3BoxNode.addNode(&spaceNode);

    area3Node.addNode(&area3BoxNode);
    area3Node.addNode(&space3Node);

    Node area3boxNode2(BOX, "");
    Node space2Node(SP, "");
    Node space2nNode(NUMBER, "220.5");
    space2Node.addNode(&space2nNode);
    area3boxNode2.addNode(&space2Node);

    area3Node.addNode(&area3boxNode2);

    Node da4Node(AREADEFINITION, "");
    Node da4nNode(NAME, "BANKSTED");
    Node da4xNode(NUMBER, "20");
    Node da4yNode(NUMBER, "47");
    Node da4widthNode(NUMBER, "175");

    da4Node.addNode(&da4nNode);
    da4Node.addNode(&da4xNode);
    da4Node.addNode(&da4yNode);
    da4Node.addNode(&da4widthNode);

    Node area4Node(AREA, "");
    Node area4nNode(NAME, "BANKSTED");
    Node on(ON, "");
    Node tabStrNode(STRINGLITERAL, "¤");
    Node strvar1Node(STRINGVARIABLE, "");
    Node strvar1nNode(NAME, "BANKSTED");
    Node strvar2Node(STRINGVARIABLE, "");
    Node strvar2nNode(NAME, "LANGKTONR");
    Node strvar3Node(STRINGVARIABLE, "");
    Node strvar3nNode(NAME, "REGTYPE11");
    Node strvar4Node(STRINGVARIABLE, "");
    Node strvar4nNode(NAME, "REGTYPELNG");
    Node strvar5Node(STRINGVARIABLE, "");
    Node strvar5nNode(NAME, "DATO");
    Node off(OFF, "");

    strvar1Node.addNode(&strvar1nNode);
    strvar2Node.addNode(&strvar2nNode);
    strvar3Node.addNode(&strvar3nNode);
    strvar4Node.addNode(&strvar4nNode);
    strvar5Node.addNode(&strvar5nNode);

    area4Node.addNode(&area4nNode);
    area4Node.addNode(&on);
    area4Node.addNode(&tpNode);
    area4Node.addNode(&tabStrNode);
    area4Node.addNode(&strvar1Node);
    area4Node.addNode(&tabStrNode);
    area4Node.addNode(&strvar2Node);
    area4Node.addNode(&tabStrNode);
    area4Node.addNode(&strvar3Node);
    area4Node.addNode(&strvar4Node);
    area4Node.addNode(&tabStrNode);
    area4Node.addNode(&strvar5Node);
    area4Node.addNode(&off);

    Node da5Node(AREADEFINITION, "");
    Node da5nNode(NAME, "SIKHED");
    Node da5xNode(NUMBER, "25");
    Node da5yNode(NUMBER, "59");
    Node da5widthNode(NUMBER, "175");

    da5Node.addNode(&da5nNode);
    da5Node.addNode(&da5xNode);
    da5Node.addNode(&da5yNode);
    da5Node.addNode(&da5widthNode);

    Node area5Node(AREA, "");
    Node area5nNode(NAME, "SIKHED");
    Node tabStr2Node(STRINGLITERAL, "Some text");
    Node brNode(LINEBREAK, "");

    area5Node.addNode(&area5nNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);




    docNode.addNode(&fontNode);
    docNode.addNode(&fooooo);
    docNode.addNode(&tiNode);
    docNode.addNode(&da1Node);
    docNode.addNode(&da2Node);
    docNode.addNode(&da3Node);
    docNode.addNode(&da4Node);
    docNode.addNode(&da5Node);
    docNode.addNode(&area1Node);
    docNode.addNode(&area2Node);
    docNode.addNode(&area3Node);
    docNode.addNode(&area4Node);
    docNode.addNode(&area5Node);


    if(traverseTypecheck(&docNode, true))
    {
        traverseGenerate(&docNode);
        cout << "kek" << endl;
    }
    else
    {
        cout << "lol" << endl;
    }
    return 0;
}