/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "compiler.y" /* yacc.c:339  */


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



#line 91 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


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
#line 26 "compiler.y" /* yacc.c:355  */

	char tokens[1000];

#line 416 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 433 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  268
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   400

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  143
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  136
/* YYNRULES -- Number of rules.  */
#define YYNRULES  402
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  404

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   397

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    38,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   306,
     313,   320,   327,   334,   341,   348,   355,   362,   369,   376,
     383,   390,   397,   404,   411,   418,   425,   432,   439,   446,
     453,   460,   467,   474,   481,   488,   495,   502,   509,   516,
     523,   530,   537,   544,   551,   558,   565,   572,   579,   586,
     593,   600,   607,   614,   621,   628,   635,   642,   649,   656,
     663,   670,   677,   684,   691,   698,   705,   712,   719,   726,
     733,   740,   747,   754,   761,   768,   775,   782,   789,   796,
     803,   810,   817,   824,   830,   835,   847,   854,   861,   868,
     875,   882,   894,   901,   908,   915,   922,   929,   936,   943,
     950,   957,   964,   971,   978,   985,   992,   999,  1006,  1013,
    1020,  1027,  1034,  1041,  1048,  1055,  1062,  1069,  1076,  1083,
    1090,  1097,  1104,  1111,  1118,  1125,  1132,  1139,  1146,  1153,
    1160,  1167,  1174,  1181,  1188,  1195,  1202,  1209,  1216,  1223,
    1230,  1248,  1255
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AM_T", "SEMICOLON_T", "SPACE_T", "SB_T",
  "HM_T", "MS_T", "DH_T", "HS_T", "FE_T", "SL_T", "CS_T", "OG_T", "PW_T",
  "SUBSTR_T", "DU_T", "VS_T", "IM_T", "DC_T", "SX_T", "PL_T", "CO_T",
  "SD_T", "UC_T", "VI_T", "RF_T", "DS_T", "LI_T", "PN_T", "NEW_T", "SET_T",
  "UNKNOWN_T", "IL_T", "TA_T", "MF_T", "LS_T", "TU_T", "QU_T", "IE_T",
  "HW_T", "BC_T", "TD_T", "CB_T", "TR_T", "AF_T", "UD_T", "TL_T", "SS_T",
  "ON_T", "IN_T", "CC_T", "QQ_T", "RC_T", "NR_T", "BF_T", "IT_T", "UN_T",
  "JU_T", "ME_T", "OV_T", "DOTNY_T", "AT_T", "UL_T", "SC_T", "MC_T",
  "UP_T", "IS_T", "OC_T", "OI_T", "RI_T", "NOTEQUAL_T", "OF_T", "CL_T",
  "CD_T", "TM_T", "DEPTH_T", "HY_T", "HR_T", "MG_T", "DR_T", "WEIGHT_T",
  "UPPERCASE_T", "LENGTH_T", "PA_T", "NS_T", "IR_T", "IF_T", "EL_T",
  "TH_T", "OR_T", "AN_T", "CT_T", "EQUAL_T", "GTHANE_T", "LTHANE_T",
  "GTHAN_T", "LTHAN_T", "CANCEL_T", "RH_T", "KP_T", "LL_T", "GOTO_T",
  "EXECUTE_T", "LABEL_T", "SE_T", "PM_T", "BR_T", "NV_T", "NY_T", "PAGE_T",
  "ENY_T", "COMMENT_T", "TI_T", "DA_T", "FO_T", "OFF_T", "AR_T", "BX_T",
  "SP_T", "US_T", "SIZE_T", "STYLE_T", "IDENT_T", "VAR_UP_T", "VAR_T",
  "DIRECTION_T", "NUM_T", "WIDTH_T", "TP_T", "TAB_T", "ROTATE_T",
  "NEW_LINE_T", "BM_T", "SU_T", "DM_T", "GS_T", "SK_T", "CE_T", "TB_T",
  "MATHEX_T", "VR_T", "$accept", "TOKEN", "DA", "BR", "NV", "PAGE", "NY",
  "ENY", "COMMENT", "TI", "IN", "IR", "FO", "GOTO", "LL", "RH", "CT", "PA",
  "DR", "WEIGHT", "KP", "EXECUTE", "IF", "RI", "OI", "CB", "SC", "MC",
  "QU", "HW", "IL", "OC", "BC", "IS", "UP", "LS", "TU", "EL", "TH", "OR",
  "CD", "TD", "SU", "DM", "GS", "TB", "SK", "CE", "CL", "AN", "HR", "VR",
  "HY", "NOTEQUAL", "EQUAL", "GTHAN", "LTHAN", "GTHANE", "LTHANE", "OF",
  "UPPERCASE", "LENGTH", "AR", "BX", "SP", "SE", "US", "TM", "BM", "PM",
  "WIDTH", "TP", "TA", "ROTATE", "DEPTH", "SUBSTR", "MF", "UNKNOWN", "MG",
  "SIZE", "STYLE", "VAR_UP", "VAR", "NUM", "IDENT", "LABEL", "MATHEX",
  "NEW", "SET", "IM", "DC", "SX", "PL", "CO", "SD", "UC", "VI", "RF", "DS",
  "LI", "PN", "DU", "VS", "TR", "PW", "AF", "UD", "TL", "SS", "ON", "CC",
  "QQ", "RC", "NR", "BF", "IT", "UN", "AM", "JU", "ME", "OV", "DOTNY",
  "AT", "UL", "OG", "SB", "MS", "DH", "HS", "FE", "SL", "CS", "HM",
  "SPACE", "NEW_LINE", "SEMICOLON", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397
};
# endif

