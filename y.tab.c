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

extern int yylex();
void yyerror(char *msg);
std:: vector <Node> list;
Node docNode(DOCUMENT, "");

#include "./parser/printing.cpp"
#include "./parser/treebuilding.cpp"



#line 89 "y.tab.c" /* yacc.c:339  */

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
    NUM_T = 335,
    WIDTH_T = 336,
    TP_T = 337,
    TAB_T = 338,
    ROTATE_T = 339,
    NEW_LINE_T = 340,
    BM_T = 341,
    SU_T = 342,
    DM_T = 343,
    GS_T = 344,
    SK_T = 345,
    CE_T = 346,
    TB_T = 347,
    MATHEX_T = 348,
    VR_T = 349
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
#define NUM_T 335
#define WIDTH_T 336
#define TP_T 337
#define TAB_T 338
#define ROTATE_T 339
#define NEW_LINE_T 340
#define BM_T 341
#define SU_T 342
#define DM_T 343
#define GS_T 344
#define SK_T 345
#define CE_T 346
#define TB_T 347
#define MATHEX_T 348
#define VR_T 349

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 24 "compiler.y" /* yacc.c:355  */

	char tokens[1000];

#line 318 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 335 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  174
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   258

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  88
/* YYNRULES -- Number of rules.  */
#define YYNRULES  259
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  261

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   349

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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    34,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   207,   213,   219,   225,   231,   237,
     243,   249,   255,   261,   267,   273,   279,   285,   291,   297,
     303,   309,   315,   321,   327,   333,   339,   345,   351,   357,
     363,   369,   375,   381,   387,   393,   399,   405,   411,   417,
     423,   429,   435,   441,   447,   453,   459,   465,   471,   477,
     483,   489,   495,   501,   507,   513,   519,   525,   531,   537,
     543,   549,   555,   561,   567,   573,   579,   585,   591,   597,
     603,   609,   615,   621,   627,   633,   639,   645,   651,   655,
     659,   670,   676,   682,   688,   694,   700,   706,   712,   718
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SUBSTR_T", "UNKNOWN_T", "IL_T", "TA_T",
  "MF_T", "LS_T", "TU_T", "QU_T", "IE_T", "HW_T", "BC_T", "TD_T", "CB_T",
  "SC_T", "MC_T", "UP_T", "IS_T", "OC_T", "OI_T", "RI_T", "NOTEQUAL_T",
  "OF_T", "CL_T", "CD_T", "TM_T", "DEPTH_T", "HY_T", "HR_T", "MG_T",
  "DR_T", "WEIGHT_T", "UPPERCASE_T", "LENGTH_T", "IN_T", "PA_T", "NS_T",
  "IR_T", "IF_T", "EL_T", "TH_T", "OR_T", "AN_T", "CT_T", "EQUAL_T",
  "GTHANE_T", "LTHANE_T", "GTHAN_T", "LTHAN_T", "CANCEL_T", "RH_T", "KP_T",
  "LL_T", "GOTO_T", "EXECUTE_T", "LABEL_T", "SE_T", "PM_T", "BR_T", "NV_T",
  "NY_T", "PAGE_T", "ENY_T", "COMMENT_T", "TI_T", "DA_T", "FO_T", "ON_T",
  "OFF_T", "AR_T", "BX_T", "SP_T", "US_T", "SIZE_T", "STYLE_T", "IDENT_T",
  "VAR_UP_T", "VAR_T", "NUM_T", "WIDTH_T", "TP_T", "TAB_T", "ROTATE_T",
  "NEW_LINE_T", "BM_T", "SU_T", "DM_T", "GS_T", "SK_T", "CE_T", "TB_T",
  "MATHEX_T", "VR_T", "$accept", "TOKEN", "DA", "BR", "NV", "PAGE", "NY",
  "ENY", "COMMENT", "TI", "IN", "IR", "FO", "ON", "GOTO", "LL", "RH", "CT",
  "PA", "DR", "WEIGHT", "KP", "EXECUTE", "IF", "RI", "OI", "CB", "SC",
  "MC", "QU", "HW", "IL", "OC", "BC", "IS", "UP", "LS", "TU", "EL", "TH",
  "OR", "CD", "TD", "SU", "DM", "GS", "TB", "SK", "CE", "CL", "AN", "OF",
  "HR", "VR", "HY", "NOTEQUAL", "EQUAL", "GTHAN", "LTHAN", "OFF",
  "UPPERCASE", "LENGTH", "AR", "BX", "SP", "SE", "US", "TM", "BM", "PM",
  "WIDTH", "TP", "TA", "ROTATE", "DEPTH", "SUBSTR", "MF", "UNKNOWN", "MG",
  "SIZE", "STYLE", "VAR_UP", "VAR", "NUM", "IDENT", "LABEL", "MATHEX",
  "NEW_LINE", YY_NULLPTR
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
     345,   346,   347,   348,   349
};
# endif

