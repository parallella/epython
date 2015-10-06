/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "epython.y" /* yacc.c:339  */

#include "byteassembler.h"
#include "memorymanager.h"
#include "stack.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

extern int line_num;
extern char * parsing_filename;
void yyerror(char const*);
int yylex(void);

void yyerror (char const *msg) {
	fprintf(stderr, "%s at line %d of file %s\n", msg, line_num, parsing_filename);
	exit(0);
}

#line 86 "parser.c" /* yacc.c:339  */

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

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
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
    INTEGER = 258,
    REAL = 259,
    STRING = 260,
    IDENTIFIER = 261,
    NEWLINE = 262,
    INDENT = 263,
    OUTDENT = 264,
    REM = 265,
    DIM = 266,
    SDIM = 267,
    LET = 268,
    STOP = 269,
    ELSE = 270,
    COMMA = 271,
    WHILE = 272,
    FOR = 273,
    TO = 274,
    FROM = 275,
    NEXT = 276,
    INTO = 277,
    GOTO = 278,
    PRINT = 279,
    INPUT = 280,
    IF = 281,
    THEN = 282,
    EPY_I_COREID = 283,
    EPY_I_NUMCORES = 284,
    EPY_I_SEND = 285,
    EPY_I_RECV = 286,
    RANDOM = 287,
    EPY_I_SYNC = 288,
    EPY_I_BCAST = 289,
    EPY_I_REDUCE = 290,
    SUM = 291,
    MIN = 292,
    MAX = 293,
    PROD = 294,
    EPY_I_SENDRECV = 295,
    TOFROM = 296,
    ADD = 297,
    SUB = 298,
    EPY_I_ISHOST = 299,
    EPY_I_ISDEVICE = 300,
    COLON = 301,
    DEF = 302,
    RET = 303,
    NONE = 304,
    FILESTART = 305,
    MULT = 306,
    DIV = 307,
    MOD = 308,
    AND = 309,
    OR = 310,
    NEQ = 311,
    LEQ = 312,
    GEQ = 313,
    LT = 314,
    GT = 315,
    EQ = 316,
    NOT = 317,
    SQRT = 318,
    SIN = 319,
    COS = 320,
    TAN = 321,
    ASIN = 322,
    ACOS = 323,
    ATAN = 324,
    SINH = 325,
    COSH = 326,
    TANH = 327,
    FLOOR = 328,
    CEIL = 329,
    LOG = 330,
    LOG10 = 331,
    LPAREN = 332,
    RPAREN = 333,
    SLBRACE = 334,
    SRBRACE = 335,
    TRUE = 336,
    FALSE = 337,
    ISHOST = 338,
    ISDEVICE = 339,
    ASSGN = 340,
    POW = 341
  };
#endif
/* Tokens.  */
#define INTEGER 258
#define REAL 259
#define STRING 260
#define IDENTIFIER 261
#define NEWLINE 262
#define INDENT 263
#define OUTDENT 264
#define REM 265
#define DIM 266
#define SDIM 267
#define LET 268
#define STOP 269
#define ELSE 270
#define COMMA 271
#define WHILE 272
#define FOR 273
#define TO 274
#define FROM 275
#define NEXT 276
#define INTO 277
#define GOTO 278
#define PRINT 279
#define INPUT 280
#define IF 281
#define THEN 282
#define EPY_I_COREID 283
#define EPY_I_NUMCORES 284
#define EPY_I_SEND 285
#define EPY_I_RECV 286
#define RANDOM 287
#define EPY_I_SYNC 288
#define EPY_I_BCAST 289
#define EPY_I_REDUCE 290
#define SUM 291
#define MIN 292
#define MAX 293
#define PROD 294
#define EPY_I_SENDRECV 295
#define TOFROM 296
#define ADD 297
#define SUB 298
#define EPY_I_ISHOST 299
#define EPY_I_ISDEVICE 300
#define COLON 301
#define DEF 302
#define RET 303
#define NONE 304
#define FILESTART 305
#define MULT 306
#define DIV 307
#define MOD 308
#define AND 309
#define OR 310
#define NEQ 311
#define LEQ 312
#define GEQ 313
#define LT 314
#define GT 315
#define EQ 316
#define NOT 317
#define SQRT 318
#define SIN 319
#define COS 320
#define TAN 321
#define ASIN 322
#define ACOS 323
#define ATAN 324
#define SINH 325
#define COSH 326
#define TANH 327
#define FLOOR 328
#define CEIL 329
#define LOG 330
#define LOG10 331
#define LPAREN 332
#define RPAREN 333
#define SLBRACE 334
#define SRBRACE 335
#define TRUE 336
#define FALSE 337
#define ISHOST 338
#define ISDEVICE 339
#define ASSGN 340
#define POW 341

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 21 "epython.y" /* yacc.c:355  */

	int integer;
	float real;	
	struct memorycontainer * data;
	char *string;
	struct stack_t * stack;