#define YYPACT_NINF -134

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-134)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     140,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,     0,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   384,   402,   400,   392,   399,   393,   394,   395,   396,
     397,   398,   391,   371,   342,   368,   369,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   354,
     355,   344,   297,   339,   343,   302,   303,   295,   296,   299,
     308,   292,   372,   373,   374,   375,   376,   277,   377,   378,
     379,   380,   381,   382,   383,   385,   386,   387,   388,   389,
     390,   293,   294,   301,   300,   298,   291,   290,   320,   326,
     315,   307,   334,   341,   319,   317,   345,   285,   286,   327,
     328,   284,   278,   289,   304,   305,   306,   316,   283,   321,
     324,   325,   322,   323,   282,   287,   281,   280,   288,   352,
     332,   336,   270,   271,   273,   272,   274,   275,   276,   269,
     279,   329,   330,   331,   333,   346,   347,   351,   348,   349,
     350,   337,   338,   340,   401,   335,   309,   310,   311,   313,
     314,   312,   353,   318,     0,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   185,   186,   187,   188,   189,   190,   191,
     219,   220,   184,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   268,   267,     1,   370,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    51,    52,
      53,    54,    55,    56,    57,    85,    86,    50,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   135,   134
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -134,  -134,  -133,  -132,   -94,   -48,   -35,   -17,    -7,    -3,
      46,    51,    92,   105,   123,   133,   137,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,  -134,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   371,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     268,   270,   271,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
     272,    38,    39,    40,    41,   269,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,   273,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,   274,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   275,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   276,   120,   121,
     122,   277,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
     278,    38,    39,    40,    41,   279,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,   280,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,   281,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   282,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   283,   120,   121,
     122,   284,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403
};

