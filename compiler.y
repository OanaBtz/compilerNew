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
#include "./codegenerator/codegenerator.cpp"
extern int yylex();
void yyerror(char *msg);
std:: vector <Node*> list;
std::vector<Node*>::iterator it;
Node docNode(DOCUMENT, "");
bool silent = false;
int spaces = 0;
#include "./parser/printing.cpp"
#include "./parser/treebuilding.cpp"


%}

%union {
	char tokens[1000];
}

%token <tokens> AM_T SEMICOLON_T SPACE_T  MS_T FE_T OG_T PW_T SUBSTR_T DU_T VS_T IM_T DC_T SX_T PL_T SD_T UC_T VI_T RF_T LI_T PN_T NEW_T SET_T UNKNOWN_T IL_T TA_T MF_T LS_T TU_T QU_T HW_T BC_T TD_T CB_T AF_T UD_T ON_T IN_T CC_T RC_T NR_T IT_T UN_T OV_T DOTNY_T AT_T SC_T MC_T UP_T IS_T OC_T OI_T RI_T NOTEQUAL_T OF_T CL_T CD_T TM_T DEPTH_T HY_T HR_T MG_T DR_T WEIGHT_T UPPERCASE_T LENGTH_T PA_T IR_T IF_T EL_T TH_T OR_T AN_T CT_T EQUAL_T GTHANE_T LTHANE_T GTHAN_T LTHAN_T CANCEL_T RH_T KP_T LL_T GOTO_T EXECUTE_T LABEL_T SE_T PM_T BR_T NV_T NY_T PAGE_T ENY_T COMMENT_T TI_T DA_T FO_T OFF_T AR_T BX_T SP_T US_T SIZE_T STYLE_T IDENT_T VAR_UP_T VAR_T NUM_T WIDTH_T TP_T TAB_T ROTATE_T NEW_LINE_T BM_T SU_T DM_T GS_T SK_T CE_T TB_T MATHEX_T VR_T

%type  <tokens> TOKEN SEMICOLON SPACE MS FE OG PA PW AF UD ON CC RC NR IT UN AM OV DOTNY AT DR WEIGHT KP EXECUTE IF RI OI CB SC MC QU HW IL OC BC IS UP LS TU EL TH OR CD TD SU DM GS TB SK CE CL AN OF HR VR HY NOTEQUAL EQUAL GTHAN LTHAN UPPERCASE LENGTH AR BX SP SE US TM BM PM WIDTH TP TA ROTATE DEPTH SUBSTR MF UNKNOWN MG SIZE STYLE VAR_UP VAR NUM IDENT LABEL MATHEX NEW_LINE NEW DU VS IM DC SX PL SD UC VI RF LI PN SET DA BR NV NY PAGE ENY COMMENT GTHANE LTHANE TI IN IR FO GOTO LL RH CT 

 


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
            |   TOKEN IM
            |   TOKEN DC
            |   TOKEN SX
            |   TOKEN PL
            |   TOKEN SD
            |   TOKEN UC
            |   TOKEN VI
            |   TOKEN RF
            |   TOKEN LI
            |   TOKEN PN
            |   TOKEN DU
            |   TOKEN VS
            |   TOKEN PW
            |   TOKEN AF
            |   TOKEN UD
            |   TOKEN ON
            |   TOKEN CC
            |   TOKEN RC
            |   TOKEN NR
            |   TOKEN IT
            |   TOKEN UN
            |   TOKEN AM
            |   TOKEN OV
            |   TOKEN DOTNY
            |   TOKEN AT
            |   TOKEN OG
            |   TOKEN MS
            |   TOKEN FE
            |   TOKEN SPACE
            |   TOKEN SEMICOLON
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
            |   IM
            |   DC
            |   SX
            |   PL
            |   SD
            |   UC
            |   VI
            |   RF
            |   LI
            |   PN
            |   DU
            |   VS
            |   PW
            |   AF
            |   UD
            |   ON
            |   CC
            |   RC
            |   NR
            |   IT
            |   UN
            |   AM
            |   OV
            |   DOTNY
            |   AT
            |   OG
            |   MS
            |   FE
            |   SPACE
            |   SEMICOLON
            |   NEW_LINE
            ;            
