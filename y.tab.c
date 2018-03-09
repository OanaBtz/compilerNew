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
std:: vector <Node*> list;
Node docNode(DOCUMENT, "");
bool silent = false;

#include "./parser/printing.cpp"
#include "./parser/treebuilding.cpp"



#line 90 "y.tab.c" /* yacc.c:339  */

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
#line 25 "compiler.y" /* yacc.c:355  */

	char tokens[1000];

#line 325 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 342 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  182
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   270

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  92
/* YYNRULES -- Number of rules.  */
#define YYNRULES  271
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  273

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   352

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
      95,    96,    97
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    35,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   216,   222,   228,   234,   240,   246,   252,   258,
     264,   270,   276,   282,   288,   294,   300,   306,   312,   318,
     324,   330,   336,   342,   348,   354,   360,   366,   372,   378,
     384,   390,   396,   402,   408,   414,   420,   426,   432,   438,
     444,   450,   456,   462,   468,   474,   480,   486,   492,   498,
     504,   510,   516,   522,   528,   534,   540,   546,   552,   558,
     564,   570,   576,   582,   588,   594,   600,   606,   612,   618,
     624,   630,   636,   642,   648,   654,   660,   666,   672,   677,
     681,   692,   698,   704,   710,   716,   722,   728,   734,   740,
     746,   752
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SUBSTR_T", "NEW_T", "SET_T",
  "UNKNOWN_T", "IL_T", "TA_T", "MF_T", "LS_T", "TU_T", "QU_T", "IE_T",
  "HW_T", "BC_T", "TD_T", "CB_T", "SC_T", "MC_T", "UP_T", "IS_T", "OC_T",
  "OI_T", "RI_T", "NOTEQUAL_T", "OF_T", "CL_T", "CD_T", "TM_T", "DEPTH_T",
  "HY_T", "HR_T", "MG_T", "DR_T", "WEIGHT_T", "UPPERCASE_T", "LENGTH_T",
  "IN_T", "PA_T", "NS_T", "IR_T", "IF_T", "EL_T", "TH_T", "OR_T", "AN_T",
  "CT_T", "EQUAL_T", "GTHANE_T", "LTHANE_T", "GTHAN_T", "LTHAN_T",
  "CANCEL_T", "RH_T", "KP_T", "LL_T", "GOTO_T", "EXECUTE_T", "LABEL_T",
  "SE_T", "PM_T", "BR_T", "NV_T", "NY_T", "PAGE_T", "ENY_T", "COMMENT_T",
  "TI_T", "DA_T", "FO_T", "ON_T", "OFF_T", "AR_T", "BX_T", "SP_T", "US_T",
  "SIZE_T", "STYLE_T", "IDENT_T", "VAR_UP_T", "VAR_T", "DIRECTION_T",
  "NUM_T", "WIDTH_T", "TP_T", "TAB_T", "ROTATE_T", "NEW_LINE_T", "BM_T",
  "SU_T", "DM_T", "GS_T", "SK_T", "CE_T", "TB_T", "MATHEX_T", "VR_T",
  "$accept", "TOKEN", "DA", "BR", "NV", "PAGE", "NY", "ENY", "COMMENT",
  "TI", "IN", "IR", "FO", "ON", "GOTO", "LL", "RH", "CT", "PA", "DR",
  "WEIGHT", "KP", "EXECUTE", "IF", "RI", "OI", "CB", "SC", "MC", "QU",
  "HW", "IL", "OC", "BC", "IS", "UP", "LS", "TU", "EL", "TH", "OR", "CD",
  "TD", "SU", "DM", "GS", "TB", "SK", "CE", "CL", "AN", "OF", "HR", "VR",
  "HY", "NOTEQUAL", "EQUAL", "GTHAN", "LTHAN", "GTHANE", "LTHANE", "OFF",
  "UPPERCASE", "LENGTH", "AR", "BX", "SP", "SE", "US", "TM", "BM", "PM",
  "WIDTH", "TP", "TA", "ROTATE", "DEPTH", "SUBSTR", "MF", "UNKNOWN", "MG",
  "SIZE", "STYLE", "VAR_UP", "VAR", "NUM", "IDENT", "LABEL", "MATHEX",
  "NEW", "SET", "NEW_LINE", YY_NULLPTR
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
     345,   346,   347,   348,   349,   350,   351,   352
};
# endif