static const yytype_uint8 yycheck[] =
{
       0,   134,   134,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
     134,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   134,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   134,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   134,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   134,   128,   129,
     130,   134,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
     134,    41,    42,    43,    44,   134,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   134,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   134,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   134,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   134,   128,   129,
     130,   134,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    41,    42,
      43,    44,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     128,   129,   130,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,     0,    45,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   143,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 269:
#line 306 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "DEFINE AREA ";
                                                            Node* daNode = new Node(AREADEFINITION, "");
                                                            list.push_back(daNode);
                                                        }
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 313 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "BREAK ";
                                                            Node* brNode = new Node(LINEBREAK, "");
                                                            list.push_back(brNode);
                                                        }
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 320 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "NV ";
                                                            Node* nvNode = new Node(NV, "");
                                                            list.push_back(nvNode);
                                                        }
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 327 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "PAGE ";
                                                            Node* pageNode = new Node(PAGE, "");
                                                            list.push_back(pageNode);
                                                        }
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 334 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "NY ";
                                                            Node* nyNode = new Node(NY, "");
                                                            list.push_back(nyNode);
                                                        }
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 341 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "ENY ";
                                                            Node* enyNode = new Node(ENY, "");
                                                            list.push_back(enyNode);
                                                        }
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 348 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "COMMENT "; 
                                                            Node* commentNode = new Node(COMMENT, "");
                                                            list.push_back(commentNode);                                                           
                                                        }
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 355 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "TI ";     
                                                            Node* tiNode = new Node(TI, "");
                                                            list.push_back(tiNode);                                                           
                                                        }
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 362 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "IN ";      
                                                            Node* inNode = new Node(IN, "");
                                                            list.push_back(inNode);                                                          
                                                        }
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 369 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "IR ";  
                                                            Node* irNode = new Node(IR, "");
                                                            list.push_back(irNode);                                                              
                                                        }
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 376 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "FO ";                                                            
                                                            Node* foNode = new Node(FO, "");
                                                            list.push_back(foNode);
                                                        }
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 383 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "GOTO ";      
                                                            Node* goNode = new Node(GO, "");
                                                            list.push_back(goNode);                                                          
                                                        }
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 390 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "LL ";     
                                                            Node* llNode = new Node(LL, "");
                                                            list.push_back(llNode);                                                           
                                                        }
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 397 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "RH ";  
                                                            Node* rhNode = new Node(RH, "");
                                                            list.push_back(rhNode);                                                              
                                                        }
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 404 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "CT ";    
                                                            Node* ctNode = new Node(CT, "");
                                                            list.push_back(ctNode);                                                            
                                                        }
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 411 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "PA ";    
                                                            Node* paNode = new Node(PA, "");
                                                            list.push_back(paNode);                                                            
                                                        }
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 418 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "DR ";   
                                                            Node* drNode = new Node(DR, "");
                                                            list.push_back(drNode);                                                          
                                                        }
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 425 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "WEIGHT ";       
                                                            Node* weightNode = new Node(WEIGHT, (yyvsp[0].tokens));
                                                            list.push_back(weightNode);                                                          
                                                        }
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 432 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "KEEP ";       
                                                            Node* kpNode = new Node(KP, "");
                                                            list.push_back(kpNode);                                                          
                                                        }
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 439 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "EXECUTE ";
                                                            Node* executeNode = new Node(EXECUTE, (yyvsp[0].tokens));
                                                            list.push_back(executeNode);                                                                 
                                                        }
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 446 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "IF ";          
                                                            Node* ifNode = new Node(IF, "");
                                                            list.push_back(ifNode);                                                       
                                                        }
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 453 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "RI ";
                                                            Node* riNode = new Node(RI, "");
                                                            list.push_back(riNode);                                                                 
                                                        }
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 460 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "OI "; 
                                                            Node* oiNode = new Node(OI, "");
                                                            list.push_back(oiNode);                                                                
                                                        }
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 467 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "CB ";     
                                                            Node* cbNode = new Node(CB, "");
                                                            list.push_back(cbNode);                                                            
                                                        }