DA          :   DA_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "DEFINE AREA ";
                                                            Node* daNode = new Node(AREADEFINITION, "");
                                                            list.push_back(daNode);
                                                        }
            ;
BR          :   BR_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "BREAK ";
                                                            Node* brNode = new Node(LINEBREAK, "");
                                                            list.push_back(brNode);
                                                        }
            ;
NV          :   NV_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "NV ";
                                                            Node* nvNode = new Node(NV, "");
                                                            list.push_back(nvNode);
                                                        }
            ;
PAGE        :   PAGE_T                                  {
                                                            spaces = 0;
                                                            if(!silent)cout<< "PAGE ";
                                                            Node* pageNode = new Node(PAGE, "");
                                                            list.push_back(pageNode);
                                                        }
            ;
NY          :   NY_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "NY ";
                                                            Node* nyNode = new Node(NY, "");
                                                            list.push_back(nyNode);
                                                        }
            ;
ENY         :   ENY_T                                   {
                                                            spaces = 0;
                                                            if(!silent)cout<< "ENY ";
                                                            Node* enyNode = new Node(ENY, "");
                                                            list.push_back(enyNode);
                                                        }
            ;
COMMENT     :   COMMENT_T                               {
                                                            spaces = 0;
                                                            if(!silent)cout<< "COMMENT "; 
                                                            Node* commentNode = new Node(COMMENT, "");
                                                            list.push_back(commentNode);                                                           
                                                        }
            ;
TI          :   TI_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "TI ";     
                                                            Node* tiNode = new Node(TI, "");
                                                            list.push_back(tiNode);                                                           
                                                        }
            ;
IN          :   IN_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "IN ";      
                                                            Node* inNode = new Node(IN, "");
                                                            list.push_back(inNode);                                                          
                                                        }
            ;
IR          :   IR_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "IR ";  
                                                            Node* irNode = new Node(IR, "");
                                                            list.push_back(irNode);                                                              
                                                        }
            ;
FO          :   FO_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "FO ";                                                            
                                                            Node* foNode = new Node(FO, "");
                                                            list.push_back(foNode);
                                                        }
            ;
GOTO        :   GOTO_T                                  {
                                                            spaces = 0;
                                                            if(!silent)cout<< "GOTO ";      
                                                            Node* goNode = new Node(GO, "");
                                                            list.push_back(goNode);                                                          
                                                        }
            ;
LL          :   LL_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "LL ";     
                                                            Node* llNode = new Node(LL, "");
                                                            list.push_back(llNode);                                                           
                                                        }
            ;
RH          :   RH_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "RH ";  
                                                            Node* rhNode = new Node(RH, "");
                                                            list.push_back(rhNode);                                                              
                                                        }
            ;
CT          :   CT_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "CT ";    
                                                            Node* ctNode = new Node(CT, "");
                                                            list.push_back(ctNode);                                                            
                                                        }
            ;
PA          :   PA_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "PA ";    
                                                            Node* paNode = new Node(PA, "");
                                                            list.push_back(paNode);                                                            
                                                        }
            ;
DR          :   DR_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "DR ";   
                                                            Node* drNode = new Node(DR, "");
                                                            list.push_back(drNode);                                                          
                                                        }
            ;
WEIGHT      :   WEIGHT_T                                {
                                                            spaces = 0;
                                                            if(!silent)cout<< "WEIGHT ";       
                                                            Node* weightNode = new Node(WEIGHT, $1);
                                                            list.push_back(weightNode);                                                          
                                                        }
            ;
KP          :   KP_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "KEEP ";       
                                                            Node* kpNode = new Node(KP, "");
                                                            list.push_back(kpNode);                                                          
                                                        }
            ;
EXECUTE     :   EXECUTE_T                               {
                                                            spaces = 0;
                                                            if(!silent)cout<< "EXECUTE ";
                                                            Node* executeNode = new Node(EXECUTE, $1);
                                                            list.push_back(executeNode);                                                                 
                                                        }
            ;
IF          :   IF_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "IF ";          
                                                            Node* ifNode = new Node(IF, "");
                                                            list.push_back(ifNode);                                                       
                                                        }
            ;
RI          :   RI_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "RI ";
                                                            Node* riNode = new Node(RI, "");
                                                            list.push_back(riNode);                                                                 
                                                        }
            ;