#define YYPACT_NINF -87

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-87)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      92,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   247,   249,   203,   244,   248,   208,   209,   201,   202,
     205,   214,   198,   199,   200,   207,   206,   204,   197,   196,
     227,   223,   221,   213,   239,   246,   226,   224,   250,   191,
     192,   232,   233,   182,   190,   183,   195,   210,   211,   212,
     222,   189,   228,   229,   230,   188,   193,   187,   186,   194,
     257,   237,   241,   175,   176,   178,   177,   179,   180,   181,
     174,   184,   185,   231,   234,   235,   236,   238,   251,   252,
     256,   253,   254,   255,   242,   243,   245,   259,   240,   215,
     216,   217,   219,   220,   218,   258,   225,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -87,   -87,   -86,   -85,   -76,   -49,   -40,   -39,   -36,    -4,
      16,    43,    52,    53,    56,    88,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     174,   175,   176,     1,     2,     3,     4,     5,     6,     7,
       8,   177,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   178,    35,
      36,    37,    38,    39,    40,    41,    42,   179,   180,    43,
      44,   181,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,   182,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,     1,     2,     3,     4,     5,
       6,     7,     8,   183,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     184,    35,    36,    37,    38,    39,    40,    41,    42,   185,
     186,    43,    44,   187,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,   188,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260
};

