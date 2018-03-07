%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./codegenerator/model/Node.cpp"
#include "./codegenerator/model/types.h"
#include "./parser/utility.cpp"
#include "./codegenerator/codegeneration/codegeneration.cpp"
#include <iostream>
#include <fstream>

extern int yylex();
void yyerror(char *msg);
std:: vector <Node*> list;
Node docNode(DOCUMENT, "");

#include "./parser/printing.cpp"
#include "./parser/treebuilding.cpp"


%}

%union {
	char tokens[1000];
}

%token <tokens> SUBSTR_T NEW_T SET_T UNKNOWN_T IL_T TA_T MF_T LS_T TU_T QU_T IE_T HW_T BC_T TD_T CB_T SC_T MC_T UP_T IS_T OC_T OI_T RI_T NOTEQUAL_T OF_T CL_T CD_T TM_T DEPTH_T HY_T HR_T MG_T DR_T WEIGHT_T UPPERCASE_T LENGTH_T IN_T PA_T NS_T IR_T IF_T EL_T TH_T OR_T AN_T CT_T EQUAL_T GTHANE_T LTHANE_T GTHAN_T LTHAN_T CANCEL_T RH_T KP_T LL_T GOTO_T EXECUTE_T LABEL_T SE_T PM_T BR_T NV_T NY_T PAGE_T ENY_T COMMENT_T TI_T DA_T FO_T ON_T OFF_T AR_T BX_T SP_T US_T SIZE_T STYLE_T IDENT_T VAR_UP_T VAR_T DIRECTION_T NUM_T WIDTH_T TP_T TAB_T ROTATE_T NEW_LINE_T BM_T SU_T DM_T GS_T SK_T CE_T TB_T MATHEX_T VR_T
%type  <tokens> TOKEN NEW SET DA BR NV NY PAGE ENY COMMENT GTHANE LTHANE TI IN IR FO DIRECTION ON GOTO LL RH CT PA DR WEIGHT KP EXECUTE IF RI OI CB SC MC QU HW IL OC BC IS UP LS TU EL TH OR CD TD SU DM GS TB SK CE CL AN OF HR VR HY NOTEQUAL EQUAL GTHAN LTHAN OFF UPPERCASE LENGTH AR BX SP SE US TM BM PM WIDTH TP TA ROTATE DEPTH SUBSTR MF UNKNOWN MG SIZE STYLE VAR_UP VAR NUM IDENT LABEL MATHEX NEW_LINE
 