OI          :   OI_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "OI "; 
                                                            Node* oiNode = new Node(OI, "");
                                                            list.push_back(oiNode);                                                                
                                                        }
            ;
CB          :   CB_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "CB ";     
                                                            Node* cbNode = new Node(CB, "");
                                                            list.push_back(cbNode);                                                            
                                                        }
            ;
SC          :   SC_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "SC ";  
                                                            Node* paNode = new Node(PA, "");
                                                            list.push_back(paNode);                                                               
                                                        }
            ;
MC          :   MC_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "MC ";   
                                                            Node* mcNode = new Node(MC, "");
                                                            list.push_back(mcNode);                                                              
                                                        }
            ;
QU          :   QU_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "QU ";     
                                                            Node* quNode = new Node(QU, "");
                                                            list.push_back(quNode);                                                            
                                                        }
            ;
HW          :   HW_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "HW ";     
                                                            Node* hwNode = new Node(HW, "");
                                                            list.push_back(hwNode);                                                            
                                                        }  
            ;  
IL          :   IL_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "IL ";     
                                                            Node* ilNode = new Node(IL, "");
                                                            list.push_back(ilNode);                                                            
                                                        }
            ;
OC          :   OC_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "OC ";   
                                                            Node* ocNode = new Node(OC, "");
                                                            list.push_back(ocNode);                                                              
                                                        }
            ;
BC          :   BC_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "BC ";
                                                            Node* bcNode = new Node(BC, "");
                                                            list.push_back(bcNode);                                                                 
                                                        }
            ;
IS          :   IS_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "IS ";     
                                                            Node* isNode = new Node(IS, "");
                                                            list.push_back(isNode);                                                            
                                                        }
            ;
UP          :   UP_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "UP ";     
                                                            Node* upNode = new Node(UP, "");
                                                            list.push_back(upNode);                                                            
                                                        }
            ;
LS          :   LS_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "LS ";     
                                                            Node* lsNode = new Node(LS, "");
                                                            list.push_back(lsNode);                                                            
                                                        }
            ;
TU          :   TU_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "TU ";     
                                                            Node* tuNode = new Node(TU, "");
                                                            list.push_back(tuNode);                                                            
                                                        }
            ;
EL          :   EL_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "EL ";     
                                                            Node* elNode = new Node(ELSE, "");
                                                            list.push_back(elNode);                                                            
                                                        }
            ;
TH          :   TH_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "TH ";     
                                                            Node* thNode = new Node(THEN, "");
                                                            list.push_back(thNode);                                                            
                                                        }
            ;
OR          :   OR_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "OR ";     
                                                            Node* orNode = new Node(OR, "");
                                                            list.push_back(orNode);                                                            
                                                        }
            ;
CD          :   CD_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "CD ";     
                                                            Node* cdNode = new Node(CD, "");
                                                            list.push_back(cdNode);                                                            
                                                        }
            ;
TD          :   TD_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "TD ";     
                                                            Node* tdNode = new Node(TD, "");
                                                            list.push_back(tdNode);                                                            
                                                        }
            ;
SU          :   SU_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "SU ";  
                                                            Node* suNode = new Node(SU, "");
                                                            list.push_back(suNode);                                                               
                                                        }
            ;
DM          :   DM_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "DM ";     
                                                            Node* dmNode = new Node(DM, "");
                                                            list.push_back(dmNode);                                                            
                                                        }
            ;
GS          :   GS_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "GS ";
                                                            Node* gsNode = new Node(GS, "");
                                                            list.push_back(gsNode);                                                                 
                                                        }
            ;
TB          :   TB_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "TB ";   
                                                            Node* tbNode = new Node(TB, "");
                                                            list.push_back(tbNode);                                                               
                                                        }
            ;
SK          :   SK_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "SK ";             
                                                            Node* skNode = new Node(SK, "");
                                                            list.push_back(skNode);                                                     
                                                        }
            ;
CE          :   CE_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "CE ";     
                                                            Node* ceNode = new Node(CE, "");
                                                            list.push_back(ceNode);                                                             
                                                        }
            ;
CL          :   CL_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "CL ";     
                                                            Node* clNode = new Node(CL, "");
                                                            list.push_back(clNode);                                                             
                                                        }
            ;