#define YYPACT_NINF -91

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-91)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      95,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   257,   269,   270,   259,   211,   254,   258,   216,   217,
     209,   210,   213,   222,   206,   207,   208,   215,   214,   212,
     205,   204,   235,   231,   229,   221,   249,   256,   234,   232,
     260,   199,   200,   242,   243,   190,   198,   191,   203,   218,
     219,   220,   230,   197,   236,   239,   240,   237,   238,   196,
     201,   195,   194,   202,   267,   247,   251,   183,   184,   186,
     185,   187,   188,   189,   182,   192,   193,   241,   244,   245,
     246,   248,   261,   262,   266,   263,   264,   265,   252,   253,
     255,   271,   250,   223,   224,   225,   227,   228,   226,   268,
     233,     0,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   177,
     178,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   179,
     180,   181,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      87,    88,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      89,    90,    91
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -91,   -91,   -90,   -89,   -78,   -51,   -38,    -9,    -5,    17,
      44,    57,    86,    90,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     182,   183,   184,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,   185,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
     186,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,   187,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,   188,    77,    78,    79,   189,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,   190,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,   191,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,   192,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,   193,    77,    78,
      79,   194,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272
};

static const yytype_uint8 yycheck[] =
{
       0,    91,    91,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    91,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      91,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    91,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    91,    83,    84,    85,    91,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    91,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    91,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    91,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    91,    83,    84,
      85,    91,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    83,    84,    85,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,     0,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    98,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189
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
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
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
       1,     1
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
        case 182:
#line 216 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "DEFINE AREA ";
                                                            Node* daNode = new Node(AREADEFINITION, "");
                                                            list.push_back(daNode);
                                                        }
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 222 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "BREAK ";
                                                            Node* brNode = new Node(LINEBREAK, "");
                                                            list.push_back(brNode);
                                                        }
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 228 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "NV ";
                                                            Node* nvNode = new Node(NV, "");
                                                            list.push_back(nvNode);
                                                        }
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 234 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "PAGE ";
                                                            Node* pageNode = new Node(PAGE, "");
                                                            list.push_back(pageNode);
                                                        }
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 240 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "NY ";
                                                            Node* nyNode = new Node(NY, "");
                                                            list.push_back(nyNode);
                                                        }
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 246 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "ENY ";
                                                            Node* enyNode = new Node(ENY, "");
                                                            list.push_back(enyNode);
                                                        }
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 252 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "COMMENT "; 
                                                            Node* commentNode = new Node(COMMENT, "");
                                                            list.push_back(commentNode);                                                           
                                                        }
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 258 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "TI ";     
                                                            Node* tiNode = new Node(TI, "");
                                                            list.push_back(tiNode);                                                           
                                                        }
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 264 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "IN ";      
                                                            Node* inNode = new Node(IN, "");
                                                            list.push_back(inNode);                                                          
                                                        }
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 270 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "IR ";  
                                                            Node* irNode = new Node(IR, "");
                                                            list.push_back(irNode);                                                              
                                                        }
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 276 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "FO ";                                                            
                                                            Node* foNode = new Node(FO, "");
                                                            list.push_back(foNode);
                                                        }
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 282 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "ON ";  
                                                            Node* onNode = new Node(ON, "");
                                                            list.push_back(onNode);                                                              
                                                        }
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 288 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "GOTO ";      
                                                            Node* goNode = new Node(GO, "");
                                                            list.push_back(goNode);                                                          
                                                        }
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 294 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "LL ";     
                                                            Node* llNode = new Node(LL, "");
                                                            list.push_back(llNode);                                                           
                                                        }
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 300 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "RH ";  
                                                            Node* rhNode = new Node(RH, "");
                                                            list.push_back(rhNode);                                                              
                                                        }
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 306 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "CT ";    
                                                            Node* ctNode = new Node(CT, "");
                                                            list.push_back(ctNode);                                                            
                                                        }
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 312 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "PA ";    
                                                            Node* paNode = new Node(PA, "");
                                                            list.push_back(paNode);                                                            
                                                        }
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 318 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "DR ";   
                                                            Node* drNode = new Node(DR, "");
                                                            list.push_back(drNode);                                                          
                                                        }
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 324 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "WEIGHT ";       
                                                            Node* weightNode = new Node(WEIGHT, "");
                                                            list.push_back(weightNode);                                                          
                                                        }
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 330 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "KEEP ";       
                                                            Node* kpNode = new Node(KP, "");
                                                            list.push_back(kpNode);                                                          
                                                        }
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 336 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "EXECUTE ";
                                                            Node* executeNode = new Node(EXECUTE, "");
                                                            list.push_back(executeNode);                                                                 
                                                        }
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 342 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "IF ";          
                                                            Node* ifNode = new Node(IF, "");
                                                            list.push_back(ifNode);                                                       
                                                        }
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 348 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "RI ";
                                                            Node* riNode = new Node(RI, "");
                                                            list.push_back(riNode);                                                                 
                                                        }
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 354 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "OI "; 
                                                            Node* oiNode = new Node(OI, "");
                                                            list.push_back(oiNode);                                                                
                                                        }
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 360 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "CB ";     
                                                            Node* cbNode = new Node(CB, "");
                                                            list.push_back(cbNode);                                                            
                                                        }
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 366 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "SC ";  
                                                            Node* paNode = new Node(PA, "");
                                                            list.push_back(paNode);                                                               
                                                        }
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 372 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "MC ";   
                                                            Node* mcNode = new Node(MC, "");
                                                            list.push_back(mcNode);                                                              
                                                        }
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 378 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "QU ";     
                                                            Node* quNode = new Node(QU, "");
                                                            list.push_back(quNode);                                                            
                                                        }
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 384 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "HW ";     
                                                            Node* hwNode = new Node(HW, "");
                                                            list.push_back(hwNode);                                                            
                                                        }
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 390 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "IL ";     
                                                            Node* ilNode = new Node(IL, "");
                                                            list.push_back(ilNode);                                                            
                                                        }
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 396 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "OC ";   
                                                            Node* ocNode = new Node(OC, "");
                                                            list.push_back(ocNode);                                                              
                                                        }
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 402 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "BC ";
                                                            Node* bcNode = new Node(BC, "");
                                                            list.push_back(bcNode);                                                                 
                                                        }
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 408 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "IS ";     
                                                            Node* isNode = new Node(IS, "");
                                                            list.push_back(isNode);                                                            
                                                        }
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 414 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "UP ";     
                                                            Node* upNode = new Node(UP, "");
                                                            list.push_back(upNode);                                                            
                                                        }
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 420 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "LS ";     
                                                            Node* lsNode = new Node(LS, "");
                                                            list.push_back(lsNode);                                                            
                                                        }
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 426 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "TU ";     
                                                            Node* tuNode = new Node(TU, "");
                                                            list.push_back(tuNode);                                                            
                                                        }
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 432 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "EL ";     
                                                            Node* elNode = new Node(ELSE, "");
                                                            list.push_back(elNode);                                                            
                                                        }