#line 2160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 474 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "SC ";  
                                                            Node* paNode = new Node(PA, "");
                                                            list.push_back(paNode);                                                               
                                                        }
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 481 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "MC ";   
                                                            Node* mcNode = new Node(MC, "");
                                                            list.push_back(mcNode);                                                              
                                                        }
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 488 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "QU ";     
                                                            Node* quNode = new Node(QU, "");
                                                            list.push_back(quNode);                                                            
                                                        }
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 495 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "HW ";     
                                                            Node* hwNode = new Node(HW, "");
                                                            list.push_back(hwNode);                                                            
                                                        }
#line 2204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 502 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "IL ";     
                                                            Node* ilNode = new Node(IL, "");
                                                            list.push_back(ilNode);                                                            
                                                        }
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 509 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "OC ";   
                                                            Node* ocNode = new Node(OC, "");
                                                            list.push_back(ocNode);                                                              
                                                        }
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 516 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "BC ";
                                                            Node* bcNode = new Node(BC, "");
                                                            list.push_back(bcNode);                                                                 
                                                        }
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 523 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "IS ";     
                                                            Node* isNode = new Node(IS, "");
                                                            list.push_back(isNode);                                                            
                                                        }
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 530 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "UP ";     
                                                            Node* upNode = new Node(UP, "");
                                                            list.push_back(upNode);                                                            
                                                        }
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 537 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "LS ";     
                                                            Node* lsNode = new Node(LS, "");
                                                            list.push_back(lsNode);                                                            
                                                        }
#line 2270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 544 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "TU ";     
                                                            Node* tuNode = new Node(TU, "");
                                                            list.push_back(tuNode);                                                            
                                                        }
#line 2281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 551 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "EL ";     
                                                            Node* elNode = new Node(ELSE, "");
                                                            list.push_back(elNode);                                                            
                                                        }
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 558 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "TH ";     
                                                            Node* thNode = new Node(THEN, "");
                                                            list.push_back(thNode);                                                            
                                                        }
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 565 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "OR ";     
                                                            Node* orNode = new Node(OR, "");
                                                            list.push_back(orNode);                                                            
                                                        }
#line 2314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 572 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "CD ";     
                                                            Node* cdNode = new Node(CD, "");
                                                            list.push_back(cdNode);                                                            
                                                        }
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 579 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "TD ";     
                                                            Node* tdNode = new Node(TD, "");
                                                            list.push_back(tdNode);                                                            
                                                        }
#line 2336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 586 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "SU ";  
                                                            Node* suNode = new Node(SU, "");
                                                            list.push_back(suNode);                                                               
                                                        }
#line 2347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 593 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "DM ";     
                                                            Node* dmNode = new Node(DM, "");
                                                            list.push_back(dmNode);                                                            
                                                        }
#line 2358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 600 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "GS ";
                                                            Node* gsNode = new Node(GS, "");
                                                            list.push_back(gsNode);                                                                 
                                                        }
#line 2369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 607 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "TB ";   
                                                            Node* tbNode = new Node(TB, "");
                                                            list.push_back(tbNode);                                                               
                                                        }
#line 2380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 614 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "SK ";             
                                                            Node* skNode = new Node(SK, "");
                                                            list.push_back(skNode);                                                     
                                                        }
#line 2391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 621 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "CE ";     
                                                            Node* ceNode = new Node(CE, "");
                                                            list.push_back(ceNode);                                                             
                                                        }
#line 2402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 628 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "CL ";     
                                                            Node* clNode = new Node(CL, "");
                                                            list.push_back(clNode);                                                             
                                                        }
#line 2413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 635 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "AN ";
                                                            Node* anNode = new Node(AND, "");
                                                            list.push_back(anNode);                                                                  
                                                        }
#line 2424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 642 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "HR ";     
                                                            Node* hrNode = new Node(HR, "");
                                                            list.push_back(hrNode);                                                             
                                                        }
#line 2435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 649 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "VR ";     
                                                            Node* vrNode = new Node(VR, "");
                                                            list.push_back(vrNode);                                                             
                                                        }
