
#include "doc.h"

string generateDoc(Node* currentNode, string result, int tabs)
{
    string doc= "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n";
    doc+= "<?xml-stylesheet type=\"text/xsl\" href=\"the style sheet here\"?>\n\n";
    doc+= "<Content>\n";

    doc+= result+"\n";

    doc+= "</Content>\n";
    return doc;
}