static const yytype_uint8 yycheck[] =
{
       0,    87,    87,     3,     4,     5,     6,     7,     8,     9,
      10,    87,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    87,    39,
      40,    41,    42,    43,    44,    45,    46,    87,    87,    49,
      50,    87,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    87,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,     3,     4,     5,     6,     7,
       8,     9,    10,    87,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      87,    39,    40,    41,    42,    43,    44,    45,    46,    87,
      87,    49,    50,    87,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    87,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    39,    40,    41,    42,    43,
      44,    45,    46,    49,    50,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182
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
       2,     2,     2,     2,     2,     2,     2,     2,     1,     1,
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
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
        case 174:
#line 207 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "DEFINE AREA ";
                                                            Node* daNode = new Node(AREADEFINITION, "");
                                                            list.push_back(*daNode);
                                                        }
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 213 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "BREAK ";
                                                            Node* brNode = new Node(LINEBREAK, "");
                                                            list.push_back(*brNode);
                                                        }
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 219 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "NV ";
                                                            Node* nvNode = new Node(NV, "");
                                                            list.push_back(*nvNode);
                                                        }
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 225 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "PAGE ";
                                                            Node* pageNode = new Node(PAGE, "");
                                                            list.push_back(*pageNode);
                                                        }
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 231 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "NY ";
                                                            Node* nyNode = new Node(NY, "");
                                                            list.push_back(*nyNode);
                                                        }
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 237 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "ENY ";
                                                            Node* enyNode = new Node(ENY, "");
                                                            list.push_back(*enyNode);
                                                        }
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 243 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "COMMENT "; 
                                                            Node* commentNode = new Node(COMMENT, "");
                                                            list.push_back(*commentNode);                                                           
                                                        }
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 249 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "TI ";     
                                                            Node* tiNode = new Node(TI, "");
                                                            list.push_back(*tiNode);                                                           
                                                        }
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 255 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "IN ";      
                                                            Node* inNode = new Node(IN, "");
                                                            list.push_back(*inNode);                                                          
                                                        }
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 261 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "IR ";  
                                                            Node* irNode = new Node(IR, "");
                                                            list.push_back(*irNode);                                                              
                                                        }
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 267 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "FO ";                                                            
                                                            Node* foNode = new Node(FO, "");
                                                            list.push_back(*foNode);
                                                        }
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 273 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "ON ";  
                                                            Node* onNode = new Node(ON, "");
                                                            list.push_back(*onNode);                                                              
                                                        }
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 279 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "GOTO ";      
                                                            Node* goNode = new Node(GO, "");
                                                            list.push_back(*goNode);                                                          
                                                        }
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 285 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "LL ";     
                                                            Node* llNode = new Node(LL, "");
                                                            list.push_back(*llNode);                                                           
                                                        }
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 291 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "RH ";  
                                                            Node* rhNode = new Node(RH, "");
                                                            list.push_back(*rhNode);                                                              
                                                        }
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 297 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "CT ";    
                                                            Node* ctNode = new Node(CT, "");
                                                            list.push_back(*ctNode);                                                            
                                                        }
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 303 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "PA ";    
                                                            Node* paNode = new Node(PA, "");
                                                            list.push_back(*paNode);                                                            
                                                        }
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 309 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "DR ";   
                                                            Node* drNode = new Node(DR, "");
                                                            list.push_back(*drNode);                                                          
                                                        }
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 315 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "WEIGHT ";       
                                                            Node* weightNode = new Node(WEIGHT, "");
                                                            list.push_back(*weightNode);                                                          
                                                        }
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 321 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "KEEP ";       
                                                            Node* kpNode = new Node(KP, "");
                                                            list.push_back(*kpNode);                                                          
                                                        }
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 327 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "EXECUTE ";
                                                            Node* executeNode = new Node(EXECUTE, "");
                                                            list.push_back(*executeNode);                                                                 
                                                        }
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 333 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "IF ";          
                                                            Node* ifNode = new Node(IF, "");
                                                            list.push_back(*ifNode);                                                       
                                                        }
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 339 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "RI ";
                                                            Node* riNode = new Node(RI, "");
                                                            list.push_back(*riNode);                                                                 
                                                        }
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 345 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "OI "; 
                                                            Node* oiNode = new Node(OI, "");
                                                            list.push_back(*oiNode);                                                                
                                                        }
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 351 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "CB ";     
                                                            Node* cbNode = new Node(CB, "");
                                                            list.push_back(*cbNode);                                                            
                                                        }
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 357 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "SC ";  
                                                            Node* paNode = new Node(PA, "");
                                                            list.push_back(*paNode);                                                               
                                                        }
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 363 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "MC ";   
                                                            Node* mcNode = new Node(MC, "");
                                                            list.push_back(*mcNode);                                                              
                                                        }
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 369 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "QU ";     
                                                            Node* quNode = new Node(QU, "");
                                                            list.push_back(*quNode);                                                            
                                                        }
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 375 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "HW ";     
                                                            Node* hwNode = new Node(HW, "");
                                                            list.push_back(*hwNode);                                                            
                                                        }
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 381 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "IL ";     
                                                            Node* ilNode = new Node(IL, "");
                                                            list.push_back(*ilNode);                                                            
                                                        }
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 387 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "OC ";   
                                                            Node* ocNode = new Node(OC, "");
                                                            list.push_back(*ocNode);                                                              
                                                        }
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 393 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "BC ";
                                                            Node* bcNode = new Node(BC, "");
                                                            list.push_back(*bcNode);                                                                 
                                                        }
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 399 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "IS ";     
                                                            Node* isNode = new Node(IS, "");
                                                            list.push_back(*isNode);                                                            
                                                        }
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 405 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "UP ";     
                                                            Node* upNode = new Node(UP, "");
                                                            list.push_back(*upNode);                                                            
                                                        }
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 411 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "LS ";     
                                                            Node* lsNode = new Node(LS, "");
                                                            list.push_back(*lsNode);                                                            
                                                        }
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 417 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "TU ";     
                                                            Node* tuNode = new Node(TU, "");
                                                            list.push_back(*tuNode);                                                            
                                                        }
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 423 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "EL ";     
                                                            Node* elNode = new Node(ELSE, "");
                                                            list.push_back(*elNode);                                                            
                                                        }
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 429 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "TH ";     
                                                            Node* thNode = new Node(THEN, "");
                                                            list.push_back(*thNode);                                                            
                                                        }
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 435 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "OR ";     
                                                            Node* orNode = new Node(OR, "");
                                                            list.push_back(*orNode);                                                            
                                                        }
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 441 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "CD ";     
                                                            Node* cdNode = new Node(CD, "");
                                                            list.push_back(*cdNode);                                                            
                                                        }