#line 2446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 656 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "HY ";     
                                                            Node* hyNode = new Node(HY, "");
                                                            list.push_back(hyNode);                                                             
                                                        }
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 663 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "NOTEQUAL ";
                                                            Node* comparisonNode = new Node(COMPARISON, (yyvsp[0].tokens));
                                                            list.push_back(comparisonNode);                                                                  
                                                        }
#line 2468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 670 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "EQUAL ";      
                                                            Node* comparisonNode = new Node(COMPARISON, (yyvsp[0].tokens));
                                                            list.push_back(comparisonNode);                                                               
                                                        }
#line 2479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 677 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "GTHAN ";  
                                                            Node* comparisonNode = new Node(COMPARISON, (yyvsp[0].tokens));
                                                            list.push_back(comparisonNode);                                                                   
                                                        }
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 684 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "LTHAN ";  
                                                            Node* comparisonNode = new Node(COMPARISON, (yyvsp[0].tokens));
                                                            list.push_back(comparisonNode);                                                                   
                                                        }
#line 2501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 691 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "GTHANE ";  
                                                            Node* comparisonNode = new Node(COMPARISON, (yyvsp[0].tokens));
                                                            list.push_back(comparisonNode);                                                                   
                                                        }
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 698 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "LTHANE ";  
                                                            Node* comparisonNode = new Node(COMPARISON, (yyvsp[0].tokens));
                                                            list.push_back(comparisonNode);                                                                   
                                                        }
#line 2523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 705 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "OF ";  
                                                            Node* ofNode = new Node(OF, "");
                                                            list.push_back(ofNode);                                                                 
                                                        }
#line 2534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 712 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "UPPERCASE ";  
                                                            Node* uppercaseNode = new Node(CONDITION, (yyvsp[0].tokens));
                                                            list.push_back(uppercaseNode);                                                                 
                                                        }
#line 2545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 719 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "LENGTH ";             
                                                            Node* lengthNode = new Node(CONDITION, (yyvsp[0].tokens));
                                                            list.push_back(lengthNode);                                                                   
                                                        }
#line 2556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 726 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "AR ";    
                                                            Node* arNode = new Node(AREA, "");
                                                            list.push_back(arNode);                                                                            
                                                        }
#line 2567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 733 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "BX "; 
                                                            Node* boxNode = new Node(BOX, "");
                                                            list.push_back(boxNode);                                                                
                                                        }
#line 2578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 740 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "SP "; 
                                                            Node* spNode = new Node(SP, "");
                                                            list.push_back(spNode);                                                               
                                                        }
#line 2589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 747 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "SE ";     
                                                            Node* seNode = new Node(SE, "");
                                                            list.push_back(seNode);                                                           
                                                        }
#line 2600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 754 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "US ";     
                                                            Node* usNode = new Node(US, "");
                                                            list.push_back(usNode);                                                           
                                                        }
#line 2611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 761 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "TM ";    
                                                            Node* tmNode = new Node(TM, "");
                                                            list.push_back(tmNode);                                                            
                                                        }
#line 2622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 768 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "BM ";             
                                                            Node* bmNode = new Node(BM, "");
                                                            list.push_back(bmNode);                                                   
                                                        }
#line 2633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 775 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "PM ";   
                                                            Node* pmNode = new Node(PM, "");
                                                            list.push_back(pmNode);                                                              
                                                        }
#line 2644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 782 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "WIDTH "; 
                                                            Node* widthNode = new Node(WIDTH, (yyvsp[0].tokens));
                                                            list.push_back(widthNode);                                                                
                                                        }
#line 2655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 789 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "TP "; 
                                                            Node* tpNode = new Node(TP, "");
                                                            list.push_back(tpNode);                                                                
                                                        }
#line 2666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 796 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "TA ";              
                                                            Node* taNode = new Node(TA, "");
                                                            list.push_back(taNode);                                                   
                                                        }