%%
TOKEN		:	TOKEN DA
			|	TOKEN BR
			|	TOKEN NV
            |   TOKEN PAGE
			|	TOKEN NY
			|	TOKEN ENY
			|	TOKEN COMMENT
			|	TOKEN TI
            |   TOKEN IN
            |   TOKEN IR
            |   TOKEN FO
            |   TOKEN ON
            |   TOKEN GOTO
            |   TOKEN LL
			|	TOKEN RH
			|	TOKEN CT
            |   TOKEN PA
            |   TOKEN DR
            |   TOKEN WEIGHT
			| 	TOKEN KP
            |   TOKEN EXECUTE
			|	TOKEN IF
            |   TOKEN RI
            |   TOKEN OI
            |   TOKEN CB
            |   TOKEN SC
            |   TOKEN MC
            |   TOKEN QU
            |   TOKEN HW
            |   TOKEN IL
            |   TOKEN OC
            |   TOKEN BC
            |   TOKEN IS
            |   TOKEN UP
            |   TOKEN LS
            |   TOKEN TU
            |   TOKEN EL
            |   TOKEN TH
            |   TOKEN OR
            |   TOKEN CD
            |   TOKEN TD
            |   TOKEN SU
            |   TOKEN DM
            |   TOKEN GS
            |   TOKEN TB
            |   TOKEN SK
            |   TOKEN CE
            |   TOKEN CL
            |   TOKEN AN
            |   TOKEN OF
            |   TOKEN HR
            |   TOKEN VR
            |   TOKEN HY
            |   TOKEN NOTEQUAL
            |   TOKEN EQUAL
            |   TOKEN GTHAN
            |   TOKEN LTHAN
            |   TOKEN OFF
            |   TOKEN UPPERCASE
            |   TOKEN LENGTH
            |   TOKEN AR
            |   TOKEN BX
            |   TOKEN SP
            |   TOKEN SE
            |   TOKEN US
            |   TOKEN TM
            |   TOKEN BM
            |   TOKEN PM
            |   TOKEN WIDTH
            |   TOKEN TP
            |   TOKEN TA
            |   TOKEN ROTATE
            |   TOKEN DEPTH
            |   TOKEN SUBSTR
            |   TOKEN MF
            |   TOKEN UNKNOWN
            |   TOKEN MG
            |   TOKEN SIZE
            |   TOKEN STYLE
            |   TOKEN VAR_UP
			|	TOKEN VAR
            |	TOKEN NUM
            |	TOKEN IDENT
            |	TOKEN LABEL
			| 	TOKEN MATHEX
            |   TOKEN GTHANE
            |   TOKEN LTHANE
            |   TOKEN NEW
            |   TOKEN SET
            |   TOKEN NEW_LINE
            |   DA
			|	BR
			|	NV
            |   PAGE
			|	NY
			|   ENY
			|	COMMENT
			|	TI
            |   IN
            |   IR
            |   FO
            |   ON
            |   GOTO
            |   LL
			|	RH
			|	CT
            |   PA
            |   DR
            |   WEIGHT
			| 	KP
            |   EXECUTE
			|	IF
            |   RI
            |   OI
            |   CB
            |   SC
            |   MC
            |   QU
            |   HW
            |   IL
            |   OC
            |   BC
            |   IS
            |   UP
            |   LS
            |   TU
            |   EL
            |   TH
            |   OR
            |   CD
            |   TD
            |   SU
            |   DM
            |   GS
            |   TB
            |   SK
            |   CE
            |   CL
            |   AN
            |   OF
            |   HR
            |   VR
            |   HY
            |   NOTEQUAL
            |   EQUAL
            |   GTHAN
            |   LTHAN
            |   OFF
            |   UPPERCASE
            |   LENGTH
            |   AR
            |   BX
            |   SP
            |   SE
            |   US
            |   TM
            |   BM
            |   PM
            |   WIDTH
            |   TP
            |   TA
            |   ROTATE
            |   DEPTH
            |   SUBSTR
            |   MF
            |   UNKNOWN
            |   MG
            |   SIZE
            |   STYLE
            |   VAR_UP
			|	VAR
            |	NUM
            |	IDENT
            |	LABEL
			| 	MATHEX
            |   GTHANE
            |   LTHANE
            |   NEW
            |   SET
            |   NEW_LINE
            ;            
DA          :   DA_T                                    {
                                                            cout<< "DEFINE AREA ";
                                                            Node* daNode = new Node(AREADEFINITION, "");
                                                            list.push_back(daNode);
                                                        }
            ;
BR          :   BR_T                                    {
                                                            cout<< "BREAK ";
                                                            Node* brNode = new Node(LINEBREAK, "");
                                                            list.push_back(brNode);
                                                        }
            ;
NV          :   NV_T                                    {
                                                            cout<< "NV ";
                                                            Node* nvNode = new Node(NV, "");
                                                            list.push_back(nvNode);
                                                        }
            ;
PAGE        :   PAGE_T                                  {
                                                            cout<< "PAGE ";
                                                            Node* pageNode = new Node(PAGE, "");
                                                            list.push_back(pageNode);
                                                        }
            ;
NY          :   NY_T                                    {
                                                            cout<< "NY ";
                                                            Node* nyNode = new Node(NY, "");
                                                            list.push_back(nyNode);
                                                        }
            ;
ENY         :   ENY_T                                   {
                                                            cout<< "ENY ";
                                                            Node* enyNode = new Node(ENY, "");
                                                            list.push_back(enyNode);
                                                        }
            ;
COMMENT     :   COMMENT_T                               {
                                                            cout<< "COMMENT "; 
                                                            Node* commentNode = new Node(COMMENT, "");
                                                            list.push_back(commentNode);                                                           
                                                        }
            ;
TI          :   TI_T                                    {
                                                            cout<< "TI ";     
                                                            Node* tiNode = new Node(TI, "");
                                                            list.push_back(tiNode);                                                           
                                                        }
            ;
IN          :   IN_T                                    {
                                                            cout<< "IN ";      
                                                            Node* inNode = new Node(IN, "");
                                                            list.push_back(inNode);                                                          
                                                        }
            ;
IR          :   IR_T                                    {
                                                            cout<< "IR ";  
                                                            Node* irNode = new Node(IR, "");
                                                            list.push_back(irNode);                                                              
                                                        }
            ;
FO          :   FO_T                                    {
                                                            cout<< "FO ";                                                            
                                                            Node* foNode = new Node(FO, "");
                                                            list.push_back(foNode);
                                                        }
            ;