#line 2045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 438 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "TH ";     
                                                            Node* thNode = new Node(THEN, "");
                                                            list.push_back(thNode);                                                            
                                                        }
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 444 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "OR ";     
                                                            Node* orNode = new Node(OR, "");
                                                            list.push_back(orNode);                                                            
                                                        }
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 450 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "CD ";     
                                                            Node* cdNode = new Node(CD, "");
                                                            list.push_back(cdNode);                                                            
                                                        }
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 456 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "TD ";     
                                                            Node* tdNode = new Node(TD, "");
                                                            list.push_back(tdNode);                                                            
                                                        }
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 462 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "SU ";  
                                                            Node* suNode = new Node(SU, "");
                                                            list.push_back(suNode);                                                               
                                                        }
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 468 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "DM ";     
                                                            Node* dmNode = new Node(DM, "");
                                                            list.push_back(dmNode);                                                            
                                                        }
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 474 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "GS ";
                                                            Node* gsNode = new Node(GS, "");
                                                            list.push_back(gsNode);                                                                 
                                                        }
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 480 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "TB ";   
                                                            Node* tbNode = new Node(TB, "");
                                                            list.push_back(tbNode);                                                               
                                                        }
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 486 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "SK ";             
                                                            Node* skNode = new Node(SK, "");
                                                            list.push_back(skNode);                                                     
                                                        }
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 492 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "CE ";     
                                                            Node* ceNode = new Node(CE, "");
                                                            list.push_back(ceNode);                                                             
                                                        }
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 498 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "CL ";     
                                                            Node* clNode = new Node(CL, "");
                                                            list.push_back(clNode);                                                             
                                                        }
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 504 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "AN ";
                                                            Node* anNode = new Node(AND, "");
                                                            list.push_back(anNode);                                                                  
                                                        }
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 510 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "OF ";
                                                            Node* ofNode = new Node(OF, "");
                                                            list.push_back(ofNode);                                                                  
                                                        }
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 516 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "HR ";     
                                                            Node* hrNode = new Node(HR, "");
                                                            list.push_back(hrNode);                                                             
                                                        }
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 522 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "VR ";     
                                                            Node* vrNode = new Node(VR, "");
                                                            list.push_back(vrNode);                                                             
                                                        }
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 528 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "HY ";     
                                                            Node* hyNode = new Node(HY, "");
                                                            list.push_back(hyNode);                                                             
                                                        }
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 534 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "NOTEQUAL ";
                                                            Node* comparisonNode = new Node(COMPARISON, "");
                                                            list.push_back(comparisonNode);                                                                  
                                                        }
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 540 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "EQUAL ";      
                                                            Node* comparisonNode = new Node(COMPARISON, "");
                                                            list.push_back(comparisonNode);                                                               
                                                        }
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 546 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "GTHAN ";  
                                                            Node* comparisonNode = new Node(COMPARISON, "");
                                                            list.push_back(comparisonNode);                                                                   
                                                        }
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 552 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "LTHAN ";  
                                                            Node* comparisonNode = new Node(COMPARISON, "");
                                                            list.push_back(comparisonNode);                                                                   
                                                        }
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 558 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "GTHANE ";  
                                                            Node* comparisonNode = new Node(COMPARISON, "");
                                                            list.push_back(comparisonNode);                                                                   
                                                        }
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 564 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "LTHANE ";  
                                                            Node* comparisonNode = new Node(COMPARISON, "");
                                                            list.push_back(comparisonNode);                                                                   
                                                        }
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 570 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "OFF ";  
                                                            Node* offNode = new Node(OFF, "");
                                                            list.push_back(offNode);                                                                 
                                                        }
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 576 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "UPPERCASE ";  
                                                            Node* uppercaseNode = new Node(CONDITION, (yyvsp[0].tokens));
                                                            list.push_back(uppercaseNode);                                                                 
                                                        }
