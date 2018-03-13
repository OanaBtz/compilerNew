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
    SB_T = 259,
    HM_T = 260,
    MS_T = 261,
    DH_T = 262,
    HS_T = 263,
    FE_T = 264,
    SL_T = 265,
    CS_T = 266,
    OG_T = 267,
    PW_T = 268,
    SUBSTR_T = 269,
    DU_T = 270,
    VS_T = 271,
    IM_T = 272,
    DC_T = 273,
    SX_T = 274,
    PL_T = 275,
    CO_T = 276,
    SD_T = 277,
    UC_T = 278,
    VI_T = 279,
    RF_T = 280,
    DS_T = 281,
    LI_T = 282,
    PN_T = 283,
    NEW_T = 284,
    SET_T = 285,
    UNKNOWN_T = 286,
    IL_T = 287,
    TA_T = 288,
    MF_T = 289,
    LS_T = 290,
    TU_T = 291,
    QU_T = 292,
    IE_T = 293,
    HW_T = 294,
    BC_T = 295,
    TD_T = 296,
    CB_T = 297,
    TR_T = 298,
    AF_T = 299,
    UD_T = 300,
    TL_T = 301,
    SS_T = 302,
    ON_T = 303,
    IN_T = 304,
    CC_T = 305,
    QQ_T = 306,
    RC_T = 307,
    NR_T = 308,
    BF_T = 309,
    IT_T = 310,
    UN_T = 311,
    JU_T = 312,
    ME_T = 313,
    OV_T = 314,
    DOTNY_T = 315,
    AT_T = 316,
    UL_T = 317,
    SC_T = 318,
    MC_T = 319,
    UP_T = 320,
    IS_T = 321,
    OC_T = 322,
    OI_T = 323,
    RI_T = 324,
    NOTEQUAL_T = 325,
    OF_T = 326,
    CL_T = 327,
    CD_T = 328,
    TM_T = 329,
    DEPTH_T = 330,
    HY_T = 331,
    HR_T = 332,
    MG_T = 333,
    DR_T = 334,
    WEIGHT_T = 335,
    UPPERCASE_T = 336,
    LENGTH_T = 337,
    PA_T = 338,
    NS_T = 339,
    IR_T = 340,
    IF_T = 341,
    EL_T = 342,
    TH_T = 343,
    OR_T = 344,
    AN_T = 345,
    CT_T = 346,
    EQUAL_T = 347,
    GTHANE_T = 348,
    LTHANE_T = 349,
    GTHAN_T = 350,
    LTHAN_T = 351,
    CANCEL_T = 352,
    RH_T = 353,
    KP_T = 354,
    LL_T = 355,
    GOTO_T = 356,
    EXECUTE_T = 357,
    LABEL_T = 358,
    SE_T = 359,
    PM_T = 360,
    BR_T = 361,
    NV_T = 362,
    NY_T = 363,
    PAGE_T = 364,
    ENY_T = 365,
    COMMENT_T = 366,
    TI_T = 367,
    DA_T = 368,
    FO_T = 369,
    OFF_T = 370,
    AR_T = 371,
    BX_T = 372,
    SP_T = 373,
    US_T = 374,
    SIZE_T = 375,
    STYLE_T = 376,
    IDENT_T = 377,
    VAR_UP_T = 378,
    VAR_T = 379,
    DIRECTION_T = 380,
    NUM_T = 381,
    WIDTH_T = 382,
    TP_T = 383,
    TAB_T = 384,
    ROTATE_T = 385,
    NEW_LINE_T = 386,
    BM_T = 387,
    SU_T = 388,
    DM_T = 389,
    GS_T = 390,
    SK_T = 391,
    CE_T = 392,
    TB_T = 393,
    MATHEX_T = 394,
    VR_T = 395
  };
#endif
/* Tokens.  */
#define AM_T 258
#define SB_T 259
#define HM_T 260
#define MS_T 261
#define DH_T 262
#define HS_T 263
#define FE_T 264
#define SL_T 265
#define CS_T 266
#define OG_T 267
#define PW_T 268
#define SUBSTR_T 269
#define DU_T 270
#define VS_T 271
#define IM_T 272
#define DC_T 273
#define SX_T 274
#define PL_T 275
#define CO_T 276
#define SD_T 277
#define UC_T 278
#define VI_T 279
#define RF_T 280
#define DS_T 281
#define LI_T 282
#define PN_T 283
#define NEW_T 284
#define SET_T 285
#define UNKNOWN_T 286
#define IL_T 287
#define TA_T 288
#define MF_T 289
#define LS_T 290
#define TU_T 291
#define QU_T 292
#define IE_T 293
#define HW_T 294
#define BC_T 295
#define TD_T 296
#define CB_T 297
#define TR_T 298
#define AF_T 299
#define UD_T 300
#define TL_T 301
#define SS_T 302
#define ON_T 303
#define IN_T 304
#define CC_T 305
#define QQ_T 306
#define RC_T 307
#define NR_T 308
#define BF_T 309
#define IT_T 310
#define UN_T 311
#define JU_T 312
#define ME_T 313
#define OV_T 314
#define DOTNY_T 315
#define AT_T 316
#define UL_T 317
#define SC_T 318
#define MC_T 319
#define UP_T 320
#define IS_T 321
#define OC_T 322
#define OI_T 323
#define RI_T 324
#define NOTEQUAL_T 325
#define OF_T 326
#define CL_T 327
#define CD_T 328
#define TM_T 329
#define DEPTH_T 330
#define HY_T 331
#define HR_T 332
#define MG_T 333
#define DR_T 334
#define WEIGHT_T 335
#define UPPERCASE_T 336
#define LENGTH_T 337
#define PA_T 338
#define NS_T 339
#define IR_T 340
#define IF_T 341
#define EL_T 342
#define TH_T 343
#define OR_T 344
#define AN_T 345
#define CT_T 346
#define EQUAL_T 347
#define GTHANE_T 348
#define LTHANE_T 349
#define GTHAN_T 350
#define LTHAN_T 351
#define CANCEL_T 352
#define RH_T 353
#define KP_T 354
#define LL_T 355
#define GOTO_T 356
#define EXECUTE_T 357
#define LABEL_T 358
#define SE_T 359
#define PM_T 360
#define BR_T 361
#define NV_T 362
#define NY_T 363
#define PAGE_T 364
#define ENY_T 365
#define COMMENT_T 366
#define TI_T 367
#define DA_T 368
#define FO_T 369
#define OFF_T 370
#define AR_T 371
#define BX_T 372
#define SP_T 373
#define US_T 374
#define SIZE_T 375
#define STYLE_T 376
#define IDENT_T 377
#define VAR_UP_T 378
#define VAR_T 379
#define DIRECTION_T 380
#define NUM_T 381
#define WIDTH_T 382
#define TP_T 383
#define TAB_T 384
#define ROTATE_T 385
#define NEW_LINE_T 386
#define BM_T 387
#define SU_T 388
#define DM_T 389
#define GS_T 390
#define SK_T 391
#define CE_T 392
#define TB_T 393
#define MATHEX_T 394
#define VR_T 395

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 26 "compiler.y" /* yacc.c:1909  */

	char tokens[1000];

#line 338 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