ON          :   ON_T                                    {
                                                            cout<< "ON ";  
                                                            Node* onNode = new Node(ON, "");
                                                            list.push_back(onNode);                                                              
                                                        }
            ;
GOTO        :   GOTO_T                                  {
                                                            cout<< "GOTO ";      
                                                            Node* goNode = new Node(GO, "");
                                                            list.push_back(goNode);                                                          
                                                        }
            ;
LL          :   LL_T                                    {
                                                            cout<< "LL ";     
                                                            Node* llNode = new Node(LL, "");
                                                            list.push_back(llNode);                                                           
                                                        }
            ;
RH          :   RH_T                                    {
                                                            cout<< "RH ";  
                                                            Node* rhNode = new Node(RH, "");
                                                            list.push_back(rhNode);                                                              
                                                        }
            ;
CT          :   CT_T                                    {
                                                            cout<< "CT ";    
                                                            Node* ctNode = new Node(CT, "");
                                                            list.push_back(ctNode);                                                            
                                                        }
            ;
PA          :   PA_T                                    {
                                                            cout<< "PA ";    
                                                            Node* paNode = new Node(PA, "");
                                                            list.push_back(paNode);                                                            
                                                        }
            ;
DR          :   DR_T                                    {
                                                            cout<< "DR ";   
                                                            Node* drNode = new Node(DR, "");
                                                            list.push_back(drNode);                                                          
                                                        }
            ;
WEIGHT      :   WEIGHT_T                                {
                                                            cout<< "WEIGHT ";       
                                                            Node* weightNode = new Node(WEIGHT, "");
                                                            list.push_back(weightNode);                                                          
                                                        }
            ;
KP          :   KP_T                                    {
                                                            cout<< "KEEP ";       
                                                            Node* kpNode = new Node(KP, "");
                                                            list.push_back(kpNode);                                                          
                                                        }
            ;
EXECUTE     :   EXECUTE_T                               {
                                                            cout<< "EXECUTE ";
                                                            Node* executeNode = new Node(EXECUTE, "");
                                                            list.push_back(executeNode);                                                                 
                                                        }
            ;
IF          :   IF_T                                    {
                                                            cout<< "IF ";          
                                                            Node* ifNode = new Node(IF, "");
                                                            list.push_back(ifNode);                                                       
                                                        }
            ;
RI          :   RI_T                                    {
                                                            cout<< "RI ";
                                                            Node* riNode = new Node(RI, "");
                                                            list.push_back(riNode);                                                                 
                                                        }
            ;
OI          :   OI_T                                    {
                                                            cout<< "OI "; 
                                                            Node* oiNode = new Node(OI, "");
                                                            list.push_back(oiNode);                                                                
                                                        }
            ;
CB          :   CB_T                                    {
                                                            cout<< "CB ";     
                                                            Node* cbNode = new Node(CB, "");
                                                            list.push_back(cbNode);                                                            
                                                        }
            ;
SC          :   SC_T                                    {
                                                            cout<< "SC ";  
                                                            Node* paNode = new Node(PA, "");
                                                            list.push_back(paNode);                                                               
                                                        }
            ;
MC          :   MC_T                                    {
                                                            cout<< "MC ";   
                                                            Node* mcNode = new Node(MC, "");
                                                            list.push_back(mcNode);                                                              
                                                        }
            ;
QU          :   QU_T                                    {
                                                            cout<< "QU ";     
                                                            Node* quNode = new Node(QU, "");
                                                            list.push_back(quNode);                                                            
                                                        }
            ;
HW          :   HW_T                                    {
                                                            cout<< "HW ";     
                                                            Node* hwNode = new Node(HW, "");
                                                            list.push_back(hwNode);                                                            
                                                        }  
            ;  
IL          :   IL_T                                    {
                                                            cout<< "IL ";     
                                                            Node* ilNode = new Node(IL, "");
                                                            list.push_back(ilNode);                                                            
                                                        }
            ;
OC          :   OC_T                                    {
                                                            cout<< "OC ";   
                                                            Node* ocNode = new Node(OC, "");
                                                            list.push_back(ocNode);                                                              
                                                        }
            ;
BC          :   BC_T                                    {
                                                            cout<< "BC ";
                                                            Node* bcNode = new Node(BC, "");
                                                            list.push_back(bcNode);                                                                 
                                                        }
            ;
