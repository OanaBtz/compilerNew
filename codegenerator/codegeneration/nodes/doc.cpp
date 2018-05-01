#include "../../model/Node.h"

string generateDoc(Node* currentNode, string result, int tabs)
{
    string doc= "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n";
    doc+= "<?xml-stylesheet type=\"text/xsl\" href=\"the style sheet here\"?>\n\n";
    
    doc+= "<Content fromFile = \""+currentNode->getData()+"\">\n\n";
    
    doc+= "\t<SubstituteSymbol rule=\"on\" />\n";
    doc+= "\t<BalanceColumns rule=\"on\" />\n";
    doc+= "\t<InputTrace rule=\"off\" />\n";
    doc+= "\t<Hypernate rule=\"off\" />\n";
    doc+= "\t<MacroSubstitution rule=\"off\" />\n\n";
    doc+= result+"\n";

    doc+= "</Content>\n";
    return doc;
}
