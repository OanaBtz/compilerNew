%{
// \-                      { strcpy(yylval.tokens, yytext); printf("NEG %s\n", yytext); return NEG_T;}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"

%}

%option yylineno

%%

" "                                                     { strcpy(yylval.tokens, yytext); return SPACE_T;}               
\.\*.*                                                  { strcpy(yylval.tokens, yytext); return COMMENT_T;}
\.[Gg][Oo]                                              { strcpy(yylval.tokens, yytext); return GOTO_T;}
\.[Bb][Rr]                                              { strcpy(yylval.tokens, yytext); return BR_T;}
".NV"                                                   { strcpy(yylval.tokens, yytext); return NV_T;}
"PAGE"                                                  { strcpy(yylval.tokens, yytext); return PAGE_T;}
":NY."                                                  { strcpy(yylval.tokens, yytext); return NY_T;}
":ENY."                                                 { strcpy(yylval.tokens, yytext); return ENY_T;}
\.[Ii][Mm]                                              { strcpy(yylval.tokens, yytext); return IM_T;}
\.[Mm][Ss]                                              { strcpy(yylval.tokens, yytext); return MS_T;}
\.[Ss][eE]                                              { strcpy(yylval.tokens, yytext); return SE_T;}
\.[fF][eE]                                              { strcpy(yylval.tokens, yytext); return FE_T;}
\.[dD][cC]                                              { strcpy(yylval.tokens, yytext); return DC_T;}
\.[sS][xX]                                              { strcpy(yylval.tokens, yytext); return SX_T;}
\.[pP][lL]                                              { strcpy(yylval.tokens, yytext); return PL_T;}
\.[Ss][Dd]                                              { strcpy(yylval.tokens, yytext); return SD_T;}
\.[Uu][Cc]                                              { strcpy(yylval.tokens, yytext); return UC_T;}
\.[Vv][Ii]                                              { strcpy(yylval.tokens, yytext); return VI_T;}
\.[Rr][Ff]                                              { strcpy(yylval.tokens, yytext); return RF_T;}
\.[Ll][Ii]                                              { strcpy(yylval.tokens, yytext); return LI_T;}
\.[Pp][Nn]                                              { strcpy(yylval.tokens, yytext); return PN_T;}
\.[Dd][Uu]                                              { strcpy(yylval.tokens, yytext); return DU_T;}
\.[Tt][Ii]                                              { strcpy(yylval.tokens, yytext); return TI_T;}
\.[Vv][sS]                                              { strcpy(yylval.tokens, yytext); return VS_T;}
\.[Ii][Nn]                                              { strcpy(yylval.tokens, yytext); return IN_T;}
\.[Ii][Rr]                                              { strcpy(yylval.tokens, yytext); return IR_T;}
\.[Dd][Aa]                                              { strcpy(yylval.tokens, yytext); return DA_T;}
\.[Ff][Oo]                                              { strcpy(yylval.tokens, yytext); return FO_T;}
\.[Ll][Ll]                                              { strcpy(yylval.tokens, yytext); return LL_T;}
\.[Rr][Hh]                                              { strcpy(yylval.tokens, yytext); return RH_T;}
\.[Cc][Tt]                                              { strcpy(yylval.tokens, yytext); return CT_T;}
\.[pP][aA]                                              { strcpy(yylval.tokens, yytext); return PA_T;}
\.[dD][rR]                                              { strcpy(yylval.tokens, yytext); return DR_T;}
\.[kK][pP]                                              { strcpy(yylval.tokens, yytext); return KP_T;}
\.[Ii][Ff]|".fi"               	                        { strcpy(yylval.tokens, yytext); return IF_T;}
\.[Rr][Ii]                                              { strcpy(yylval.tokens, yytext); return RI_T;}
\.[Oo][Ii]                                              { strcpy(yylval.tokens, yytext); return OI_T;}
\.[Cc][Bb]                                              { strcpy(yylval.tokens, yytext); return CB_T;}
\.[Ss][Cc]                                              { strcpy(yylval.tokens, yytext); return SC_T;}
\.[Mm][Cc]                                              { strcpy(yylval.tokens, yytext); return MC_T;}
\.[Qq][Uu]                                              { strcpy(yylval.tokens, yytext); return QU_T;}
\.[Hh][Ww]                                              { strcpy(yylval.tokens, yytext); return HW_T;}
\.[Ii][Ll]                                              { strcpy(yylval.tokens, yytext); return IL_T;}
\.[Oo][Cc]                                              { strcpy(yylval.tokens, yytext); return OC_T;}
\.[Bb][Cc]                                              { strcpy(yylval.tokens, yytext); return BC_T;}
\.[Ii][Ss]                                              { strcpy(yylval.tokens, yytext); return IS_T;}
\.[Uu][Pp]                                              { strcpy(yylval.tokens, yytext); return UP_T;}
\.[Ll][Ss]                                              { strcpy(yylval.tokens, yytext); return LS_T;}
\.[Tt][Uu]                                              { strcpy(yylval.tokens, yytext); return TU_T;}
\.[pP][wW]                                              { strcpy(yylval.tokens, yytext); return PW_T;}
\.[aA][fF]                                              { strcpy(yylval.tokens, yytext); return AF_T;}
\.[uU][dD]                                              { strcpy(yylval.tokens, yytext); return UD_T;}
\.[oO][nN]                                              { strcpy(yylval.tokens, yytext); return ON_T;}
\.[cC][cC]                                              { strcpy(yylval.tokens, yytext); return CC_T;}
\.[rR][CC]                                              { strcpy(yylval.tokens, yytext); return RC_T;}
\.[Nn][Rr]                                              { strcpy(yylval.tokens, yytext); return NR_T;}
\.[Ii][Tt]                                              { strcpy(yylval.tokens, yytext); return IT_T;}
\.[uU][nN]                                              { strcpy(yylval.tokens, yytext); return UN_T;}
\.[Aa][Mm]                                              { strcpy(yylval.tokens, yytext); return AM_T;}
\.[eE][lL]               	                            { strcpy(yylval.tokens, yytext); return EL_T;}
\.[tT][hH]               	                            { strcpy(yylval.tokens, yytext); return TH_T;}
\.[oO][rR]               	                            { strcpy(yylval.tokens, yytext); return OR_T;}
\.[cC][dD]               	                            { strcpy(yylval.tokens, yytext); return CD_T;}
\.[tT][dD]               	                            { strcpy(yylval.tokens, yytext); return TD_T;}
\.[sS][uU]               	                            { strcpy(yylval.tokens, yytext); return SU_T;}
\.[dD][mM]               	                            { strcpy(yylval.tokens, yytext); return DM_T;}
\.[gG][sS]               	                            { strcpy(yylval.tokens, yytext); return GS_T;}
\.[tT][Bb]               	                            { strcpy(yylval.tokens, yytext); return TB_T;}
\.[Ss][Kk]               	                            { strcpy(yylval.tokens, yytext); return SK_T;}
\.[Cc][Ee]               	                            { strcpy(yylval.tokens, yytext); return CE_T;}
\.[Cc][Ll]               	                            { strcpy(yylval.tokens, yytext); return CL_T;}
\.[Aa][Nn]               	                            { strcpy(yylval.tokens, yytext); return AN_T;}
\.[Oo][Ff]               	                            { strcpy(yylval.tokens, yytext); return OF_T;}
\.[Hh][rR]               	                            { strcpy(yylval.tokens, yytext); return HR_T;}
\.[Vv][Rr]               	                            { strcpy(yylval.tokens, yytext); return VR_T;}
\.[Hh][Yy]               	                            { strcpy(yylval.tokens, yytext); return HY_T;}
\.[oO][vV]                                              { strcpy(yylval.tokens, yytext); return OV_T;}
\.[Nn][Yy]                                              { strcpy(yylval.tokens, yytext); return DOTNY_T;}
\.[Aa][tT]                                              { strcpy(yylval.tokens, yytext); return AT_T;}
\.[oO][Gg]                                              { strcpy(yylval.tokens, yytext); return OG_T;}
"weight"|"WEIGHT"                                       { strcpy(yylval.tokens, yytext); return WEIGHT_T;}
"execute"                                               { strcpy(yylval.tokens, yytext); return EXECUTE_T;}
"ne"|"<>"|".ne"           			                    { strcpy(yylval.tokens, yytext); return NOTEQUAL_T;}
"="|[Ee][qQ]           		                        { strcpy(yylval.tokens, yytext); return EQUAL_T;}
">"|[gG][tT]          		                        { strcpy(yylval.tokens, yytext); return GTHAN_T;}
"<"|[lL][tT]           		                        { strcpy(yylval.tokens, yytext); return LTHAN_T;}
">="|[gG][eE]          		                        { strcpy(yylval.tokens, yytext); return GTHANE_T;}
"<="|[lL][eE]          		                        { strcpy(yylval.tokens, yytext); return LTHANE_T;}
"&U'"|"&u'"|"X&U'"|"x&u'"|"x&U'"|"X&u'"|".&U'"          { strcpy(yylval.tokens, yytext); return UPPERCASE_T;}
"&L'"|"&l'"|"X&L'"|"x&l'"|"x&L'"|"X&l'"|".&L'"|"L'"     { strcpy(yylval.tokens, yytext); return LENGTH_T;}
\.[Aa][Rr]                                              { strcpy(yylval.tokens, yytext); return AR_T;}
\.[bB][xX]                                              { strcpy(yylval.tokens, yytext); return BX_T;}
\.[Ss][Pp]                                              { strcpy(yylval.tokens, yytext); return SP_T;}
\.[uU][sS]                                              { strcpy(yylval.tokens, yytext); return US_T;}
\.[tT][mM]                                              { strcpy(yylval.tokens, yytext); return TM_T;}
\.[bB][mM]                                              { strcpy(yylval.tokens, yytext); return BM_T;}
\.[pP][mM]                                              { strcpy(yylval.tokens, yytext); return PM_T;}
"width"|"WIDTH"|"Width"|"cwidths"|"widt"                { strcpy(yylval.tokens, yytext); return WIDTH_T;}
\.[Tt][pP]                                              { strcpy(yylval.tokens, yytext); return TP_T;}
\.[tT][aA]                                              { strcpy(yylval.tokens, yytext); return TA_T;}
"rotate"                                                { strcpy(yylval.tokens, yytext); return ROTATE_T;}
"depth"|"DEPTH"                	                                { strcpy(yylval.tokens, yytext); return DEPTH_T;}
"substr"               	                                { strcpy(yylval.tokens, yytext); return SUBSTR_T;}
".mg"                                                   { strcpy(yylval.tokens, yytext); return MG_T;}
\.[Mm][Gg][\/A-Za-z\:\- ØÆÅéæøå,\.\\¤0-9\*\>\<\=\%\(\)]+ || \.mg[\/A-Za-z\]        { strcpy(yylval.tokens, yytext); return MG_T;}
\.[A-Za-z]{2}                                           { strcpy(yylval.tokens, yytext); return MF_T;}
"&&??#"                                                 { strcpy(yylval.tokens, yytext); return UNKNOWN_T;}
\+*\-*([0-9]+)\.([0-9]+)(mm|cm|MM|CM|m)                 { strcpy(yylval.tokens, yytext); return SIZE_T;}
\+*\-*([0-9]+)(mm|cm|MM|CM|m)                           { strcpy(yylval.tokens, yytext); return SIZE_T;}
\+*\-*([0-9]+)\.(mm|cm|MM|CM|m)                         { strcpy(yylval.tokens, yytext); return SIZE_T;}
\+*\-*([0-9]+)\,([0-9]+)(mm|cm|MM|CM|m)                 { strcpy(yylval.tokens, yytext); return SIZE_T;}
"new"|"NEW"                                             { strcpy(yylval.tokens, yytext); return NEW_T;}
"set"|"SET"                                             { strcpy(yylval.tokens, yytext); return SET_T;}
\n                                                      { strcpy(yylval.tokens, yytext); return NEW_LINE_T; }
\:([A-Z]+)([0-9]*)\.                                    { strcpy(yylval.tokens, yytext); return STYLE_T;}
\:([A-Z]+)([0-9]*)\.\:([A-Z]+)([0-9]*)\.                { strcpy(yylval.tokens, yytext); return STYLE_T;}
\:([A-Z]+)([0-9]*)                                      { strcpy(yylval.tokens, yytext); return STYLE_T;}
\:([A-Z]+)([0-9]*)\.\:([A-Z]+)([0-9]*)                  { strcpy(yylval.tokens, yytext); return STYLE_T;}
\'\%.*\'                                                { strcpy(yylval.tokens, yytext); return VAR_UP_T;}
\&[A-Za-z\-\.ØÆÅ0-9]+                                   { strcpy(yylval.tokens, yytext); return VAR_T;}
X\&[A-Za-z\-\.ØÆÅ0-9]+                                  { strcpy(yylval.tokens, yytext); return VAR_T;}
x\&[A-Za-z\-\.ØÆÅ0-9]+                                  { strcpy(yylval.tokens, yytext); return VAR_T;}
\.\&[A-Za-z\-\.ØÆÅ0-9]+                                 { strcpy(yylval.tokens, yytext); return VAR_T;}
\+*\-*[0-9]+                                            { strcpy(yylval.tokens, yytext); return NUM_T;}
\+*\-*[0-9]+\.[0-9]+                                    { strcpy(yylval.tokens, yytext); return NUM_T;}
\+*\-*[0-9]+\,[0-9]+                                    { strcpy(yylval.tokens, yytext); return NUM_T;}
\.+                                                     { strcpy(yylval.tokens, yytext); return IDENT_T;}
\.\.\.[A-Za-z\-ØÆÅæøå¤0-9.]+                            { strcpy(yylval.tokens, yytext); return LABEL_T;}
"-"                                                     { strcpy(yylval.tokens, yytext); return MATHEX_T;}
[A-Za-z\'\-ØÆÅæøå,\.\\¤0-9\*\§\/\_\^\(\)\:\%\<\>\[\]]+    { strcpy(yylval.tokens, yytext); return IDENT_T;}
[\+\-\/\*]                                              { strcpy(yylval.tokens, yytext); return MATHEX_T;}
\'\ \'                                                  { strcpy(yylval.tokens, yytext); return IDENT_T;}                  
[Xx]\+|[Xx]\-                                           { strcpy(yylval.tokens, yytext); return IDENT_T;}
";"                                                     { strcpy(yylval.tokens, yytext); return SEMICOLON_T;}
[ \t]                   ;
%%


int yywrap(void){
    return 1;
}


    