IS          :   IS_T                                    {
                                                            cout<< "IS ";     
                                                            Node* isNode = new Node(IS, "");
                                                            list.push_back(isNode);                                                            
                                                        }
            ;
UP          :   UP_T                                    {
                                                            cout<< "UP ";     
                                                            Node* upNode = new Node(UP, "");
                                                            list.push_back(upNode);                                                            
                                                        }
            ;
LS          :   LS_T                                    {
                                                            cout<< "LS ";     
                                                            Node* lsNode = new Node(LS, "");
                                                            list.push_back(lsNode);                                                            
                                                        }
            ;
TU          :   TU_T                                    {
                                                            cout<< "TU ";     
                                                            Node* tuNode = new Node(TU, "");
                                                            list.push_back(tuNode);                                                            
                                                        }
            ;
EL          :   EL_T                                    {
                                                            cout<< "EL ";     
                                                            Node* elNode = new Node(ELSE, "");
                                                            list.push_back(elNode);                                                            
                                                        }
            ;
TH          :   TH_T                                    {
                                                            cout<< "TH ";     
                                                            Node* thNode = new Node(THEN, "");
                                                            list.push_back(thNode);                                                            
                                                        }
            ;
OR          :   OR_T                                    {
                                                            cout<< "OR ";     
                                                            Node* orNode = new Node(OR, "");
                                                            list.push_back(orNode);                                                            
                                                        }
            ;
CD          :   CD_T                                    {
                                                            cout<< "CD ";     
                                                            Node* cdNode = new Node(CD, "");
                                                            list.push_back(cdNode);                                                            
                                                        }
            ;
TD          :   TD_T                                    {
                                                            cout<< "TD ";     
                                                            Node* tdNode = new Node(TD, "");
                                                            list.push_back(tdNode);                                                            
                                                        }
            ;
SU          :   SU_T                                    {
                                                            cout<< "SU ";  
                                                            Node* suNode = new Node(SU, "");
                                                            list.push_back(suNode);                                                               
                                                        }
            ;
DM          :   DM_T                                    {
                                                            cout<< "DM ";     
                                                            Node* dmNode = new Node(DM, "");
                                                            list.push_back(dmNode);                                                            
                                                        }
            ;
GS          :   GS_T                                    {
                                                            cout<< "GS ";
                                                            Node* gsNode = new Node(GS, "");
                                                            list.push_back(gsNode);                                                                 
                                                        }
            ;
TB          :   TB_T                                    {
                                                            cout<< "TB ";   
                                                            Node* tbNode = new Node(TB, "");
                                                            list.push_back(tbNode);                                                               
                                                        }
            ;
SK          :   SK_T                                    {
                                                            cout<< "SK ";             
                                                            Node* skNode = new Node(SK, "");
                                                            list.push_back(skNode);                                                     
                                                        }
            ;
CE          :   CE_T                                    {
                                                            cout<< "CE ";     
                                                            Node* ceNode = new Node(CE, "");
                                                            list.push_back(ceNode);                                                             
                                                        }
            ;
CL          :   CL_T                                    {
                                                            cout<< "CL ";     
                                                            Node* clNode = new Node(CL, "");
                                                            list.push_back(clNode);                                                             
                                                        }
            ;
AN          :   AN_T                                    {
                                                            cout<< "AN ";
                                                            Node* anNode = new Node(AND, "");
                                                            list.push_back(anNode);                                                                  
                                                        }
            ;
OF          :   OF_T                                    {
                                                            cout<< "OF ";
                                                            Node* ofNode = new Node(OF, "");
                                                            list.push_back(ofNode);                                                                  
                                                        }
            ;
HR          :   HR_T                                    {
                                                            cout<< "HR ";     
                                                            Node* hrNode = new Node(HR, "");
                                                            list.push_back(hrNode);                                                             
                                                        }
            ;
VR          :   VR_T                                    {
                                                            cout<< "VR ";     
                                                            Node* vrNode = new Node(VR, "");
                                                            list.push_back(vrNode);                                                             
                                                        }
            ;
HY          :   HY_T                                    {
                                                            cout<< "HY ";     
                                                            Node* hyNode = new Node(HY, "");
                                                            list.push_back(hyNode);                                                             
                                                        }
            ;
NOTEQUAL    :   NOTEQUAL_T                              {
                                                            cout<< "NOTEQUAL ";
                                                            Node* comparisonNode = new Node(COMPARISON, "");
                                                            list.push_back(comparisonNode);                                                                  
                                                        }
            ;
