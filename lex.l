%{
// \-                      { strcpy(yylval.tokens, yytext); printf("NEG %s\n", yytext); return NEG_T;}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"

%}

%option yylineno

%%


".br"|".BR"                                          { strcpy(yylval.tokens, yytext); return BR_T;}
".NV"                                           { strcpy(yylval.tokens, yytext); return NV_T;}
"PAGE"                                          { strcpy(yylval.tokens, yytext); return PAGE_T;}
":NY."                                          { strcpy(yylval.tokens, yytext); return NY_T;}
":ENY."                                         { strcpy(yylval.tokens, yytext); return ENY_T;}
\.\*.*                                          { strcpy(yylval.tokens, yytext); return COMMENT_T;}
".ti"|".TI"                                           { strcpy(yylval.tokens, yytext); return TI_T;}
".in"|".IN"                                           { strcpy(yylval.tokens, yytext); return IN_T;}
".ir"|".IR"                                           { strcpy(yylval.tokens, yytext); return IR_T;}
".da"|".DA"                                           { strcpy(yylval.tokens, yytext); return DA_T;}
".fo"|".FO"                                           { strcpy(yylval.tokens, yytext); return FO_T;}
"on"|"ON"                                            { strcpy(yylval.tokens, yytext); return ON_T;}
".go"|".GO"                                           { strcpy(yylval.tokens, yytext); return GOTO_T;}
".ll"|".LL"                                           { strcpy(yylval.tokens, yytext); return LL_T;}
".rh"|".RH"                                           { strcpy(yylval.tokens, yytext); return RH_T;}
".ct"|".CT"                                           { strcpy(yylval.tokens, yytext); return CT_T;}
".pa"|".PA"                                           { strcpy(yylval.tokens, yytext); return PA_T;}
".dr"|".DR"                                           { strcpy(yylval.tokens, yytext); return DR_T;}
"weight"|"WEIGHT"                                        { strcpy(yylval.tokens, yytext); return WEIGHT_T;}
".kp"|".KP"                                           { strcpy(yylval.tokens, yytext); return KP_T;}
"execute"                                       { strcpy(yylval.tokens, yytext); return EXECUTE_T;}
\.[Ii][Ff]               	                        { strcpy(yylval.tokens, yytext); return IF_T;}
\.[Rr][Ii]                                          { strcpy(yylval.tokens, yytext); return RI_T;}
\.[Oo][Ii]                                          { strcpy(yylval.tokens, yytext); return OI_T;}
\.[Cc][Bb]                                          { strcpy(yylval.tokens, yytext); return CB_T;}
\.[Ss][Cc]                                          { strcpy(yylval.tokens, yytext); return SC_T;}
\.[Mm][Cc]                                          { strcpy(yylval.tokens, yytext); return MC_T;}
\.[Qq][Uu]                                          { strcpy(yylval.tokens, yytext); return QU_T;}
\.[Hh][Ww]                                          { strcpy(yylval.tokens, yytext); return HW_T;}
\.[Ii][Ll]                                          { strcpy(yylval.tokens, yytext); return IL_T;}
\.[Oo][Cc]                                          { strcpy(yylval.tokens, yytext); return OC_T;}
\.[Bb][Cc]                                          { strcpy(yylval.tokens, yytext); return BC_T;}
\.[Ii][Ss]                                          { strcpy(yylval.tokens, yytext); return IS_T;}
\.[Uu][Pp]                                          { strcpy(yylval.tokens, yytext); return UP_T;}
\.[Ll][Ss]                                          { strcpy(yylval.tokens, yytext); return LS_T;}
\.[Tt][Uu]                                          { strcpy(yylval.tokens, yytext); return TU_T;}
".el"|".EL"               	                        { strcpy(yylval.tokens, yytext); return EL_T;}
".th"|".TH"               	                        { strcpy(yylval.tokens, yytext); return TH_T;}
".or"|".OR"               	                        { strcpy(yylval.tokens, yytext); return OR_T;}
".cd"|".CD"               	                        { strcpy(yylval.tokens, yytext); return CD_T;}
".td"|".TD"               	                        { strcpy(yylval.tokens, yytext); return TD_T;}
".su"|".SU"               	                        { strcpy(yylval.tokens, yytext); return SU_T;}
".dm"|".DM"               	                        { strcpy(yylval.tokens, yytext); return DM_T;}
".gs"|".GS"               	                        { strcpy(yylval.tokens, yytext); return GS_T;}
".tb"|".TB"               	                        { strcpy(yylval.tokens, yytext); return TB_T;}
".sk"|".SK"               	                        { strcpy(yylval.tokens, yytext); return SK_T;}
".ce"|".CE"               	                        { strcpy(yylval.tokens, yytext); return CE_T;}
".cl"|".CL"               	                        { strcpy(yylval.tokens, yytext); return CL_T;}
".an"|".AN"               	                        { strcpy(yylval.tokens, yytext); return AN_T;}
".of"|".OF"               	                        { strcpy(yylval.tokens, yytext); return OF_T;}
".hr"|".HR"               	                        { strcpy(yylval.tokens, yytext); return HR_T;}
".vr"|".VR"               	                        { strcpy(yylval.tokens, yytext); return VR_T;}
".hy"|".HY"               	                        { strcpy(yylval.tokens, yytext); return HY_T;}
"ne"|"<>"           			                        { strcpy(yylval.tokens, yytext); return NOTEQUAL_T;}
"="|"eq"|"EQ"           		                        { strcpy(yylval.tokens, yytext); return EQUAL_T;}
">"|"gt"|"GT"          		                        { strcpy(yylval.tokens, yytext); return GTHAN_T;}
"<"|"lt"|"LT"           		                        { strcpy(yylval.tokens, yytext); return LTHAN_T;}
">="|"ge"|"GE"          		                        { strcpy(yylval.tokens, yytext); return GTHANE_T;}
"<="|"le"|"LE"          		                        { strcpy(yylval.tokens, yytext); return LTHANE_T;}
"off"|"OFF"                                           { strcpy(yylval.tokens, yytext); return OFF_T;}
"&U'"|"&u'"|"X&U'"|"x&u'"|"x&U'"|"X&u'"|".&U'"         { strcpy(yylval.tokens, yytext); return UPPERCASE_T;}
"&L'"|"&l'"|"X&L'"|"x&l'"|"x&L'"|"X&l'"|".&L'"|"L'"         { strcpy(yylval.tokens, yytext); return LENGTH_T;}
".ar"|".AR"                                           { strcpy(yylval.tokens, yytext); return AR_T;}
".bx"|".BX"                                           { strcpy(yylval.tokens, yytext); return BX_T;}
".sp"|".SP"                                           { strcpy(yylval.tokens, yytext); return SP_T;}
".se"|".SE"					                        { strcpy(yylval.tokens, yytext); return SE_T;}
".us"|".US"                                           { strcpy(yylval.tokens, yytext); return US_T;}
".tm"|".TM"                                           { strcpy(yylval.tokens, yytext); return TM_T;}
".bm"|".BM"                                           { strcpy(yylval.tokens, yytext); return BM_T;}
".pm"|".PM"                                           { strcpy(yylval.tokens, yytext); return PM_T;}
"width"|"WIDTH"|"Width"|"cwidths"|"widt"               { strcpy(yylval.tokens, yytext); return WIDTH_T;}
".tp"|".TP"                                           { strcpy(yylval.tokens, yytext); return TP_T;}
".ta"|".TA"                                           { strcpy(yylval.tokens, yytext); return TA_T;}
"rotate"                                        { strcpy(yylval.tokens, yytext); return ROTATE_T;}
"depth"                	                        { strcpy(yylval.tokens, yytext); return DEPTH_T;}
"substr"               	                        { strcpy(yylval.tokens, yytext); return SUBSTR_T;}
\.[A-Za-z]{2}                                   { strcpy(yylval.tokens, yytext); return MF_T;}
"&&??#"                                         { strcpy(yylval.tokens, yytext); return UNKNOWN_T;}
\.mg[\/A-Za-z\:\- ØÆÅéæøå,\.\\¤0-9\*\>\<\=\%\(\)]+ || \.mg[\/A-Za-z\]         { strcpy(yylval.tokens, yytext); return MG_T;}
\+*\-*([0-9]+)\.([0-9]+)(mm|cm|MM|CM|m)                             { strcpy(yylval.tokens, yytext); return SIZE_T;}
\+*\-*([0-9]+)(mm|cm|MM|CM|m)                             { strcpy(yylval.tokens, yytext); return SIZE_T;}
\+*\-*([0-9]+)\.(mm|cm|MM|CM|m)                             { strcpy(yylval.tokens, yytext); return SIZE_T;}
\+*\-*([0-9]+)\,([0-9]+)(mm|cm|MM|CM|m)               { strcpy(yylval.tokens, yytext); return SIZE_T;}
"new"|"NEW"                                     { strcpy(yylval.tokens, yytext); return NEW_T;}
"set"|"SET"                                     { strcpy(yylval.tokens, yytext); return SET_T;}
\n                                              { strcpy(yylval.tokens, yytext); return NEW_LINE_T; }
\:([A-Z]+)([0-9]*)\.                            { strcpy(yylval.tokens, yytext); return STYLE_T;}
\'\%.*\'                                        { strcpy(yylval.tokens, yytext); return VAR_UP_T;}
\&[A-Za-z\-\.ØÆÅ0-9]+                           { strcpy(yylval.tokens, yytext); return VAR_T;}
X\&[A-Za-z\-\.ØÆÅ0-9]+                          { strcpy(yylval.tokens, yytext); return VAR_T;}
x\&[A-Za-z\-\.ØÆÅ0-9]+                          { strcpy(yylval.tokens, yytext); return VAR_T;}
\.\&[A-Za-z\-\.ØÆÅ0-9]+                          { strcpy(yylval.tokens, yytext); return VAR_T;}
\+*\-*[0-9]+                                    { strcpy(yylval.tokens, yytext); return NUM_T;}
\+*\-*[0-9]+\.[0-9]+                            { strcpy(yylval.tokens, yytext); return NUM_T;}
\+*\-*[0-9]+\,[0-9]+                            { strcpy(yylval.tokens, yytext); return NUM_T;}
\.+                                             { strcpy(yylval.tokens, yytext); return IDENT_T;}
\.\.\.[A-Za-z\-ØÆÅæøå¤0-9.]+                    { strcpy(yylval.tokens, yytext); return LABEL_T;}
"-"                                             { strcpy(yylval.tokens, yytext); return MATHEX_T;}
[A-Za-z\'\-ØÆÅæøå,\.\\¤0-9\*\/\_\^\(\)\:\%\<\>\[\]]+            { strcpy(yylval.tokens, yytext); return IDENT_T;}
[\+\-\/\*]                                      { strcpy(yylval.tokens, yytext); return MATHEX_T;}
\'\ \'                                          { strcpy(yylval.tokens, yytext); return IDENT_T;}                  
[Xx]\+|[Xx]\-                                   { strcpy(yylval.tokens, yytext); return IDENT_T;}
[ \t]                   ;
%%


int yywrap(void){
    return 1;
}


    