#line 306 "parser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 321 "parser.c" /* yacc.c:358  */

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
#define YYFINAL  89
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   585

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  221

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

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
      85,    86
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    59,    59,    62,    63,    67,    68,    69,    73,    74,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   110,
     111,   112,   116,   117,   118,   122,   125,   128,   131,   132,
     133,   134,   138,   142,   146,   147,   151,   152,   155,   156,
     160,   161,   162,   163,   164,   168,   169,   170,   171,   172,
     176,   177,   178,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   204,   205,   206,   207,   208,   212,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   229,   230
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "REAL", "STRING",
  "IDENTIFIER", "NEWLINE", "INDENT", "OUTDENT", "REM", "DIM", "SDIM",
  "LET", "STOP", "ELSE", "COMMA", "WHILE", "FOR", "TO", "FROM", "NEXT",
  "INTO", "GOTO", "PRINT", "INPUT", "IF", "THEN", "EPY_I_COREID",
  "EPY_I_NUMCORES", "EPY_I_SEND", "EPY_I_RECV", "RANDOM", "EPY_I_SYNC",
  "EPY_I_BCAST", "EPY_I_REDUCE", "SUM", "MIN", "MAX", "PROD",
  "EPY_I_SENDRECV", "TOFROM", "ADD", "SUB", "EPY_I_ISHOST",
  "EPY_I_ISDEVICE", "COLON", "DEF", "RET", "NONE", "FILESTART", "MULT",
  "DIV", "MOD", "AND", "OR", "NEQ", "LEQ", "GEQ", "LT", "GT", "EQ", "NOT",
  "SQRT", "SIN", "COS", "TAN", "ASIN", "ACOS", "ATAN", "SINH", "COSH",
  "TANH", "FLOOR", "CEIL", "LOG", "LOG10", "LPAREN", "RPAREN", "SLBRACE",
  "SRBRACE", "TRUE", "FALSE", "ISHOST", "ISDEVICE", "ASSGN", "POW",
  "$accept", "program", "lines", "line", "statements", "statement",
  "fncallargs", "fndeclarationargs", "codeblock", "indent_rule",
  "outdent_rule", "reductionop", "declareident", "elseifblock",
  "expression", "logical_or_expression", "logical_and_expression",
  "equality_expression", "relational_expression", "additive_expression",
  "multiplicative_expression", "value", "ident", "constant",
  "unary_operator", YY_NULLPTR
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
     335,   336,   337,   338,   339,   340,   341
};
# endif