EQUAL       :   EQUAL_T                                 {
                                                            cout<< "EQUAL ";      
                                                            Node* comparisonNode = new Node(COMPARISON, "");
                                                            list.push_back(comparisonNode);                                                               
                                                        }
            ;
GTHAN       :   GTHAN_T                                 {
                                                            cout<< "GTHAN ";  
                                                            Node* comparisonNode = new Node(COMPARISON, "");
                                                            list.push_back(comparisonNode);                                                                   
                                                        }
            ;
LTHAN       :   LTHAN_T                                 {
                                                            cout<< "LTHAN ";  
                                                            Node* comparisonNode = new Node(COMPARISON, "");
                                                            list.push_back(comparisonNode);                                                                   
                                                        }
            ;
GTHANE      :   GTHANE_T                                {
                                                            cout<< "GTHANE ";  
                                                            Node* comparisonNode = new Node(COMPARISON, "");
                                                            list.push_back(comparisonNode);                                                                   
                                                        }
            ;
LTHANE      :   LTHANE_T                                {
                                                            cout<< "LTHANE ";  
                                                            Node* comparisonNode = new Node(COMPARISON, "");
                                                            list.push_back(comparisonNode);                                                                   
                                                        }
            ;
OFF         :   OFF_T                                   {
                                                            cout<< "OFF ";  
                                                            Node* offNode = new Node(OFF, "");
                                                            list.push_back(offNode);                                                                 
                                                        }  
            ;
UPPERCASE   :   UPPERCASE_T                             {
                                                            cout<< "UPPERCASE ";  
                                                            Node* uppercaseNode = new Node(CONDITION, $1);
                                                            list.push_back(uppercaseNode);                                                                 
                                                        }
            ;
LENGTH      :   LENGTH_T                                {
                                                            cout<< "LENGTH ";             
                                                            Node* lengthNode = new Node(CONDITION, $1);
                                                            list.push_back(lengthNode);                                                                   
                                                        }
            ;
AR          :   AR_T                                    {
                                                            cout<< "AR ";    
                                                            Node* arNode = new Node(AREA, "");
                                                            list.push_back(arNode);                                                                            
                                                        }
            ;
BX          :   BX_T                                    {
                                                            cout<< "BX "; 
                                                            Node* boxNode = new Node(BOX, "");
                                                            list.push_back(boxNode);                                                                
                                                        }
            ;
SP          :   SP_T                                    {
                                                            cout<< "SP "; 
                                                            Node* spNode = new Node(SP, "");
                                                            list.push_back(spNode);                                                               
                                                        }
            ;
SE          :   SE_T                                    {
                                                            cout<< "SE ";     
                                                            Node* seNode = new Node(SE, "");
                                                            list.push_back(seNode);                                                           
                                                        }
            ;
US          :   US_T                                    {
                                                            cout<< "US ";     
                                                            Node* usNode = new Node(US, "");
                                                            list.push_back(usNode);                                                           
                                                        }
            ;
TM          :   TM_T                                    {
                                                            cout<< "TM ";    
                                                            Node* tmNode = new Node(TM, "");
                                                            list.push_back(tmNode);                                                            
                                                        }
            ;
BM          :   BM_T                                    {
                                                            cout<< "BM ";             
                                                            Node* bmNode = new Node(BM, "");
                                                            list.push_back(bmNode);                                                   
                                                        }
            ;
PM          :   PM_T                                    {
                                                            cout<< "PM ";   
                                                            Node* pmNode = new Node(PM, "");
                                                            list.push_back(pmNode);                                                              
                                                        }
            ;
WIDTH       :   WIDTH_T                                 {
                                                            cout<< "WIDTH "; 
                                                            Node* widthNode = new Node(WIDTH, "");
                                                            list.push_back(widthNode);                                                                
                                                        }
            ;
TP          :   TP_T                                    {
                                                            cout<< "TP "; 
                                                            Node* tpNode = new Node(TP, "");
                                                            list.push_back(tpNode);                                                                
                                                        }
            ;
TA          :   TA_T                                    {
                                                            cout<< "TA ";              
                                                            Node* taNode = new Node(TA, "");
                                                            list.push_back(taNode);                                                   
                                                        }
            ;
ROTATE      :   ROTATE_T                                {
                                                            cout<< "ROTATE ";   
                                                            Node* rotateNode = new Node(ROTATE, "");
                                                            list.push_back(rotateNode);                                                              
                                                        }
            ;