#line 2677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 803 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "ROTATE ";   
                                                            Node* rotateNode = new Node(ROTATE, "");
                                                            list.push_back(rotateNode);                                                              
                                                        }
#line 2688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 810 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "DEPTH "; 
                                                            Node* depthNode = new Node(DEPTH, "");
                                                            list.push_back(depthNode);                                                                
                                                        }
#line 2699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 817 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "SUBSTR ";     
                                                            Node* substrNode = new Node(SUBSTR, "");
                                                            list.push_back(substrNode);                                                            
                                                        }
#line 2710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 824 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            cout<<"Missing functionality! command: "<<(yyvsp[0].tokens)<<endl;
                                                            exit(1);
                                                        }
#line 2720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 830 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<<"*******************************UNKNOWN TOKEN*******************************************"<<endl;
                                                        }
#line 2729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 835 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "MG "; 
                                                            Node* mgNode = new Node(MG, "");
															string s = (yyvsp[0].tokens);
															Node* mgTNode = new Node(MG_TYPE, s.substr(4, 1));
															Node* mgStrNode = new Node(STRING, s.substr(6, s.length() - 7));
															list.push_back(mgNode);
															list.push_back(mgTNode);
															list.push_back(mgStrNode);                                                               
                                                        }
#line 2745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 847 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<<(yyvsp[0].tokens)<<" ";    
                                                            Node* sizeNode = new Node(SIZE, (yyvsp[0].tokens));
                                                            list.push_back(sizeNode);                                                             
                                                        }
#line 2756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 854 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<<(yyvsp[0].tokens)<<" ";  
                                                            Node* styleNode = new Node(FONT, (yyvsp[0].tokens));
                                                            list.push_back(styleNode);                                                               
                                                        }
#line 2767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 861 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "VAR_UP ";            
                                                            Node* varNode = new Node(VARIABLE, (yyvsp[0].tokens));
                                                            list.push_back(varNode);                                                     
                                                        }
#line 2778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 868 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "VAR ";  
                                                            Node* varNode = new Node(VARIABLE, (yyvsp[0].tokens));
                                                            list.push_back(varNode);                                                               
                                                        }
#line 2789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 875 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<<(yyvsp[0].tokens)<<" ";   
                                                            Node* numNode = new Node(NUMBER, (yyvsp[0].tokens));
                                                            list.push_back(numNode);                                                              
                                                        }
#line 2800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 882 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<<(yyvsp[0].tokens)<<" ";
                                                            if(strcmp((yyvsp[0].tokens),":TILTALE")==0){
                                                                Node* varNode = new Node(VARIABLE, (yyvsp[0].tokens));
                                                                list.push_back(varNode);
                                                            }else{
                                                                Node* stringNode = new Node(STRING, (yyvsp[0].tokens));
                                                                list.push_back(stringNode);                                                                
                                                            } 
                                                        }
#line 2816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 894 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<<(yyvsp[0].tokens)<<" ";  
                                                            Node* labelNode = new Node(LABEL, (yyvsp[0].tokens));
                                                            list.push_back(labelNode);                                                               
                                                        }
#line 2827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 901 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<<(yyvsp[0].tokens)<<" ";       
                                                            Node* mathexNode = new Node(MATHEX, (yyvsp[0].tokens));
                                                            list.push_back(mathexNode);                                                          
                                                        }
#line 2838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 908 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<<"NEW"<<" ";  
                                                            Node* newNode = new Node(NEW, "");
                                                            list.push_back(newNode);                                                               
                                                        }
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 915 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<<"SET"<<" ";       
                                                            Node* setNode = new Node(SET, "");
                                                            list.push_back(setNode);                                                          
                                                        }
#line 2860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 922 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "IM "; 
                                                            Node* imNode = new Node(IM, "");
                                                            list.push_back(imNode);                                                                
                                                        }