AN          :   AN_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "AN ";
                                                            Node* anNode = new Node(AND, "");
                                                            list.push_back(anNode);                                                                  
                                                        }
            ;
HR          :   HR_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "HR ";     
                                                            Node* hrNode = new Node(HR, "");
                                                            list.push_back(hrNode);                                                             
                                                        }
            ;
VR          :   VR_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "VR ";     
                                                            Node* vrNode = new Node(VR, "");
                                                            list.push_back(vrNode);                                                             
                                                        }
            ;
HY          :   HY_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "HY ";     
                                                            Node* hyNode = new Node(HY, "");
                                                            list.push_back(hyNode);                                                             
                                                        }
            ;
NOTEQUAL    :   NOTEQUAL_T                              {
                                                            spaces = 0;
                                                            if(!silent)cout<< "NOTEQUAL ";
                                                            Node* comparisonNode = new Node(COMPARISON, $1);
                                                            list.push_back(comparisonNode);                                                                  
                                                        }
            ;
EQUAL       :   EQUAL_T                                 {
                                                            spaces = 0;
                                                            if(!silent)cout<< "EQUAL ";      
                                                            Node* comparisonNode = new Node(COMPARISON, $1);
                                                            list.push_back(comparisonNode);                                                               
                                                        }
            ;
GTHAN       :   GTHAN_T                                 {
                                                            spaces = 0;
                                                            if(!silent)cout<< "GTHAN ";  
                                                            Node* comparisonNode = new Node(COMPARISON, $1);
                                                            list.push_back(comparisonNode);                                                                   
                                                        }
            ;
LTHAN       :   LTHAN_T                                 {
                                                            spaces = 0;
                                                            if(!silent)cout<< "LTHAN ";  
                                                            Node* comparisonNode = new Node(COMPARISON, $1);
                                                            list.push_back(comparisonNode);                                                                   
                                                        }
            ;
GTHANE      :   GTHANE_T                                {
                                                            spaces = 0;
                                                            if(!silent)cout<< "GTHANE ";  
                                                            Node* comparisonNode = new Node(COMPARISON, $1);
                                                            list.push_back(comparisonNode);                                                                   
                                                        }
            ;
LTHANE      :   LTHANE_T                                {
                                                            spaces = 0;
                                                            if(!silent)cout<< "LTHANE ";  
                                                            Node* comparisonNode = new Node(COMPARISON, $1);
                                                            list.push_back(comparisonNode);                                                                   
                                                        }
            ;
OF         :   OF_T                                     {
                                                            spaces = 0;
                                                            if(!silent)cout<< "OF ";  
                                                            Node* ofNode = new Node(OF, "");
                                                            list.push_back(ofNode);                                                                 
                                                        }  
            ;
UPPERCASE   :   UPPERCASE_T                             {
                                                            spaces = 0;
                                                            if(!silent)cout<< "UPPERCASE ";  
                                                            Node* uppercaseNode = new Node(CONDITION, $1);
                                                            list.push_back(uppercaseNode);                                                                 
                                                        }
            ;
LENGTH      :   LENGTH_T                                {
                                                            spaces = 0;
                                                            if(!silent)cout<< "LENGTH ";             
                                                            Node* lengthNode = new Node(CONDITION, $1);
                                                            list.push_back(lengthNode);                                                                   
                                                        }
            ;
AR          :   AR_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "AR ";    
                                                            Node* arNode = new Node(AREA, "");
                                                            list.push_back(arNode);                                                                            
                                                        }
            ;
BX          :   BX_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "BX "; 
                                                            Node* boxNode = new Node(BOX, "");
                                                            list.push_back(boxNode);                                                                
                                                        }
            ;
SP          :   SP_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "SP "; 
                                                            Node* spNode = new Node(SP, "");
                                                            list.push_back(spNode);                                                               
                                                        }
            ;
SE          :   SE_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "SE ";     
                                                            Node* seNode = new Node(SE, "");
                                                            list.push_back(seNode);                                                           
                                                        }
            ;
US          :   US_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "US ";     
                                                            Node* usNode = new Node(US, "");
                                                            list.push_back(usNode);                                                           
                                                        }
            ;
TM          :   TM_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "TM ";    
                                                            Node* tmNode = new Node(TM, "");
                                                            list.push_back(tmNode);                                                            
                                                        }
            ;