DEPTH       :   DEPTH_T                                 {
                                                            cout<< "DEPTH "; 
                                                            Node* depthNode = new Node(DEPTH, "");
                                                            list.push_back(depthNode);                                                                
                                                        }
            ;
SUBSTR      :   SUBSTR_T                                {
                                                            cout<< "SUBSTR ";     
                                                            Node* substrNode = new Node(SUBSTR, "");
                                                            list.push_back(substrNode);                                                            
                                                        }
            ;
MF          :   MF_T                                    {
                                                            cout<<"****************************Missing functionality************************* command: "<<$1<<endl;
                                                        }
            ;
UNKNOWN     :   UNKNOWN_T                               {
                                                            cout<<"*******************************UNKNOWN TOKEN*******************************************"<<endl;
                                                        }
            ;
MG          :   MG_T                                    {
                                                            cout<< "MG "; 
                                                            Node* mgNode = new Node(MG, "");
															string s = $1;
															Node* mgTNode = new Node(MG_TYPE, s.substr(4, 1));
															Node* mgStrNode = new Node(STRING, s.substr(6, s.length() - 7));
															list.push_back(mgNode);
															list.push_back(mgTNode);
															list.push_back(mgStrNode);                                                               
                                                        }
            ;
SIZE        :   SIZE_T                                  {
                                                            cout<<$1<<" ";    
                                                            Node* sizeNode = new Node(SIZE, $1);
                                                            list.push_back(sizeNode);                                                             
                                                        }  
            ;              
STYLE       :   STYLE_T                                 {
                                                            cout<<$1<<" ";  
                                                            Node* styleNode = new Node(FONT, $1);
                                                            list.push_back(styleNode);                                                               
                                                        }
            ;
VAR_UP      :   VAR_UP_T                                {
                                                            cout<< "VAR_UP ";            
                                                            Node* varNode = new Node(VARIABLE, $1);
                                                            list.push_back(varNode);                                                     
                                                        }
            ;
VAR         :   VAR_T                                   {
                                                            cout<< "VAR ";  
                                                            Node* varNode = new Node(VARIABLE, $1);
                                                            list.push_back(varNode);                                                               
                                                        }
            ;
NUM         :   NUM_T                                   {
                                                            cout<<$1<<" ";   
                                                            Node* numNode = new Node(NUMBER, $1);
                                                            list.push_back(numNode);                                                              
                                                        }
            ;
IDENT       :   IDENT_T                                 {
                                                            cout<<$1<<" "; 
                                                            Node* stringNode = new Node(STRING, $1);
                                                            list.push_back(stringNode);                                                                
                                                        }
            ;
LABEL       :   LABEL_T                                 {
                                                            cout<<$1<<" ";  
                                                            Node* labelNode = new Node(LABEL, $1);
                                                            list.push_back(labelNode);                                                               
                                                        } 
            ;   
MATHEX      :   MATHEX_T                                {
                                                            cout<<$1<<" ";       
                                                            Node* mathexNode = new Node(MATHEX, $1);
                                                            list.push_back(mathexNode);                                                          
                                                        }
            ;
NEW         :   NEW_T                                   {
                                                            cout<<"NEW"<<" ";  
                                                            Node* newNode = new Node(NEW, "");
                                                            list.push_back(newNode);                                                               
                                                        } 
            ;   
SET         :   SET_T                                   {
                                                            cout<<"SET"<<" ";       
                                                            Node* setNode = new Node(SET, "");
                                                            list.push_back(setNode);                                                          
                                                        }
            ;
NEW_LINE    :   NEW_LINE_T                              {
                                                            cout<< "NEW LINE "<<std::endl;
                                                            Node* newlineNode = new Node(NEWLINE, "");
                                                            list.push_back(newlineNode);                                                                 
                                                        }
            ;


%%

void yyerror(char *msg){
	extern int yylineno;
	fprintf(stderr, "%s in line %d\n", msg, yylineno);
	exit(1);
}

int main(){

	list.push_back(&docNode);

	cout<< std::endl << std::endl <<"*******************YYPARSE*********************"<<std::endl;
	
    yyparse();
	
    cout<< endl << endl <<"*******************LIST OF NODES*********************"<<endl;
	//printList(list);

    cout<< endl << endl <<"****************START TREE BUILDING*******************"<<endl;
    startTreeBuilding(list);

    cout<< endl << endl <<"****************TREE*******************"<<endl;
    printTree(list[0], 0);

    cout<<"Template generated successfully!"<<endl<<endl;
}