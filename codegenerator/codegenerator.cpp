#include <iostream>
#include <fstream>
//#include "./typechecking/typechecking.h"
#include "codegeneration/codegeneration.h"
using namespace std;

int codegenerator(Node* docNode, string guid)
{
    
    //cout<< traverseGenerate(docNode, 0);
    // return 0;
    string vars = "";
    int varNr = 0;
    
    vars = getAllVariables(docNode, varNr);

    ofstream myfile;
    myfile.open ("RESULT.json");

    int flowNr = getFlowNumber(docNode);
    
    myfile << traverseGenerate(docNode, vars, guid, varNr, flowNr);
    myfile.close();
    return 0;
}