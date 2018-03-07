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
    NEW_T = 259,
    SET_T = 260,
    UNKNOWN_T = 261,
    IL_T = 262,
    TA_T = 263,
    MF_T = 264,
    LS_T = 265,
    TU_T = 266,
    QU_T = 267,
    IE_T = 268,
    HW_T = 269,
    BC_T = 270,
    TD_T = 271,
    CB_T = 272,
    SC_T = 273,
    MC_T = 274,
    UP_T = 275,
    IS_T = 276,
    OC_T = 277,
    OI_T = 278,
    RI_T = 279,
    NOTEQUAL_T = 280,
    OF_T = 281,
    CL_T = 282,
    CD_T = 283,
    TM_T = 284,
    DEPTH_T = 285,
    HY_T = 286,
    HR_T = 287,
    MG_T = 288,
    DR_T = 289,
    WEIGHT_T = 290,
    UPPERCASE_T = 291,
    LENGTH_T = 292,
    IN_T = 293,
    PA_T = 294,
    NS_T = 295,
    IR_T = 296,
    IF_T = 297,
    EL_T = 298,
    TH_T = 299,
    OR_T = 300,
    AN_T = 301,
    CT_T = 302,
    EQUAL_T = 303,
    GTHANE_T = 304,
    LTHANE_T = 305,
    GTHAN_T = 306,
    LTHAN_T = 307,
    CANCEL_T = 308,
    RH_T = 309,
    KP_T = 310,
    LL_T = 311,
    GOTO_T = 312,
    EXECUTE_T = 313,
    LABEL_T = 314,
    SE_T = 315,
    PM_T = 316,
    BR_T = 317,
    NV_T = 318,
    NY_T = 319,
    PAGE_T = 320,
    ENY_T = 321,
    COMMENT_T = 322,
    TI_T = 323,
    DA_T = 324,
    FO_T = 325,
    ON_T = 326,
    OFF_T = 327,
    AR_T = 328,
    BX_T = 329,
    SP_T = 330,
    US_T = 331,
    SIZE_T = 332,
    STYLE_T = 333,
    IDENT_T = 334,
    VAR_UP_T = 335,
    VAR_T = 336,
    DIRECTION_T = 337,
    NUM_T = 338,
    WIDTH_T = 339,
    TP_T = 340,
    TAB_T = 341,
    ROTATE_T = 342,
    NEW_LINE_T = 343,
    BM_T = 344,
    SU_T = 345,
    DM_T = 346,
    GS_T = 347,
    SK_T = 348,
    CE_T = 349,
    TB_T = 350,
    MATHEX_T = 351,
    VR_T = 352
  };
#endif
/* Tokens.  */
#define SUBSTR_T 258
#define NEW_T 259
#define SET_T 260
#define UNKNOWN_T 261
#define IL_T 262
#define TA_T 263
#define MF_T 264
#define LS_T 265
#define TU_T 266
#define QU_T 267
#define IE_T 268
#define HW_T 269
#define BC_T 270
#define TD_T 271
#define CB_T 272
#define SC_T 273
#define MC_T 274
#define UP_T 275
#define IS_T 276
#define OC_T 277
#define OI_T 278
#define RI_T 279
#define NOTEQUAL_T 280
#define OF_T 281
#define CL_T 282
#define CD_T 283
#define TM_T 284
#define DEPTH_T 285
#define HY_T 286
#define HR_T 287
#define MG_T 288
#define DR_T 289
#define WEIGHT_T 290
#define UPPERCASE_T 291
#define LENGTH_T 292
#define IN_T 293
#define PA_T 294
#define NS_T 295
#define IR_T 296
#define IF_T 297
#define EL_T 298
#define TH_T 299
#define OR_T 300
#define AN_T 301
#define CT_T 302
#define EQUAL_T 303
#define GTHANE_T 304
#define LTHANE_T 305
#define GTHAN_T 306
#define LTHAN_T 307
#define CANCEL_T 308
#define RH_T 309
#define KP_T 310
#define LL_T 311
#define GOTO_T 312
#define EXECUTE_T 313
#define LABEL_T 314
#define SE_T 315
#define PM_T 316
#define BR_T 317
#define NV_T 318
#define NY_T 319
#define PAGE_T 320
#define ENY_T 321
#define COMMENT_T 322
#define TI_T 323
#define DA_T 324
#define FO_T 325
#define ON_T 326
#define OFF_T 327
#define AR_T 328
#define BX_T 329
#define SP_T 330
#define US_T 331
#define SIZE_T 332
#define STYLE_T 333
#define IDENT_T 334
#define VAR_UP_T 335
#define VAR_T 336
#define DIRECTION_T 337
#define NUM_T 338
#define WIDTH_T 339
#define TP_T 340
#define TAB_T 341
#define ROTATE_T 342
#define NEW_LINE_T 343
#define BM_T 344
#define SU_T 345
#define DM_T 346
#define GS_T 347
#define SK_T 348
#define CE_T 349
#define TB_T 350
#define MATHEX_T 351
#define VR_T 352

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 24 "compiler.y" /* yacc.c:1909  */

	char tokens[1000];

#line 252 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
