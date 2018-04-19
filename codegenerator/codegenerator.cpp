#include <iostream>
#include <fstream>
//#include "./typechecking/typechecking.h"
#include "codegeneration/codegeneration.h"
using namespace std;

int codegenerator(Node* docNode)
{
    
    //cout<< traverseGenerate(docNode, 0);
    // return 0;
    ofstream myfile;
    myfile.open ("result");
    myfile << traverseGenerate(docNode, 0);
    myfile.close();
    return 0;
}