#line 2285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 582 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "LENGTH ";             
                                                            Node* lengthNode = new Node(CONDITION, (yyvsp[0].tokens));
                                                            list.push_back(lengthNode);                                                                   
                                                        }
#line 2295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 588 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "AR ";    
                                                            Node* arNode = new Node(AREA, "");
                                                            list.push_back(arNode);                                                                            
                                                        }
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 594 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "BX "; 
                                                            Node* boxNode = new Node(BOX, "");
                                                            list.push_back(boxNode);                                                                
                                                        }
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 600 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "SP "; 
                                                            Node* spNode = new Node(SP, "");
                                                            list.push_back(spNode);                                                               
                                                        }
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 606 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "SE ";     
                                                            Node* seNode = new Node(SE, "");
                                                            list.push_back(seNode);                                                           
                                                        }
#line 2335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 612 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "US ";     
                                                            Node* usNode = new Node(US, "");
                                                            list.push_back(usNode);                                                           
                                                        }
#line 2345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 618 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "TM ";    
                                                            Node* tmNode = new Node(TM, "");
                                                            list.push_back(tmNode);                                                            
                                                        }
#line 2355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 624 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "BM ";             
                                                            Node* bmNode = new Node(BM, "");
                                                            list.push_back(bmNode);                                                   
                                                        }
#line 2365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 630 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "PM ";   
                                                            Node* pmNode = new Node(PM, "");
                                                            list.push_back(pmNode);                                                              
                                                        }
#line 2375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 636 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "WIDTH "; 
                                                            Node* widthNode = new Node(WIDTH, "");
                                                            list.push_back(widthNode);                                                                
                                                        }