#line 2051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 447 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "TD ";     
                                                            Node* tdNode = new Node(TD, "");
                                                            list.push_back(*tdNode);                                                            
                                                        }
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 453 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "SU ";  
                                                            Node* suNode = new Node(SU, "");
                                                            list.push_back(*suNode);                                                               
                                                        }
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 459 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "DM ";     
                                                            Node* dmNode = new Node(DM, "");
                                                            list.push_back(*dmNode);                                                            
                                                        }
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 465 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "GS ";
                                                            Node* gsNode = new Node(GS, "");
                                                            list.push_back(*gsNode);                                                                 
                                                        }
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 471 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "TB ";   
                                                            Node* tbNode = new Node(TB, "");
                                                            list.push_back(*tbNode);                                                               
                                                        }
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 477 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "SK ";             
                                                            Node* skNode = new Node(SK, "");
                                                            list.push_back(*skNode);                                                     
                                                        }
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 483 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "CE ";     
                                                            Node* ceNode = new Node(CE, "");
                                                            list.push_back(*ceNode);                                                             
                                                        }
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 489 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "CL ";     
                                                            Node* clNode = new Node(CL, "");
                                                            list.push_back(*clNode);                                                             
                                                        }
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 495 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "AN ";
                                                            Node* anNode = new Node(AND, "");
                                                            list.push_back(*anNode);                                                                  
                                                        }
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 501 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "OF ";
                                                            Node* ofNode = new Node(OF, "");
                                                            list.push_back(*ofNode);                                                                  
                                                        }
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 507 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "HR ";     
                                                            Node* hrNode = new Node(HR, "");
                                                            list.push_back(*hrNode);                                                             
                                                        }
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 513 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "VR ";     
                                                            Node* vrNode = new Node(VR, "");
                                                            list.push_back(*vrNode);                                                             
                                                        }
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 519 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "HY ";     
                                                            Node* hyNode = new Node(HY, "");
                                                            list.push_back(*hyNode);                                                             
                                                        }
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 525 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "NOTEQUAL ";
                                                            Node* comparisonNode = new Node(COMPARISON, "");
                                                            list.push_back(*comparisonNode);                                                                  
                                                        }
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 531 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "EQUAL ";      
                                                            Node* comparisonNode = new Node(COMPARISON, "");
                                                            list.push_back(*comparisonNode);                                                               
                                                        }
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 537 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "GTHAN ";  
                                                            Node* comparisonNode = new Node(COMPARISON, "");
                                                            list.push_back(*comparisonNode);                                                                   
                                                        }
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 543 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "LTHAN ";  
                                                            Node* comparisonNode = new Node(COMPARISON, "");
                                                            list.push_back(*comparisonNode);                                                                   
                                                        }
#line 2221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 549 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "OFF ";  
                                                            Node* offNode = new Node(OFF, "");
                                                            list.push_back(*offNode);                                                                 
                                                        }
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 555 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "UPPERCASE ";  
                                                            Node* uppercaseNode = new Node(CONDITION, (yyvsp[0].tokens));
                                                            list.push_back(*uppercaseNode);                                                                 
                                                        }
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 561 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "LENGTH ";             
                                                            Node* lengthNode = new Node(CONDITION, (yyvsp[0].tokens));
                                                            list.push_back(*lengthNode);                                                                   
                                                        }
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 567 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "AR ";    
                                                            Node* arNode = new Node(AREA, "");
                                                            list.push_back(*arNode);                                                                            
                                                        }
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 573 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "BX "; 
                                                            Node* boxNode = new Node(BOX, "");
                                                            list.push_back(*boxNode);                                                                
                                                        }
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 579 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "SP "; 
                                                            Node* spNode = new Node(SP, "");
                                                            list.push_back(*spNode);                                                               
                                                        }
#line 2281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 585 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "SE ";     
                                                            Node* seNode = new Node(SE, "");
                                                            list.push_back(*seNode);                                                           
                                                        }
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 591 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "US ";     
                                                            Node* usNode = new Node(US, "");
                                                            list.push_back(*usNode);                                                           
                                                        }
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 597 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "TM ";    
                                                            Node* tmNode = new Node(TM, "");
                                                            list.push_back(*tmNode);                                                            
                                                        }
#line 2311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 603 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "BM ";             
                                                            Node* bmNode = new Node(BM, "");
                                                            list.push_back(*bmNode);                                                   
                                                        }
#line 2321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 609 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "PM ";   
                                                            Node* pmNode = new Node(PM, "");
                                                            list.push_back(*pmNode);                                                              
                                                        }
#line 2331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 615 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "WIDTH "; 
                                                            Node* widthNode = new Node(WIDTH, "");
                                                            list.push_back(*widthNode);                                                                
                                                        }