#define YYPACT_NINF -175

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-175)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     473,  -175,  -175,  -175,     4,     4,     4,  -175,   230,     4,
      18,   230,    52,   230,   230,     4,  -175,   230,    49,   230,
       4,   179,    30,   473,  -175,    25,   537,   -61,   -45,   -19,
       7,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,   281,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,   230,  -175,  -175,    28,
      16,    29,    -2,    42,    24,    10,  -175,   -60,  -175,    74,
      32,  -175,  -175,  -175,  -175,    81,    61,    97,    -7,    98,
    -175,  -175,  -175,  -175,   230,    76,    48,  -175,  -175,  -175,
    -175,  -175,  -175,   230,   230,   230,   230,   230,   230,    16,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,    41,   119,   281,   281,   332,   332,
     332,   332,   332,   332,   332,   332,    47,    47,    47,    47,
     230,   230,  -175,  -175,   230,     4,   505,   230,   230,   230,
     230,   105,   230,     4,   -14,  -175,    50,  -175,    51,    57,
    -175,  -175,   124,  -175,    29,    -2,    42,    42,    24,    24,
      24,    24,    10,    10,  -175,  -175,  -175,  -175,    -9,    58,
     120,  -175,  -175,   125,  -175,  -175,    62,   122,     4,   127,
      -5,  -175,   230,  -175,    56,  -175,  -175,  -175,   473,  -175,
    -175,   230,   100,   119,   130,     4,  -175,     4,     4,   101,
    -175,   230,   409,   473,  -175,  -175,   230,  -175,    78,  -175,
     119,  -175,  -175,  -175,   441,  -175,   230,  -175,  -175,    75,
    -175
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    97,     7,    32,     0,     0,     0,    31,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     0,     0,     0,
       0,    35,     0,     2,     3,     6,     9,     0,     0,     0,
       0,    98,    99,   105,   100,   101,   102,   108,   109,    63,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   106,   107,     0,
      54,    56,    58,    60,    65,    70,    73,    94,    92,     0,
       0,    52,    21,    30,    25,     0,     0,     0,     0,     0,
      48,    49,    50,    51,     0,     0,     0,    36,    37,     1,
       4,     5,     8,    39,     0,     0,     0,     0,     0,    55,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,     0,   103,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    42,     0,    40,     0,    28,     0,     0,
      27,    93,     0,    20,    57,    59,    62,    61,    68,    69,
      67,    66,    71,    72,    74,    75,    76,    77,     0,     0,
       0,    26,    24,    22,    12,    10,     0,     0,     0,     0,
       0,    43,     0,    38,     0,    17,    18,    46,     0,    96,
      95,     0,     0,     0,     0,     0,    16,     0,     0,     0,
      41,     0,     0,     0,    53,    23,     0,    15,    13,    44,
       0,    29,    47,    45,     0,    11,     0,    34,    19,     0,
      14
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -175,  -175,  -174,   -22,   -23,  -175,    31,  -175,  -128,  -175,
    -175,  -175,  -175,  -175,    14,   117,    43,    45,   -27,   -17,
     -10,    -6,     0,   148,  -175
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,    23,    24,    25,    26,   144,   180,   153,   188,
     213,    84,    70,   193,   145,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      27,    90,   182,    92,    28,    29,    30,   182,   173,    71,
       1,   198,    74,   138,   202,    78,    93,   130,    94,   131,
      86,    72,    59,    27,    95,    73,    27,    76,    77,   214,
      89,    79,    91,    85,    96,    88,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      31,    32,    33,     1,   118,    31,    32,    33,     1,   119,
      97,   126,   127,   128,   183,   205,   124,   125,    98,   189,
     114,   116,   139,   199,   115,    34,    35,   132,   133,    36,
      34,    35,   217,   117,    36,    80,    81,    82,    83,    37,
      38,   156,   157,   134,    37,    38,   129,   135,   141,   120,
     121,   122,   123,   158,   159,   160,   161,   136,   146,   147,
     148,   149,   150,   172,   162,   163,   137,   142,   140,   151,
     164,   165,   166,   167,    56,   143,   152,   178,    57,    58,
     184,   185,   187,    57,    58,   171,    27,   186,   190,   191,
     192,   201,   194,   181,   195,   169,   204,   210,   170,   197,
     206,   174,   175,   176,   177,   220,   179,   216,    99,   154,
      75,   168,   155,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   196,     0,
      90,     0,    31,    32,    33,     1,     0,     0,    27,     0,
       0,     0,    90,     0,     0,   207,   200,   208,   209,     0,
       0,     0,    27,    27,     0,   203,     0,    34,    35,     0,
       0,    36,     0,     0,    27,   211,     0,     0,     0,     0,
     215,    37,    38,    39,    40,     0,     0,     0,    87,     0,
     219,     0,     0,    31,    32,    33,     1,     0,     0,     0,
       0,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,     0,    34,    35,
      57,    58,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,    38,    39,    40,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    32,    33,     1,     0,     0,
       0,     0,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,     0,    34,
      35,    57,    58,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37,    38,    39,    40,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,    33,     1,     0,
       0,     0,     0,     0,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,     0,
      34,    35,    57,    58,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    37,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       0,     0,     0,    57,    58,     1,     2,     0,   212,     3,
       4,     5,     6,     7,     0,     0,     8,     9,     0,     0,
       0,     0,    10,    11,    12,    13,     0,     0,     0,    14,
      15,     0,    16,    17,    18,     0,     0,     1,     2,    19,
       0,     3,     4,     5,     6,     7,    20,    21,     8,     9,
       0,     0,   218,     0,    10,    11,    12,    13,     0,     0,
       0,    14,    15,     0,    16,    17,    18,     0,     0,     1,
       2,    19,     0,     3,     4,     5,     6,     7,    20,    21,
       8,     9,     0,     0,     0,     0,    10,    11,    12,    13,
       0,     0,     0,    14,    15,     0,    16,    17,    18,     0,
       0,     1,   152,    19,     0,     3,     4,     5,     6,     7,
      20,    21,     8,     9,     0,     0,     0,     0,    10,    11,
      12,    13,     0,     0,     0,    14,    15,     0,    16,    17,
      18,     0,     0,     1,     0,    19,     0,     3,     4,     5,
       6,     7,    20,    21,     8,     9,     0,     0,     0,     0,
      10,    11,    12,    13,     0,     0,     0,    14,    15,     0,
      16,    17,    18,     0,     0,     0,     0,    19,     0,     0,
       0,     0,     0,     0,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    23,    16,    26,     4,     5,     6,    16,   136,     9,
       6,    16,    12,    20,   188,    15,    77,    77,    79,    79,
      20,     3,     8,    23,    85,    11,    26,    13,    14,   203,
       0,    17,     7,    19,    79,    21,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       3,     4,     5,     6,    56,     3,     4,     5,     6,    61,
      79,    51,    52,    53,    78,   193,    42,    43,    61,    78,
      56,    55,    79,    78,    46,    28,    29,     3,     4,    32,
      28,    29,   210,    54,    32,    36,    37,    38,    39,    42,
      43,   118,   119,    61,    42,    43,    86,    16,    84,    57,
      58,    59,    60,   120,   121,   122,   123,    46,    94,    95,
      96,    97,    98,   136,   124,   125,    19,    41,    20,    78,
     126,   127,   128,   129,    77,    77,     7,    22,    81,    82,
      80,    80,     8,    81,    82,   135,   136,    80,    80,    19,
      15,    85,    80,   143,    22,   131,    46,    46,   134,    22,
      20,   137,   138,   139,   140,    80,   142,    79,    41,   116,
      12,   130,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   178,    -1,
     202,    -1,     3,     4,     5,     6,    -1,    -1,   188,    -1,
      -1,    -1,   214,    -1,    -1,   195,   182,   197,   198,    -1,
      -1,    -1,   202,   203,    -1,   191,    -1,    28,    29,    -1,
      -1,    32,    -1,    -1,   214,   201,    -1,    -1,    -1,    -1,
     206,    42,    43,    44,    45,    -1,    -1,    -1,    49,    -1,
     216,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    -1,    28,    29,
      81,    82,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    28,
      29,    81,    82,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    -1,
      28,    29,    81,    82,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      -1,    -1,    -1,    81,    82,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    -1,    -1,    -1,    30,
      31,    -1,    33,    34,    35,    -1,    -1,     6,     7,    40,
      -1,    10,    11,    12,    13,    14,    47,    48,    17,    18,
      -1,    -1,    21,    -1,    23,    24,    25,    26,    -1,    -1,
      -1,    30,    31,    -1,    33,    34,    35,    -1,    -1,     6,
       7,    40,    -1,    10,    11,    12,    13,    14,    47,    48,
      17,    18,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      -1,    -1,    -1,    30,    31,    -1,    33,    34,    35,    -1,
      -1,     6,     7,    40,    -1,    10,    11,    12,    13,    14,
      47,    48,    17,    18,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    -1,    -1,    -1,    30,    31,    -1,    33,    34,
      35,    -1,    -1,     6,    -1,    40,    -1,    10,    11,    12,
      13,    14,    47,    48,    17,    18,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    -1,    -1,    -1,    30,    31,    -1,
      33,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    10,    11,    12,    13,    14,    17,    18,
      23,    24,    25,    26,    30,    31,    33,    34,    35,    40,
      47,    48,    88,    89,    90,    91,    92,   109,   109,   109,
     109,     3,     4,     5,    28,    29,    32,    42,    43,    44,
      45,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    81,    82,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
      99,   109,     3,   101,   109,   110,   101,   101,   109,   101,
      36,    37,    38,    39,    98,   101,   109,    49,   101,     0,
      90,     7,    91,    77,    79,    85,    79,    79,    61,   102,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   101,    46,    55,    54,    56,    61,
      57,    58,    59,    60,    42,    43,    51,    52,    53,    86,
      77,    79,     3,     4,    61,    16,    46,    19,    20,    79,
      20,   101,    41,    77,    93,   101,   101,   101,   101,   101,
     101,    78,     7,    95,   103,   104,   105,   105,   106,   106,
     106,   106,   107,   107,   108,   108,   108,   108,    93,   101,
     101,   109,    91,    95,   101,   101,   101,   101,    22,   101,
      94,   109,    16,    78,    80,    80,    80,     8,    96,    78,
      80,    19,    15,   100,    80,    22,   109,    22,    16,    78,
     101,    85,    89,   101,    46,    95,    20,   109,   109,   109,
      46,   101,     9,    97,    89,   101,    79,    95,    21,   101,
      80
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    89,    89,    90,    90,    90,    91,    91,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    93,
      93,    93,    94,    94,    94,    95,    96,    97,    98,    98,
      98,    98,    99,   100,   101,   101,   102,   102,   103,   103,
     104,   104,   104,   104,   104,   105,   105,   105,   105,   105,
     106,   106,   106,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   108,   108,   108,   108,   108,   109,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   111,   111
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     1,     1,     2,     1,
       4,     7,     4,     6,     9,     6,     5,     5,     5,     8,
       4,     2,     4,     6,     4,     2,     4,     4,     3,     6,
       2,     1,     1,     1,     7,     1,     2,     2,     4,     0,
       1,     3,     0,     1,     3,     4,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     3,     1,     3,
       1,     3,     3,     1,     1,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     3,     1,     4,     4,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     1
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
        case 2:
#line 59 "epython.y" /* yacc.c:1646  */
    { compileMemory((yyvsp[0].data)); }
#line 1636 "parser.c" /* yacc.c:1646  */
    break;

  case 4:
#line 63 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=concatenateMemory((yyvsp[-1].data), (yyvsp[0].data)); }
#line 1642 "parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 67 "epython.y" /* yacc.c:1646  */
    { (yyval.data) = (yyvsp[-1].data); }
#line 1648 "parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 68 "epython.y" /* yacc.c:1646  */
    { (yyval.data) = (yyvsp[0].data); }
#line 1654 "parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 69 "epython.y" /* yacc.c:1646  */
    { (yyval.data) = NULL; }
#line 1660 "parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 73 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=concatenateMemory((yyvsp[-1].data), (yyvsp[0].data)); }
#line 1666 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 78 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendRecvStatement((yyvsp[-2].string), (yyvsp[0].data)); }
#line 1672 "parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 79 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendRecvIntoArrayStatement((yyvsp[-5].string), (yyvsp[-3].data), (yyvsp[0].data)); }
#line 1678 "parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 80 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendSendStatement((yyvsp[-2].data), (yyvsp[0].data)); }
#line 1684 "parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 81 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendSendRecvStatement((yyvsp[-4].data), (yyvsp[-2].data), (yyvsp[0].string)); }
#line 1690 "parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 82 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendSendRecvStatementIntoArray((yyvsp[-7].data), (yyvsp[-5].data), (yyvsp[-3].string), (yyvsp[-1].data)); }
#line 1696 "parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 83 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendBcastStatement((yyvsp[-4].data), (yyvsp[-2].data), (yyvsp[0].string)); }
#line 1702 "parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 84 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendReductionStatement((yyvsp[-3].integer), (yyvsp[-2].data), (yyvsp[0].string)); }
#line 1708 "parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 85 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendDeclareArray((yyvsp[-3].string), (yyvsp[-1].data)); }
#line 1714 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 86 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendDeclareSharedArray((yyvsp[-3].string), (yyvsp[-1].data)); }
#line 1720 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 87 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendForStatement((yyvsp[-6].string), (yyvsp[-4].data), (yyvsp[-2].data), (yyvsp[-1].data)); leaveScope(); }
#line 1726 "parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 88 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendWhileStatement((yyvsp[-2].data), (yyvsp[0].data)); }
#line 1732 "parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 89 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendGotoStatement((yyvsp[0].integer)); }
#line 1738 "parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 90 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendIfStatement((yyvsp[-2].data), (yyvsp[0].data)); }
#line 1744 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 91 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendIfElseStatement((yyvsp[-4].data), (yyvsp[-2].data), (yyvsp[0].data)); }
#line 1750 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 92 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendIfStatement((yyvsp[-2].data), (yyvsp[0].data)); }
#line 1756 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 93 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendInputStatement((yyvsp[0].string)); }
#line 1762 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 94 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendInputStringStatement((yyvsp[-2].data), (yyvsp[0].string)); }
#line 1768 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 95 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendLetStatement((yyvsp[-2].string), (yyvsp[0].data)); }
#line 1774 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 96 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendLetStatement((yyvsp[-2].string), (yyvsp[0].data)); }
#line 1780 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 97 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendArraySetStatement((yyvsp[-5].string), (yyvsp[-3].data), (yyvsp[0].data)); }
#line 1786 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 98 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendPrintStatement((yyvsp[0].data)); }
#line 1792 "parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 99 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendStopStatement(); }
#line 1798 "parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 100 "epython.y" /* yacc.c:1646  */
    { (yyval.data) = NULL; }