BM          :   BM_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "BM ";             
                                                            Node* bmNode = new Node(BM, "");
                                                            list.push_back(bmNode);                                                   
                                                        }
            ;
PM          :   PM_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "PM ";   
                                                            Node* pmNode = new Node(PM, "");
                                                            list.push_back(pmNode);                                                              
                                                        }
            ;
WIDTH       :   WIDTH_T                                 {
                                                            spaces = 0;
                                                            if(!silent)cout<< "WIDTH "; 
                                                            Node* widthNode = new Node(WIDTH, $1);
                                                            list.push_back(widthNode);                                                                
                                                        }
            ;
TP          :   TP_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "TP "; 
                                                            Node* tpNode = new Node(TP, "");
                                                            list.push_back(tpNode);                                                                
                                                        }
            ;
TA          :   TA_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "TA ";              
                                                            Node* taNode = new Node(TA, "");
                                                            list.push_back(taNode);                                                   
                                                        }
            ;
ROTATE      :   ROTATE_T                                {
                                                            spaces = 0;
                                                            if(!silent)cout<< "ROTATE ";   
                                                            Node* rotateNode = new Node(ROTATE, "");
                                                            list.push_back(rotateNode);                                                              
                                                        }
            ;
DEPTH       :   DEPTH_T                                 {
                                                            spaces = 0;
                                                            if(!silent)cout<< "DEPTH "; 
                                                            Node* depthNode = new Node(DEPTH, "");
                                                            list.push_back(depthNode);                                                                
                                                        }
            ;
SUBSTR      :   SUBSTR_T                                {
                                                            spaces = 0;
                                                            if(!silent)cout<< "SUBSTR ";     
                                                            Node* substrNode = new Node(SUBSTR, "");
                                                            list.push_back(substrNode);                                                            
                                                        }
            ;
MF          :   MF_T                                    {
                                                            spaces = 0;
                                                            cout<<"Missing functionality! command: "<<$1<<endl;
                                                            exit(1);
                                                        }
            ;
UNKNOWN     :   UNKNOWN_T                               {
                                                            spaces = 0;
                                                            if(!silent)cout<<"*******************************UNKNOWN TOKEN*******************************************"<<endl;
                                                        }
            ;
MG          :   MG_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "MG "; 
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
                                                            spaces = 0;
                                                            if(!silent)cout<<$1<<" ";    
                                                            Node* sizeNode = new Node(SIZE, $1);
                                                            list.push_back(sizeNode);                                                             
                                                        }  
            ;              
STYLE       :   STYLE_T                                 {
                                                            spaces = 0;
                                                            if(!silent)cout<<$1<<" ";  
                                                            Node* styleNode = new Node(FONT, $1);
                                                            list.push_back(styleNode);                                                               
                                                        }
            ;
VAR_UP      :   VAR_UP_T                                {
                                                            spaces = 0;
                                                            if(!silent)cout<< "VAR_UP ";            
                                                            Node* varNode = new Node(VARIABLE, $1);
                                                            list.push_back(varNode);                                                     
                                                        }
            ;
VAR         :   VAR_T                                   {
                                                            spaces = 0;
                                                            if(!silent)cout<< "VAR ";  
                                                            Node* varNode = new Node(VARIABLE, $1);
                                                            list.push_back(varNode);                                                               
                                                        }
            ;
NUM         :   NUM_T                                   {
                                                            spaces = 0;
                                                            if(!silent)cout<<$1<<" ";   
                                                            Node* numNode = new Node(NUMBER, $1);
                                                            list.push_back(numNode);                                                              
                                                        }
            ;
IDENT       :   IDENT_T                                 {
                                                            spaces = 0;
                                                            if(!silent)cout<<$1<<" ";
                                                            if(strcmp($1,":TILTALE")==0){
                                                                Node* varNode = new Node(VARIABLE, $1);
                                                                list.push_back(varNode);
                                                            }else if(strcmp($1,".SP6mm")==0){
                                                                Node* spNode = new Node(SP, "");
                                                                list.push_back(spNode);

                                                                Node* sizeNode = new Node(SIZE, "6mm");
                                                                list.push_back(spNode); 
                                                            }else if(strcmp($1,".Sp2")==0){
                                                                Node* spNode = new Node(SP, "");
                                                                list.push_back(spNode);

                                                                Node* sizeNode = new Node(SIZE, "2mm");
                                                                list.push_back(spNode); 
                                                            }else if(strcmp($1,".SP3MM")==0){
                                                                Node* spNode = new Node(SP, "");
                                                                list.push_back(spNode);

                                                                Node* sizeNode = new Node(SIZE, "3mm");
                                                                list.push_back(spNode); 
                                                            }else{
                                                                Node* stringNode = new Node(STRING, $1);
                                                                list.push_back(stringNode);                                                                
                                                            } 
                                                        }
            ;