#line 2871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 929 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "DC "; 
                                                            Node* dcNode = new Node(DC, "");
                                                            list.push_back(dcNode);                                                                
                                                        }
#line 2882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 936 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "SX "; 
                                                            Node* sxNode = new Node(SX, "");
                                                            list.push_back(sxNode);                                                                
                                                        }
#line 2893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 943 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "PL "; 
                                                            Node* plNode = new Node(PL, "");
                                                            list.push_back(plNode);                                                                
                                                        }
#line 2904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 950 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "CO "; 
                                                            Node* coNode = new Node(CO, "");
                                                            list.push_back(coNode);                                                                
                                                        }
#line 2915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 957 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "SD "; 
                                                            Node* sdNode = new Node(SD, "");
                                                            list.push_back(sdNode);                                                                
                                                        }
#line 2926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 964 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "UC "; 
                                                            Node* ucNode = new Node(UC, "");
                                                            list.push_back(ucNode);                                                                
                                                        }
#line 2937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 971 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "VI "; 
                                                            Node* viNode = new Node(VI, "");
                                                            list.push_back(viNode);                                                                
                                                        }
#line 2948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 978 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "RF "; 
                                                            Node* rfNode = new Node(RF, "");
                                                            list.push_back(rfNode);                                                                
                                                        }
#line 2959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 985 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "DS "; 
                                                            Node* dsNode = new Node(DS, "");
                                                            list.push_back(dsNode);                                                                
                                                        }
#line 2970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 992 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "LI "; 
                                                            Node* liNode = new Node(LI, "");
                                                            list.push_back(liNode);                                                                
                                                        }
#line 2981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 999 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "PN "; 
                                                            Node* pnNode = new Node(PN, "");
                                                            list.push_back(pnNode);                                                                
                                                        }
#line 2992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 1006 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "DU ";  
                                                            Node* duNode = new Node(DU, "");
                                                            list.push_back(duNode);                                                              
                                                        }
#line 3003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 1013 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "VS ";  
                                                            Node* vsNode = new Node(VS, "");
                                                            list.push_back(vsNode);                                                              
                                                        }
#line 3014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 1020 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "TR ";  
                                                            Node* trNode = new Node(TR, "");
                                                            list.push_back(trNode);                                                              
                                                        }
#line 3025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 1027 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "PW ";  
                                                            Node* pwNode = new Node(PW, "");
                                                            list.push_back(pwNode);                                                              
                                                        }
#line 3036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 1034 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "AF ";  
                                                            Node* afNode = new Node(AF, "");
                                                            list.push_back(afNode);                                                              
                                                        }
#line 3047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 1041 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "UD ";  
                                                            Node* udNode = new Node(UD, "");
                                                            list.push_back(udNode);                                                              
                                                        }
#line 3058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 1048 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "TL ";  
                                                            Node* tlNode = new Node(TL, "");
                                                            list.push_back(tlNode);                                                              
                                                        }
#line 3069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 1055 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "SS ";  
                                                            Node* ssNode = new Node(SS, "");
                                                            list.push_back(ssNode);                                                              
                                                        }
#line 3080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 1062 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "ON ";  
                                                            Node* onNode = new Node(ON, "");
                                                            list.push_back(onNode);                                                              
                                                        }
#line 3091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 1069 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "CC ";  
                                                            Node* ccNode = new Node(CC, "");
                                                            list.push_back(ccNode);                                                              
                                                        }
#line 3102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 1076 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "QQ ";  
                                                            Node* qqNode = new Node(QQ, "");
                                                            list.push_back(qqNode);                                                              
                                                        }
#line 3113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 1083 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "RC ";  
                                                            Node* rcNode = new Node(RC, "");
                                                            list.push_back(rcNode);                                                              
                                                        }
#line 3124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 1090 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "NR ";  
                                                            Node* nrNode = new Node(NR, "");
                                                            list.push_back(nrNode);                                                              
                                                        }