#line 1804 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 101 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendSyncStatement(); }
#line 1810 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 102 "epython.y" /* yacc.c:1646  */
    { appendNewFunctionStatement((yyvsp[-5].string), (yyvsp[-3].stack), (yyvsp[0].data)); leaveScope(); (yyval.data) = NULL; }
#line 1816 "parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 103 "epython.y" /* yacc.c:1646  */
    { (yyval.data) = appendReturnStatement(); }
#line 1822 "parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 104 "epython.y" /* yacc.c:1646  */
    { (yyval.data) = appendReturnStatement(); }
#line 1828 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 105 "epython.y" /* yacc.c:1646  */
    { (yyval.data) = appendReturnStatementWithExpression((yyvsp[0].data)); }
#line 1834 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 106 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendCallFunctionStatement((yyvsp[-3].string), (yyvsp[-1].stack)); }
#line 1840 "parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 110 "epython.y" /* yacc.c:1646  */
    { (yyval.stack)=getNewStack(); }
#line 1846 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 111 "epython.y" /* yacc.c:1646  */
    { (yyval.stack)=getNewStack(); pushExpression((yyval.stack), (yyvsp[0].data)); }
#line 1852 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 112 "epython.y" /* yacc.c:1646  */
    { pushExpression((yyvsp[-2].stack), (yyvsp[0].data)); (yyval.stack)=(yyvsp[-2].stack); }
