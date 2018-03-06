/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SUBSTR_T = 258,
    UNKNOWN_T = 259,
    IL_T = 260,
    TA_T = 261,
    MF_T = 262,
    LS_T = 263,
    TU_T = 264,
    QU_T = 265,
    IE_T = 266,
    HW_T = 267,
    BC_T = 268,
    TD_T = 269,
    CB_T = 270,
    SC_T = 271,
    MC_T = 272,
    UP_T = 273,
    IS_T = 274,
    OC_T = 275,
    OI_T = 276,
    RI_T = 277,
    NOTEQUAL_T = 278,
    OF_T = 279,
    CL_T = 280,
    CD_T = 281,
    TM_T = 282,
    DEPTH_T = 283,
    HY_T = 284,
    HR_T = 285,
    MG_T = 286,
    DR_T = 287,
    WEIGHT_T = 288,
    UPPERCASE_T = 289,
    LENGTH_T = 290,
    IN_T = 291,
    PA_T = 292,
    NS_T = 293,
    IR_T = 294,
    IF_T = 295,
    EL_T = 296,
    TH_T = 297,
    OR_T = 298,
    AN_T = 299,
    CT_T = 300,
    EQUAL_T = 301,
    GTHANE_T = 302,
    LTHANE_T = 303,
    GTHAN_T = 304,
    LTHAN_T = 305,
    CANCEL_T = 306,
    RH_T = 307,
    KP_T = 308,
    LL_T = 309,
    GOTO_T = 310,
    EXECUTE_T = 311,
    LABEL_T = 312,
    SE_T = 313,
    PM_T = 314,
    BR_T = 315,
    NV_T = 316,
    NY_T = 317,
    PAGE_T = 318,
    ENY_T = 319,
    COMMENT_T = 320,
    TI_T = 321,
    DA_T = 322,
    FO_T = 323,
    ON_T = 324,
    OFF_T = 325,
    AR_T = 326,
    BX_T = 327,
    SP_T = 328,
    US_T = 329,
    SIZE_T = 330,
    STYLE_T = 331,
    IDENT_T = 332,
    VAR_UP_T = 333,
    VAR_T = 334,
    DIRECTION_T = 335,
    NUM_T = 336,
    WIDTH_T = 337,
    TP_T = 338,
    TAB_T = 339,
    ROTATE_T = 340,
    NEW_LINE_T = 341,
    BM_T = 342,
    SU_T = 343,
    DM_T = 344,
    GS_T = 345,
    SK_T = 346,
    CE_T = 347,
    TB_T = 348,
    MATHEX_T = 349,
    VR_T = 350
  };
#endif
/* Tokens.  */
#define SUBSTR_T 258
#define UNKNOWN_T 259
#define IL_T 260
#define TA_T 261
#define MF_T 262
#define LS_T 263
#define TU_T 264
#define QU_T 265
#define IE_T 266
#define HW_T 267
#define BC_T 268
#define TD_T 269
#define CB_T 270
#define SC_T 271
#define MC_T 272
#define UP_T 273
#define IS_T 274
#define OC_T 275
#define OI_T 276
#define RI_T 277
#define NOTEQUAL_T 278
#define OF_T 279
#define CL_T 280
#define CD_T 281
#define TM_T 282
#define DEPTH_T 283
#define HY_T 284
#define HR_T 285
#define MG_T 286
#define DR_T 287
#define WEIGHT_T 288
#define UPPERCASE_T 289
#define LENGTH_T 290
#define IN_T 291
#define PA_T 292
#define NS_T 293
#define IR_T 294
#define IF_T 295
#define EL_T 296
#define TH_T 297
#define OR_T 298
#define AN_T 299
#define CT_T 300
#define EQUAL_T 301
#define GTHANE_T 302
#define LTHANE_T 303
#define GTHAN_T 304
#define LTHAN_T 305
#define CANCEL_T 306
#define RH_T 307
#define KP_T 308
#define LL_T 309
#define GOTO_T 310
#define EXECUTE_T 311
#define LABEL_T 312
#define SE_T 313
#define PM_T 314
#define BR_T 315
#define NV_T 316
#define NY_T 317
#define PAGE_T 318
#define ENY_T 319
#define COMMENT_T 320
#define TI_T 321
#define DA_T 322
#define FO_T 323
#define ON_T 324
#define OFF_T 325
#define AR_T 326
#define BX_T 327
#define SP_T 328
#define US_T 329
#define SIZE_T 330
#define STYLE_T 331
#define IDENT_T 332
#define VAR_UP_T 333
#define VAR_T 334
#define DIRECTION_T 335
#define NUM_T 336
#define WIDTH_T 337
#define TP_T 338
#define TAB_T 339
#define ROTATE_T 340
#define NEW_LINE_T 341
#define BM_T 342
#define SU_T 343
#define DM_T 344
#define GS_T 345
#define SK_T 346
#define CE_T 347
#define TB_T 348
#define MATHEX_T 349
#define VR_T 350

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 25 "compiler.y" /* yacc.c:1909  */

	char tokens[1000];

#line 248 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