#line 2341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 621 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "TP "; 
                                                            Node* tpNode = new Node(TP, "");
                                                            list.push_back(*tpNode);                                                                
                                                        }
#line 2351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 627 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "TA ";              
                                                            Node* taNode = new Node(TA, "");
                                                            list.push_back(*taNode);                                                   
                                                        }
#line 2361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 633 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "ROTATE ";   
                                                            Node* rotateNode = new Node(ROTATE, "");
                                                            list.push_back(*rotateNode);                                                              
                                                        }
#line 2371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 639 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "DEPTH "; 
                                                            Node* depthNode = new Node(DEPTH, "");
                                                            list.push_back(*depthNode);                                                                
                                                        }
#line 2381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 645 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "SUBSTR ";     
                                                            Node* substrNode = new Node(SUBSTR, "");
                                                            list.push_back(*substrNode);                                                            
                                                        }
#line 2391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 651 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<<"****************************Missing functionality************************* command: "<<(yyvsp[0].tokens)<<endl;
                                                        }
#line 2399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 655 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<<"*******************************UNKNOWN TOKEN*******************************************"<<endl;
                                                        }
#line 2407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 659 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "MG "; 
                                                            Node* mgNode = new Node(MG, "");
															string s = (yyvsp[0].tokens);
															Node* mgTNode = new Node(MG_TYPE, s.substr(4, 1));
															Node* mgStrNode = new Node(STRING, s.substr(6, s.length() - 7));
															list.push_back(*mgNode);
															list.push_back(*mgTNode);
															list.push_back(*mgStrNode);                                                               
                                                        }
#line 2422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 670 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<<(yyvsp[0].tokens)<<" ";    
                                                            Node* sizeNode = new Node(SIZE, (yyvsp[0].tokens));
                                                            list.push_back(*sizeNode);                                                             
                                                        }
#line 2432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 676 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<<(yyvsp[0].tokens)<<" ";  
                                                            Node* styleNode = new Node(FONT, (yyvsp[0].tokens));
                                                            list.push_back(*styleNode);                                                               
                                                        }
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 682 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "VAR_UP ";            
                                                            Node* varNode = new Node(VARIABLE, (yyvsp[0].tokens));
                                                            list.push_back(*varNode);                                                     
                                                        }
#line 2452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 688 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "VAR ";  
                                                            Node* varNode = new Node(VARIABLE, (yyvsp[0].tokens));
                                                            list.push_back(*varNode);                                                               
                                                        }
#line 2462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 694 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<<(yyvsp[0].tokens)<<" ";   
                                                            Node* numNode = new Node(NUMBER, (yyvsp[0].tokens));
                                                            list.push_back(*numNode);                                                              
                                                        }
#line 2472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 700 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<<(yyvsp[0].tokens)<<" "; 
                                                            Node* stringNode = new Node(STRING, (yyvsp[0].tokens));
                                                            list.push_back(*stringNode);                                                                
                                                        }
#line 2482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 706 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<<(yyvsp[0].tokens)<<" ";  
                                                            Node* labelNode = new Node(LABEL, (yyvsp[0].tokens));
                                                            list.push_back(*labelNode);                                                               
                                                        }
#line 2492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 712 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<<(yyvsp[0].tokens)<<" ";       
                                                            Node* mathexNode = new Node(MATHEX, (yyvsp[0].tokens));
                                                            list.push_back(*mathexNode);                                                          
                                                        }
#line 2502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 718 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<< "NEW LINE "<<std::endl;
                                                            Node* newlineNode = new Node(NEWLINE, "");
                                                            list.push_back(*newlineNode);                                                                 
                                                        }
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2516 "y.tab.c" /* yacc.c:1646  */
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
#line 726 "compiler.y" /* yacc.c:1906  */


void yyerror(char *msg){
	extern int yylineno;
	fprintf(stderr, "%s in line %d\n", msg, yylineno);
	exit(1);
}

int main(){

	list.push_back(docNode);

	cout<< std::endl << std::endl <<"*******************YYPARSE*********************"<<std::endl;
	
    yyparse();
	
    cout<< endl << endl <<"*******************LIST OF NODES*********************"<<endl;
	printList(list);

    cout<< endl << endl <<"****************START TREE BUILDING*******************"<<endl;
    startTreeBuilding(list);

    printTree(&list[0], 0);

}