#line 1858 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 116 "epython.y" /* yacc.c:1646  */
    { enterScope(); (yyval.stack)=getNewStack(); }
#line 1864 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 117 "epython.y" /* yacc.c:1646  */
    { (yyval.stack)=getNewStack(); enterScope(); pushIdentifier((yyval.stack), (yyvsp[0].string)); appendArgument((yyvsp[0].string)); }
#line 1870 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 118 "epython.y" /* yacc.c:1646  */
    { pushIdentifier((yyvsp[-2].stack), (yyvsp[0].string)); (yyval.stack)=(yyvsp[-2].stack); appendArgument((yyvsp[0].string)); }
#line 1876 "parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 122 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=(yyvsp[-1].data); }
#line 1882 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 125 "epython.y" /* yacc.c:1646  */
    { enterScope(); }
#line 1888 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 128 "epython.y" /* yacc.c:1646  */
    { leaveScope(); }
#line 1894 "parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 131 "epython.y" /* yacc.c:1646  */
    { (yyval.integer)=0; }
#line 1900 "parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 132 "epython.y" /* yacc.c:1646  */
    { (yyval.integer)=1; }
#line 1906 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 133 "epython.y" /* yacc.c:1646  */
    { (yyval.integer)=2; }
#line 1912 "parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 134 "epython.y" /* yacc.c:1646  */
    { (yyval.integer)=3; }