#line 2385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 642 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "TP "; 
                                                            Node* tpNode = new Node(TP, "");
                                                            list.push_back(tpNode);                                                                
                                                        }
#line 2395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 648 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "TA ";              
                                                            Node* taNode = new Node(TA, "");
                                                            list.push_back(taNode);                                                   
                                                        }
#line 2405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 654 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "ROTATE ";   
                                                            Node* rotateNode = new Node(ROTATE, "");
                                                            list.push_back(rotateNode);                                                              
                                                        }
#line 2415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 660 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "DEPTH "; 
                                                            Node* depthNode = new Node(DEPTH, "");
                                                            list.push_back(depthNode);                                                                
                                                        }
#line 2425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 666 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "SUBSTR ";     
                                                            Node* substrNode = new Node(SUBSTR, "");
                                                            list.push_back(substrNode);                                                            
                                                        }
#line 2435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 672 "compiler.y" /* yacc.c:1646  */
    {
                                                            cout<<"Missing functionality! command: "<<(yyvsp[0].tokens)<<endl;
                                                            exit(1);
                                                        }
#line 2444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 677 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<<"*******************************UNKNOWN TOKEN*******************************************"<<endl;
                                                        }
#line 2452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 681 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "MG "; 
                                                            Node* mgNode = new Node(MG, "");
															string s = (yyvsp[0].tokens);
															Node* mgTNode = new Node(MG_TYPE, s.substr(4, 1));
															Node* mgStrNode = new Node(STRING, s.substr(6, s.length() - 7));
															list.push_back(mgNode);
															list.push_back(mgTNode);
															list.push_back(mgStrNode);                                                               
                                                        }
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 692 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<<(yyvsp[0].tokens)<<" ";    
                                                            Node* sizeNode = new Node(SIZE, (yyvsp[0].tokens));
                                                            list.push_back(sizeNode);                                                             
                                                        }
#line 2477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 698 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<<(yyvsp[0].tokens)<<" ";  
                                                            Node* styleNode = new Node(FONT, (yyvsp[0].tokens));
                                                            list.push_back(styleNode);                                                               
                                                        }
#line 2487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 704 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "VAR_UP ";            
                                                            Node* varNode = new Node(VARIABLE, (yyvsp[0].tokens));
                                                            list.push_back(varNode);                                                     
                                                        }
#line 2497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 710 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "VAR ";  
                                                            Node* varNode = new Node(VARIABLE, (yyvsp[0].tokens));
                                                            list.push_back(varNode);                                                               
                                                        }
#line 2507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 716 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<<(yyvsp[0].tokens)<<" ";   
                                                            Node* numNode = new Node(NUMBER, (yyvsp[0].tokens));
                                                            list.push_back(numNode);                                                              
                                                        }
#line 2517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 722 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<<(yyvsp[0].tokens)<<" "; 
                                                            Node* stringNode = new Node(STRING, (yyvsp[0].tokens));
                                                            list.push_back(stringNode);                                                                
                                                        }
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 728 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<<(yyvsp[0].tokens)<<" ";  
                                                            Node* labelNode = new Node(LABEL, (yyvsp[0].tokens));
                                                            list.push_back(labelNode);                                                               
                                                        }
#line 2537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 734 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<<(yyvsp[0].tokens)<<" ";       
                                                            Node* mathexNode = new Node(MATHEX, (yyvsp[0].tokens));
                                                            list.push_back(mathexNode);                                                          
                                                        }
#line 2547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 740 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<<"NEW"<<" ";  
                                                            Node* newNode = new Node(NEW, "");
                                                            list.push_back(newNode);                                                               
                                                        }
#line 2557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 746 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<<"SET"<<" ";       
                                                            Node* setNode = new Node(SET, "");
                                                            list.push_back(setNode);                                                          
                                                        }
#line 2567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 752 "compiler.y" /* yacc.c:1646  */
    {
                                                            if(!silent)cout<< "NEW LINE "<<std::endl;
                                                            Node* newlineNode = new Node(NEWLINE, "");
                                                            list.push_back(newlineNode);                                                                 
                                                        }
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2581 "y.tab.c" /* yacc.c:1646  */
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
#line 760 "compiler.y" /* yacc.c:1906  */


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

    cout<<"Template generated successfully!"<<endl<<endl;
}