LABEL       :   LABEL_T                                 {
                                                            spaces = 0;
                                                            if(!silent)cout<<$1<<" ";  
                                                            Node* labelNode = new Node(LABEL, $1);
                                                            list.push_back(labelNode);                                                               
                                                        } 
            ;   
MATHEX      :   MATHEX_T                                {
                                                            spaces = 0;
                                                            if(!silent)cout<<$1<<" ";       
                                                            Node* mathexNode = new Node(MATHEX, $1);
                                                            list.push_back(mathexNode);                                                          
                                                        }
            ;
NEW         :   NEW_T                                   {
                                                            spaces = 0;
                                                            if(!silent)cout<<"NEW"<<" ";  
                                                            Node* newNode = new Node(NEW, "");
                                                            list.push_back(newNode);                                                               
                                                        } 
            ;   
SET         :   SET_T                                   {
                                                            spaces = 0;
                                                            if(!silent)cout<<"SET"<<" ";       
                                                            Node* setNode = new Node(SET, "");
                                                            list.push_back(setNode);                                                          
                                                        }
            ;
IM          :   IM_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "IM "; 
                                                            Node* imNode = new Node(IM, "");
                                                            list.push_back(imNode);                                                                
                                                        }
            ;
DC          :   DC_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "DC "; 
                                                            Node* dcNode = new Node(DC, "");
                                                            list.push_back(dcNode);                                                                
                                                        }
            ;
SX          :   SX_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "SX "; 
                                                            Node* sxNode = new Node(SX, "");
                                                            list.push_back(sxNode);                                                                
                                                        }
            ;
PL          :   PL_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "PL "; 
                                                            Node* plNode = new Node(PL, "");
                                                            list.push_back(plNode);                                                                
                                                        }
            ;
SD          :   SD_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "SD "; 
                                                            Node* sdNode = new Node(SD, "");
                                                            list.push_back(sdNode);                                                                
                                                        }
            ;
UC          :   UC_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "UC "; 
                                                            Node* ucNode = new Node(UC, "");
                                                            list.push_back(ucNode);                                                                
                                                        }
            ;
VI          :   VI_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "VI "; 
                                                            Node* viNode = new Node(VI, "");
                                                            list.push_back(viNode);                                                                
                                                        }
            ;
RF          :   RF_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "RF "; 
                                                            Node* rfNode = new Node(RF, "");
                                                            list.push_back(rfNode);                                                                
                                                        }
            ;
LI          :   LI_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "LI "; 
                                                            Node* liNode = new Node(LI, "");
                                                            list.push_back(liNode);                                                                
                                                        }
            ;
PN          :   PN_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "PN "; 
                                                            Node* pnNode = new Node(PN, "");
                                                            list.push_back(pnNode);                                                                
                                                        }
            ;
DU          :   DU_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "DU ";  
                                                            Node* duNode = new Node(DU, "");
                                                            list.push_back(duNode);                                                              
                                                        }
            ;
VS          :   VS_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "VS ";  
                                                            Node* vsNode = new Node(VS, "");
                                                            list.push_back(vsNode);                                                              
                                                        }
            ;
PW          :   PW_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "PW ";  
                                                            Node* pwNode = new Node(PW, "");
                                                            list.push_back(pwNode);                                                              
                                                        }
            ;
AF          :   AF_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "AF ";  
                                                            Node* afNode = new Node(AF, "");
                                                            list.push_back(afNode);                                                              
                                                        }
            ;
UD          :   UD_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "UD ";  
                                                            Node* udNode = new Node(UD, "");
                                                            list.push_back(udNode);                                                              
                                                        }
            ;