#line 1918 "parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 138 "epython.y" /* yacc.c:1646  */
    { (yyval.string)=(yyvsp[0].string); enterScope(); addVariableIfNeeded((yyvsp[0].string)); }
#line 1924 "parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 142 "epython.y" /* yacc.c:1646  */
    { leaveScope(); enterScope(); }
#line 1930 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 146 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=(yyvsp[0].data); }
#line 1936 "parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 147 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=(yyvsp[0].data); }
#line 1942 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 151 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=(yyvsp[0].data); }
#line 1948 "parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 152 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createOrExpression((yyvsp[-2].data), (yyvsp[0].data)); }
#line 1954 "parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 155 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=(yyvsp[0].data); }
#line 1960 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 156 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createAndExpression((yyvsp[-2].data), (yyvsp[0].data)); }
#line 1966 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 160 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=(yyvsp[0].data); }
#line 1972 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 161 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createEqExpression((yyvsp[-2].data), (yyvsp[0].data)); }
#line 1978 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 162 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createNeqExpression((yyvsp[-2].data), (yyvsp[0].data)); }
#line 1984 "parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 163 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createIsHostExpression(); }
#line 1990 "parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 164 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createIsDeviceExpression(); }
#line 1996 "parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 168 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=(yyvsp[0].data); }
#line 2002 "parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 169 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createGtExpression((yyvsp[-2].data), (yyvsp[0].data)); }
#line 2008 "parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 170 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createLtExpression((yyvsp[-2].data), (yyvsp[0].data)); }
#line 2014 "parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 171 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createLeqExpression((yyvsp[-2].data), (yyvsp[0].data)); }
#line 2020 "parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 172 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createGeqExpression((yyvsp[-2].data), (yyvsp[0].data)); }
#line 2026 "parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 176 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=(yyvsp[0].data); }
#line 2032 "parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 177 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createAddExpression((yyvsp[-2].data), (yyvsp[0].data)); }
#line 2038 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 178 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createSubExpression((yyvsp[-2].data), (yyvsp[0].data)); }
#line 2044 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 182 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=(yyvsp[0].data); }
#line 2050 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 183 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createMulExpression((yyvsp[-2].data), (yyvsp[0].data)); }
#line 2056 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 184 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createDivExpression((yyvsp[-2].data), (yyvsp[0].data)); }
#line 2062 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 185 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createModExpression((yyvsp[-2].data), (yyvsp[0].data)); }
#line 2068 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 186 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createPowExpression((yyvsp[-2].data), (yyvsp[0].data)); }
#line 2074 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 187 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createSqrtExpression((yyvsp[0].data)); }
#line 2080 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 188 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createSinExpression((yyvsp[0].data)); }
#line 2086 "parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 189 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createCosExpression((yyvsp[0].data)); }
#line 2092 "parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 190 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createTanExpression((yyvsp[0].data)); }
#line 2098 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 191 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createASinExpression((yyvsp[0].data)); }
#line 2104 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 192 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createACosExpression((yyvsp[0].data)); }
#line 2110 "parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 193 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createATanExpression((yyvsp[0].data)); }
#line 2116 "parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 194 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createSinHExpression((yyvsp[0].data)); }
#line 2122 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 195 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createCosHExpression((yyvsp[0].data)); }
#line 2128 "parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 196 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createTanHExpression((yyvsp[0].data)); }
#line 2134 "parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 197 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createFloorExpression((yyvsp[0].data)); }
#line 2140 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 198 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createCeilExpression((yyvsp[0].data)); }
#line 2146 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 199 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createLogExpression((yyvsp[0].data)); }
#line 2152 "parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 200 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createLog10Expression((yyvsp[0].data)); }
#line 2158 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 204 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=(yyvsp[0].data); }
#line 2164 "parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 205 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=(yyvsp[-1].data); }
#line 2170 "parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 206 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createIdentifierExpression((yyvsp[0].string)); }
#line 2176 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 207 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createIdentifierArrayAccessExpression((yyvsp[-3].string), (yyvsp[-1].data)); }
#line 2182 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 208 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=appendCallFunctionStatement((yyvsp[-3].string), (yyvsp[-1].stack)); }
#line 2188 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 212 "epython.y" /* yacc.c:1646  */
    { (yyval.string) = malloc(strlen((yyvsp[0].string))+1); strcpy((yyval.string), (yyvsp[0].string)); }
