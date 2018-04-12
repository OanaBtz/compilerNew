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
    AM_T = 258,
    SEMICOLON_T = 259,
    SPACE_T = 260,
    MS_T = 261,
    FE_T = 262,
    OG_T = 263,
    PW_T = 264,
    SUBSTR_T = 265,
    DU_T = 266,
    VS_T = 267,
    IM_T = 268,
    DC_T = 269,
    SX_T = 270,
    PL_T = 271,
    SD_T = 272,
    UC_T = 273,
    VI_T = 274,
    RF_T = 275,
    LI_T = 276,
    PN_T = 277,
    NEW_T = 278,
    SET_T = 279,
    UNKNOWN_T = 280,
    IL_T = 281,
    TA_T = 282,
    MF_T = 283,
    LS_T = 284,
    TU_T = 285,
    QU_T = 286,
    HW_T = 287,
    BC_T = 288,
    TD_T = 289,
    CB_T = 290,
    AF_T = 291,
    UD_T = 292,
    ON_T = 293,
    IN_T = 294,
    CC_T = 295,
    RC_T = 296,
    NR_T = 297,
    IT_T = 298,
    UN_T = 299,
    OV_T = 300,
    DOTNY_T = 301,
    AT_T = 302,
    SC_T = 303,
    MC_T = 304,
    UP_T = 305,
    IS_T = 306,
    OC_T = 307,
    OI_T = 308,
    RI_T = 309,
    NOTEQUAL_T = 310,
    OF_T = 311,
    CL_T = 312,
    CD_T = 313,
    TM_T = 314,
    DEPTH_T = 315,
    HY_T = 316,
    HR_T = 317,
    MG_T = 318,
    DR_T = 319,
    WEIGHT_T = 320,
    UPPERCASE_T = 321,
    LENGTH_T = 322,
    PA_T = 323,
    IR_T = 324,
    IF_T = 325,
    EL_T = 326,
    TH_T = 327,
    OR_T = 328,
    AN_T = 329,
    CT_T = 330,
    EQUAL_T = 331,
    GTHANE_T = 332,
    LTHANE_T = 333,
    GTHAN_T = 334,
    LTHAN_T = 335,
    CANCEL_T = 336,
    RH_T = 337,
    KP_T = 338,
    LL_T = 339,
    GOTO_T = 340,
    EXECUTE_T = 341,
    LABEL_T = 342,
    SE_T = 343,
    PM_T = 344,
    BR_T = 345,
    NV_T = 346,
    NY_T = 347,
    PAGE_T = 348,
    ENY_T = 349,
    COMMENT_T = 350,
    TI_T = 351,
    DA_T = 352,
    FO_T = 353,
    OFF_T = 354,
    AR_T = 355,
    BX_T = 356,
    SP_T = 357,
    US_T = 358,
    SIZE_T = 359,
    STYLE_T = 360,
    IDENT_T = 361,
    VAR_UP_T = 362,
    VAR_T = 363,
    NUM_T = 364,
    WIDTH_T = 365,
    TP_T = 366,
    TAB_T = 367,
    ROTATE_T = 368,
    NEW_LINE_T = 369,
    BM_T = 370,
    SU_T = 371,
    DM_T = 372,
    GS_T = 373,
    SK_T = 374,
    CE_T = 375,
    TB_T = 376,
    MATHEX_T = 377,
    VR_T = 378
  };
#endif
/* Tokens.  */
#define AM_T 258
#define SEMICOLON_T 259
#define SPACE_T 260
#define MS_T 261
#define FE_T 262
#define OG_T 263
#define PW_T 264
#define SUBSTR_T 265
#define DU_T 266
#define VS_T 267
#define IM_T 268
#define DC_T 269
#define SX_T 270
#define PL_T 271
#define SD_T 272
#define UC_T 273
#define VI_T 274
#define RF_T 275
#define LI_T 276
#define PN_T 277
#define NEW_T 278
#define SET_T 279
#define UNKNOWN_T 280
#define IL_T 281
#define TA_T 282
#define MF_T 283
#define LS_T 284
#define TU_T 285
#define QU_T 286
#define HW_T 287
#define BC_T 288
#define TD_T 289
#define CB_T 290
#define AF_T 291
#define UD_T 292
#define ON_T 293
#define IN_T 294
#define CC_T 295
#define RC_T 296
#define NR_T 297
#define IT_T 298
#define UN_T 299
#define OV_T 300
#define DOTNY_T 301
#define AT_T 302
#define SC_T 303
#define MC_T 304
#define UP_T 305
#define IS_T 306
#define OC_T 307
#define OI_T 308
#define RI_T 309
#define NOTEQUAL_T 310
#define OF_T 311
#define CL_T 312
#define CD_T 313
#define TM_T 314
#define DEPTH_T 315
#define HY_T 316
#define HR_T 317
#define MG_T 318
#define DR_T 319
#define WEIGHT_T 320
#define UPPERCASE_T 321
#define LENGTH_T 322
#define PA_T 323
#define IR_T 324
#define IF_T 325
#define EL_T 326
#define TH_T 327
#define OR_T 328
#define AN_T 329
#define CT_T 330
#define EQUAL_T 331
#define GTHANE_T 332
#define LTHANE_T 333
#define GTHAN_T 334
#define LTHAN_T 335
#define CANCEL_T 336
#define RH_T 337
#define KP_T 338
#define LL_T 339
#define GOTO_T 340
#define EXECUTE_T 341
#define LABEL_T 342
#define SE_T 343
#define PM_T 344
#define BR_T 345
#define NV_T 346
#define NY_T 347
#define PAGE_T 348
#define ENY_T 349
#define COMMENT_T 350
#define TI_T 351
#define DA_T 352
#define FO_T 353
#define OFF_T 354
#define AR_T 355
#define BX_T 356
#define SP_T 357
#define US_T 358
#define SIZE_T 359
#define STYLE_T 360
#define IDENT_T 361
#define VAR_UP_T 362
#define VAR_T 363
#define NUM_T 364
#define WIDTH_T 365
#define TP_T 366
#define TAB_T 367
#define ROTATE_T 368
#define NEW_LINE_T 369
#define BM_T 370
#define SU_T 371
#define DM_T 372
#define GS_T 373
#define SK_T 374
#define CE_T 375
#define TB_T 376
#define MATHEX_T 377
#define VR_T 378

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 26 "compiler.y" /* yacc.c:1909  */

	char tokens[1000];

#line 304 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