ON          :   ON_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "ON ";  
                                                            Node* onNode = new Node(ON, "");
                                                            list.push_back(onNode);                                                              
                                                        }
            ;
CC          :   CC_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "CC ";  
                                                            Node* ccNode = new Node(CC, "");
                                                            list.push_back(ccNode);                                                              
                                                        }
            ;
RC          :   RC_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "RC ";  
                                                            Node* rcNode = new Node(RC, "");
                                                            list.push_back(rcNode);                                                              
                                                        }
            ;
NR          :   NR_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "NR ";  
                                                            Node* nrNode = new Node(NR, "");
                                                            list.push_back(nrNode);                                                              
                                                        }
            ;
IT          :   IT_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "IT ";  
                                                            Node* itNode = new Node(IT, "");
                                                            list.push_back(itNode);                                                              
                                                        }
            ;
UN          :   UN_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "UN ";  
                                                            Node* unNode = new Node(UN, "");
                                                            list.push_back(unNode);                                                              
                                                        }
            ;
AM          :   AM_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "AM ";  
                                                            Node* amNode = new Node(AM, "");
                                                            list.push_back(amNode);                                                              
                                                        }
            ;
OV          :   OV_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "OV ";  
                                                            Node* ovNode = new Node(OV, "");
                                                            list.push_back(ovNode);                                                              
                                                        }
            ;
DOTNY       :  DOTNY_T                                  {
                                                            spaces = 0;
                                                            if(!silent)cout<< ".NY ";  
                                                            Node* nyNode = new Node(DOTNY, "");
                                                            list.push_back(nyNode);                                                              
                                                        }
            ;
AT          :   AT_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "AT ";  
                                                            Node* atNode = new Node(AT, "");
                                                            list.push_back(atNode);                                                              
                                                        }
            ;
OG          :   OG_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "OG ";  
                                                            Node* ogNode = new Node(OG, "");
                                                            list.push_back(ogNode);                                                              
                                                        }
            ;
MS          :   MS_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "MS ";  
                                                            Node* msNode = new Node(MS, "");
                                                            list.push_back(msNode);                                                              
                                                        }
            ;
FE          :   FE_T                                    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "FE ";  
                                                            Node* feNode = new Node(FE, "");
                                                            list.push_back(feNode);                                                              
                                                        }
            ;
SPACE       :   SPACE_T                                 {
                                                            spaces++;
                                                            if(spaces==2){
                                                                Node* spaceNode1 = new Node(SPACE, "");
                                                                list.push_back(spaceNode1);
                                                                if(!silent)cout<< "SPACE ";

                                                                Node* spaceNode2 = new Node(SPACE, "");
                                                                list.push_back(spaceNode2);
                                                                if(!silent)cout<< "SPACE ";
                                                            }else if(spaces>2){
                                                                Node* spaceNode = new Node(SPACE, "");
                                                                list.push_back(spaceNode);
                                                                if(!silent)cout<< "SPACE ";
                                                            }
                                                            
                                                        }
            ;
NEW_LINE    :   NEW_LINE_T                              {
                                                            spaces = 0;
                                                            if(!silent)cout<< "NEW LINE "<<std::endl;
                                                            Node* newlineNode = new Node(NEWLINE, "");
                                                            list.push_back(newlineNode);                                                                 
                                                        }
            ;
SEMICOLON   :   SEMICOLON_T                             {
                                                            spaces = 0;
                                                            if(!silent)cout<< "NEW LINE "<<std::endl;
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

int main(int argc, char* argv[]){

    for(int i = 0; i < argc; i++)
    {
        if(strcmp(argv[i], "silent") == 0)
        {
            silent = true;
        }
    }

	list.push_back(&docNode);

	if(!silent)cout<< std::endl << std::endl <<"*******************YYPARSE*********************"<<std::endl;
	
    yyparse();
	
    if(!silent)cout<< endl << endl <<"*******************LIST OF NODES*********************"<<endl;
	if(!silent)printList(list);

    if(!silent)cout<< endl << endl <<"****************START TREE BUILDING*******************"<<endl;
    startTreeBuilding(list);

    if(!silent)cout<< endl << endl <<"****************TREE*******************"<<endl;
    if(!silent)printTree(list[0], 0);

    codegenerator(&docNode);

    cout<<"Template generated successfully!"<<endl<<endl;


}