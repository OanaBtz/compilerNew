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
    SB_T = 261,
    HM_T = 262,
    MS_T = 263,
    DH_T = 264,
    HS_T = 265,
    FE_T = 266,
    SL_T = 267,
    CS_T = 268,
    OG_T = 269,
    PW_T = 270,
    SUBSTR_T = 271,
    DU_T = 272,
    VS_T = 273,
    IM_T = 274,
    DC_T = 275,
    SX_T = 276,
    PL_T = 277,
    CO_T = 278,
    SD_T = 279,
    UC_T = 280,
    VI_T = 281,
    RF_T = 282,
    DS_T = 283,
    LI_T = 284,
    PN_T = 285,
    NEW_T = 286,
    SET_T = 287,
    UNKNOWN_T = 288,
    IL_T = 289,
    TA_T = 290,
    MF_T = 291,
    LS_T = 292,
    TU_T = 293,
    QU_T = 294,
    IE_T = 295,
    HW_T = 296,
    BC_T = 297,
    TD_T = 298,
    CB_T = 299,
    TR_T = 300,
    AF_T = 301,
    UD_T = 302,
    TL_T = 303,
    SS_T = 304,
    ON_T = 305,
    IN_T = 306,
    CC_T = 307,
    QQ_T = 308,
    RC_T = 309,
    NR_T = 310,
    BF_T = 311,
    IT_T = 312,
    UN_T = 313,
    JU_T = 314,
    ME_T = 315,
    OV_T = 316,
    DOTNY_T = 317,
    AT_T = 318,
    UL_T = 319,
    SC_T = 320,
    MC_T = 321,
    UP_T = 322,
    IS_T = 323,
    OC_T = 324,
    OI_T = 325,
    RI_T = 326,
    NOTEQUAL_T = 327,
    OF_T = 328,
    CL_T = 329,
    CD_T = 330,
    TM_T = 331,
    DEPTH_T = 332,
    HY_T = 333,
    HR_T = 334,
    MG_T = 335,
    DR_T = 336,
    WEIGHT_T = 337,
    UPPERCASE_T = 338,
    LENGTH_T = 339,
    PA_T = 340,
    NS_T = 341,
    IR_T = 342,
    IF_T = 343,
    EL_T = 344,
    TH_T = 345,
    OR_T = 346,
    AN_T = 347,
    CT_T = 348,
    EQUAL_T = 349,
    GTHANE_T = 350,
    LTHANE_T = 351,
    GTHAN_T = 352,
    LTHAN_T = 353,
    CANCEL_T = 354,
    RH_T = 355,
    KP_T = 356,
    LL_T = 357,
    GOTO_T = 358,
    EXECUTE_T = 359,
    LABEL_T = 360,
    SE_T = 361,
    PM_T = 362,
    BR_T = 363,
    NV_T = 364,
    NY_T = 365,
    PAGE_T = 366,
    ENY_T = 367,
    COMMENT_T = 368,
    TI_T = 369,
    DA_T = 370,
    FO_T = 371,
    OFF_T = 372,
    AR_T = 373,
    BX_T = 374,
    SP_T = 375,
    US_T = 376,
    SIZE_T = 377,
    STYLE_T = 378,
    IDENT_T = 379,
    VAR_UP_T = 380,
    VAR_T = 381,
    DIRECTION_T = 382,
    NUM_T = 383,
    WIDTH_T = 384,
    TP_T = 385,
    TAB_T = 386,
    ROTATE_T = 387,
    NEW_LINE_T = 388,
    BM_T = 389,
    SU_T = 390,
    DM_T = 391,
    GS_T = 392,
    SK_T = 393,
    CE_T = 394,
    TB_T = 395,
    MATHEX_T = 396,
    VR_T = 397
  };
#endif
/* Tokens.  */
#define AM_T 258
#define SEMICOLON_T 259
#define SPACE_T 260
#define SB_T 261
#define HM_T 262
#define MS_T 263
#define DH_T 264
#define HS_T 265
#define FE_T 266
#define SL_T 267
#define CS_T 268
#define OG_T 269
#define PW_T 270
#define SUBSTR_T 271
#define DU_T 272
#define VS_T 273
#define IM_T 274
#define DC_T 275
#define SX_T 276
#define PL_T 277
#define CO_T 278
#define SD_T 279
#define UC_T 280
#define VI_T 281
#define RF_T 282
#define DS_T 283
#define LI_T 284
#define PN_T 285
#define NEW_T 286
#define SET_T 287
#define UNKNOWN_T 288
#define IL_T 289
#define TA_T 290
#define MF_T 291
#define LS_T 292
#define TU_T 293
#define QU_T 294
#define IE_T 295
#define HW_T 296
#define BC_T 297
#define TD_T 298
#define CB_T 299
#define TR_T 300
#define AF_T 301
#define UD_T 302
#define TL_T 303
#define SS_T 304
#define ON_T 305
#define IN_T 306
#define CC_T 307
#define QQ_T 308
#define RC_T 309
#define NR_T 310
#define BF_T 311
#define IT_T 312
#define UN_T 313
#define JU_T 314
#define ME_T 315
#define OV_T 316
#define DOTNY_T 317
#define AT_T 318
#define UL_T 319
#define SC_T 320
#define MC_T 321
#define UP_T 322
#define IS_T 323
#define OC_T 324
#define OI_T 325
#define RI_T 326
#define NOTEQUAL_T 327
#define OF_T 328
#define CL_T 329
#define CD_T 330
#define TM_T 331
#define DEPTH_T 332
#define HY_T 333
#define HR_T 334
#define MG_T 335
#define DR_T 336
#define WEIGHT_T 337
#define UPPERCASE_T 338
#define LENGTH_T 339
#define PA_T 340
#define NS_T 341
#define IR_T 342
#define IF_T 343
#define EL_T 344
#define TH_T 345
#define OR_T 346
#define AN_T 347
#define CT_T 348
#define EQUAL_T 349
#define GTHANE_T 350
#define LTHANE_T 351
#define GTHAN_T 352
#define LTHAN_T 353
#define CANCEL_T 354
#define RH_T 355
#define KP_T 356
#define LL_T 357
#define GOTO_T 358
#define EXECUTE_T 359
#define LABEL_T 360
#define SE_T 361
#define PM_T 362
#define BR_T 363
#define NV_T 364
#define NY_T 365
#define PAGE_T 366
#define ENY_T 367
#define COMMENT_T 368
#define TI_T 369
#define DA_T 370
#define FO_T 371
#define OFF_T 372
#define AR_T 373
#define BX_T 374
#define SP_T 375
#define US_T 376
#define SIZE_T 377
#define STYLE_T 378
#define IDENT_T 379
#define VAR_UP_T 380
#define VAR_T 381
#define DIRECTION_T 382
#define NUM_T 383
#define WIDTH_T 384
#define TP_T 385
#define TAB_T 386
#define ROTATE_T 387
#define NEW_LINE_T 388
#define BM_T 389
#define SU_T 390
#define DM_T 391
#define GS_T 392
#define SK_T 393
#define CE_T 394
#define TB_T 395
#define MATHEX_T 396
#define VR_T 397

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 26 "compiler.y" /* yacc.c:1909  */

	char tokens[1000];

#line 342 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