#line 2194 "parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 216 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createIntegerExpression((yyvsp[0].integer)); }
#line 2200 "parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 217 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createRealExpression((yyvsp[0].real)); }
#line 2206 "parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 218 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createCoreIdExpression(); }
#line 2212 "parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 219 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createNumCoresExpression(); }
#line 2218 "parser.c" /* yacc.c:1646  */
    break;

  case 102:
#line 220 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createRandomExpression(); }
#line 2224 "parser.c" /* yacc.c:1646  */
    break;

  case 103:
#line 221 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createIntegerExpression((yyvsp[-1].integer) * (yyvsp[0].integer)); }
#line 2230 "parser.c" /* yacc.c:1646  */
    break;

  case 104:
#line 222 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createRealExpression((yyvsp[-1].integer) * (yyvsp[0].real)); }
#line 2236 "parser.c" /* yacc.c:1646  */
    break;

  case 105:
#line 223 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createStringExpression((yyvsp[0].string)); }
#line 2242 "parser.c" /* yacc.c:1646  */
    break;

  case 106:
#line 224 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createBooleanExpression(1); }
#line 2248 "parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 225 "epython.y" /* yacc.c:1646  */
    { (yyval.data)=createBooleanExpression(0); }
#line 2254 "parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 229 "epython.y" /* yacc.c:1646  */
    { (yyval.integer) = 1; }
#line 2260 "parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 230 "epython.y" /* yacc.c:1646  */
    { (yyval.integer) = -1; }
#line 2266 "parser.c" /* yacc.c:1646  */
    break;


#line 2270 "parser.c" /* yacc.c:1646  */
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
#line 233 "epython.y" /* yacc.c:1906  */

