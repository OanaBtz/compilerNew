#include "../../model/Node.h"

string generateDoc(Node* currentNode, string result, int tabs)
{
    string doc= "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n";
    doc+= "<?xml-stylesheet type=\"text/xsl\" href=\"the style sheet here\"?>\n\n";
    doc+= "<Content>\n\n";
    doc+= "<SubstituteSymbol rule=\"on\" />\n";
    doc+= "<BalanceColumns rule=\"on\" />\n";
    doc+= "<InputTrace rule=\"off\" />\n";
    doc+= "<MacroSubstitution rule=\"off\" />\n\n";

    doc+= result+"\n";

    doc+= "</Content>\n";
    return doc;
}