#line 3135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 1097 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "BF ";  
                                                            Node* bfNode = new Node(BF, "");
                                                            list.push_back(bfNode);                                                              
                                                        }
#line 3146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 1104 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "IT ";  
                                                            Node* itNode = new Node(IT, "");
                                                            list.push_back(itNode);                                                              
                                                        }
#line 3157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 1111 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "UN ";  
                                                            Node* unNode = new Node(UN, "");
                                                            list.push_back(unNode);                                                              
                                                        }
#line 3168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 1118 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "AM ";  
                                                            Node* amNode = new Node(AM, "");
                                                            list.push_back(amNode);                                                              
                                                        }
#line 3179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 1125 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "JU ";  
                                                            Node* juNode = new Node(JU, "");
                                                            list.push_back(juNode);                                                              
                                                        }
#line 3190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 1132 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "ME ";  
                                                            Node* meNode = new Node(ME, "");
                                                            list.push_back(meNode);                                                              
                                                        }
#line 3201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 1139 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "OV ";  
                                                            Node* ovNode = new Node(OV, "");
                                                            list.push_back(ovNode);                                                              
                                                        }
#line 3212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 1146 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< ".NY ";  
                                                            Node* nyNode = new Node(DOTNY, "");
                                                            list.push_back(nyNode);                                                              
                                                        }
#line 3223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 1153 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "AT ";  
                                                            Node* atNode = new Node(AT, "");
                                                            list.push_back(atNode);                                                              
                                                        }
#line 3234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 1160 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "UL ";  
                                                            Node* ulNode = new Node(UL, "");
                                                            list.push_back(ulNode);                                                              
                                                        }
#line 3245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 1167 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "OG ";  
                                                            Node* ogNode = new Node(OG, "");
                                                            list.push_back(ogNode);                                                              
                                                        }
#line 3256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 1174 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "SB ";  
                                                            Node* sbNode = new Node(SB, "");
                                                            list.push_back(sbNode);                                                              
                                                        }
#line 3267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 1181 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "MS ";  
                                                            Node* msNode = new Node(MS, "");
                                                            list.push_back(msNode);                                                              
                                                        }
#line 3278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 1188 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "DH ";  
                                                            Node* dhNode = new Node(DH, "");
                                                            list.push_back(dhNode);                                                              
                                                        }
#line 3289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 1195 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "HS ";  
                                                            Node* hsNode = new Node(HS, "");
                                                            list.push_back(hsNode);                                                              
                                                        }
#line 3300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 1202 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "FE ";  
                                                            Node* feNode = new Node(FE, "");
                                                            list.push_back(feNode);                                                              
                                                        }
#line 3311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 1209 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "SL ";  
                                                            Node* slNode = new Node(SL, "");
                                                            list.push_back(slNode);                                                              
                                                        }
#line 3322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 1216 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "CS ";  
                                                            Node* csNode = new Node(CS, "");
                                                            list.push_back(csNode);                                                              
                                                        }
#line 3333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 1223 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "HM ";
                                                            Node* hmNode = new Node(HM, "");
                                                            list.push_back(hmNode);
                                                        }
#line 3344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 1230 "compiler.y" /* yacc.c:1646  */
    {
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
#line 3366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 1248 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "NEW LINE "<<std::endl;
                                                            Node* newlineNode = new Node(NEWLINE, "");
                                                            list.push_back(newlineNode);                                                                 
                                                        }
#line 3377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 1255 "compiler.y" /* yacc.c:1646  */
    {
                                                            spaces = 0;
                                                            if(!silent)cout<< "NEW LINE "<<std::endl;
                                                            Node* newlineNode = new Node(NEWLINE, "");
                                                            list.push_back(newlineNode);                                                                 
                                                        }
#line 3388 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3392 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1264 "compiler.y" /* yacc.c:1906  */


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
