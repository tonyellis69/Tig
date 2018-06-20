/* A Bison parser, made by GNU Bison 3.0.  */

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
#define YYBISON_VERSION "3.0"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "tig.y" /* yacc.c:339  */

	#define YYDEBUG 1
    #include <cstdio>
	#include <string>

	#include "compiler.h"
	#include "syntaxNode.h"


    void yyerror(char *);
    int yylex(void);


	CTigCompiler* tigC;

	//extern int yylineno;
	extern int lineNo;
	extern char* yytext;
	extern fpos_t lastLinePos;
	extern fpos_t linePos;
	extern FILE* yyin;

#line 89 "tigParse.cpp" /* yacc.c:339  */

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "tigParse.hpp".  */
#ifndef YY_YY_TIGPARSE_HPP_INCLUDED
# define YY_YY_TIGPARSE_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PRINT = 258,
    END = 259,
    RETURN = 260,
    EVENT = 261,
    OPTION = 262,
    OBJECT = 263,
    HAS = 264,
    ARROW = 265,
    GETSTRING = 266,
    HOT = 267,
    START_TIMER = 268,
    START_EVENT = 269,
    AT = 270,
    INTEGER = 271,
    IDENTIFIER = 272,
    STRING = 273,
    ENDL = 274,
    IF = 275,
    FOR = 276,
    EACH = 277,
    IN = 278,
    SELF = 279,
    CHILDREN = 280,
    ADD_ASSIGN = 281,
    EQ = 282,
    NE = 283,
    GE = 284,
    LE = 285,
    OR = 286,
    AND = 287,
    UMINUS = 288,
    IFX = 289,
    ELSE = 290
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 26 "tig.y" /* yacc.c:355  */
				 						
    int iValue;                 // integer value - for numeric constants etc 
	float fValue;				//float value - for floating-point constants
    CSyntaxNode *nPtr;          // node pointer - enables symbols to point to syntax nodes
	 std::string* str;

#line 172 "tigParse.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TIGPARSE_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 187 "tigParse.cpp" /* yacc.c:358  */

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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
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
#define YYFINAL  66
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   297

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  188

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    39,     2,     2,
      46,    47,    37,    35,    52,    36,    49,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
      32,    48,    30,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    31,    33,    34,    40,    41,
      42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    74,    74,    75,    79,    80,    81,    82,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   104,   105,   109,   114,   115,   116,   120,
     124,   128,   129,   130,   134,   138,   139,   143,   144,   145,
     146,   147,   153,   154,   159,   163,   164,   168,   168,   170,
     174,   175,   179,   180,   181,   185,   190,   191,   192,   193,
     194,   198,   202,   203,   207,   211,   215,   219,   220,   224,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   244,   248,   253,   257,   258,   262,   266,
     270,   274,   275,   279,   280,   281,   286,   290,   291,   296,
     297,   298,   299,   300
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRINT", "END", "RETURN", "EVENT",
  "OPTION", "OBJECT", "HAS", "ARROW", "GETSTRING", "HOT", "START_TIMER",
  "START_EVENT", "AT", "INTEGER", "IDENTIFIER", "STRING", "ENDL", "IF",
  "FOR", "EACH", "IN", "SELF", "CHILDREN", "ADD_ASSIGN", "EQ", "NE", "GE",
  "'>'", "LE", "'<'", "OR", "AND", "'+'", "'-'", "'*'", "'/'", "'%'",
  "UMINUS", "IFX", "ELSE", "';'", "'{'", "'}'", "'('", "')'", "'='", "'.'",
  "'['", "']'", "','", "$accept", "program", "tigcode", "statement",
  "return_expr", "assignment", "var_or_obj_memb", "variable_assignee",
  "obj_member_assignee", "obj_expr", "element_assignee",
  "string_statement", "dec_statement", "level", "obj_identifier",
  "class_identifier", "optional_member_list", "$@1", "member_decl_list",
  "member_decl", "memb_decl_identifier", "init_expr", "memb_function_def",
  "statement_list", "string_literal", "event_identifier", "option",
  "optional_code_block", "code_block", "expression", "variable_expr",
  "member_expr", "member_call", "constant_expr", "integer_constant",
  "array_init_expr", "array_init_list", "constant_seq", "array_init_const",
  "array_element_expr", "array_index_expr", "comparison_expr", YY_NULL
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
      62,   285,    60,   286,   287,    43,    45,    42,    47,    37,
     288,   289,   290,    59,   123,   125,    40,    41,    61,    46,
      91,    93,    44
};
# endif

#define YYPACT_NINF -72

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-72)))

#define YYTABLE_NINF -85

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     208,    60,   -29,    60,     8,    10,   -72,    27,    15,     8,
      -1,   -72,    18,    31,   -72,   230,    79,   208,   -72,    46,
       1,   -72,   -72,    44,   -72,    62,   -72,    57,    90,    94,
      95,    82,   -72,    99,   -72,   -72,    64,   -72,    89,   108,
      60,   140,   110,   236,   -72,   116,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   131,   261,   -72,   133,   133,   158,   -72,
     161,    60,    56,   134,   -72,   119,   -72,   -72,   -72,   -72,
      60,    60,   118,   165,   -72,   -72,   169,    90,    94,   -72,
     144,   175,    90,    60,   -72,   -72,    85,    65,   -72,   -72,
     -72,   -72,   100,   -72,   118,    60,    60,    60,    60,    60,
      60,    60,   -72,   -72,   230,   151,     8,   -72,   152,   180,
     226,   -14,   148,   -72,   -72,   251,   261,   -72,   -72,   -72,
     150,    11,   159,    90,   188,   -72,   166,   261,   -72,   -37,
     -72,   -72,   140,   157,   132,   132,   132,   132,   132,   -72,
     -72,   186,   -72,   -72,   -72,   173,   230,    85,   200,   -72,
     -72,   172,   -72,   181,   -72,   171,   -72,   111,   -72,   -72,
     210,   -72,   189,   -72,   -72,   194,    26,   191,   -72,   -72,
     188,   -72,   -72,    38,   140,   -72,   -72,   -72,   -72,   -72,
     -72,   230,   -72,   -72,   -72,   120,   -72,   -72
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,    24,     0,     0,    42,     0,     0,     0,
      29,    64,     0,     0,    33,     0,     0,     2,     4,     0,
       0,    26,    27,     0,    28,     0,     6,     0,    49,     0,
      35,     0,    32,     0,    71,    88,    83,    87,    81,     0,
       0,     0,     0,     0,    70,    74,    75,    76,    86,    77,
      78,    79,    11,     0,    23,    65,     0,    68,     0,    14,
       0,     0,     0,    29,    62,     0,     1,     5,     7,     9,
       0,     0,     0,     0,    13,    43,    44,    49,     0,    47,
       0,    44,    49,     0,    12,    16,     0,     0,    94,    44,
      93,    95,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     8,    18,     0,     0,     0,    67,     0,     0,
       0,     0,     0,    10,    63,     0,    25,    83,    97,    98,
       0,    84,     0,    49,     0,    38,     0,    36,    31,     0,
      80,    89,     0,     0,    99,   103,   102,   101,   100,    72,
      73,     0,    37,    66,    17,     0,     0,     0,     0,    22,
      34,     0,    40,     0,    55,    48,    50,    52,    39,    82,
       0,    92,    96,    69,    15,    19,     0,    30,    85,    41,
       0,    57,    56,     0,     0,    59,    54,    58,    61,    60,
      84,     0,    21,    51,    53,     0,    20,    90
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -72,   -72,   -72,     7,   -72,   -72,     4,   -72,   -72,   -60,
     -72,   -72,   221,   -72,     5,   214,   -71,   -72,   -72,    75,
     -72,    73,   -72,   145,   254,    -8,   -72,   -72,   123,    20,
     -59,     0,     3,   -72,   -31,   -72,   -72,    86,   137,   -72,
     170,   -72
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    17,    64,    53,    19,    42,    21,    22,    23,
      24,    25,    26,    27,    91,    29,    80,   124,   155,   156,
     157,   176,   177,    65,    30,    56,    31,   106,   178,    43,
      44,    45,    46,    47,    48,    49,   179,    92,    93,    50,
     120,    51
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,    60,   112,    33,    20,    28,   122,    18,   -44,   147,
     159,   126,   160,   118,    52,    32,   -45,    32,    33,    20,
      33,    20,    28,    54,    67,    55,   129,    70,    11,     1,
       2,     3,    77,     5,    82,   118,    72,   -30,     7,     8,
       9,   119,   -44,    63,    11,    58,    12,    13,   -31,    71,
      14,    72,   153,    62,   171,    89,   172,   151,    59,   -30,
      87,   -30,    32,   119,    61,    32,   111,    75,    33,    20,
      15,    34,   114,    63,    76,   160,    35,    36,    37,    66,
      14,   110,   104,   123,    38,    39,    32,   166,   174,    69,
     115,   116,    95,    73,    96,    97,    98,    99,   143,    79,
     100,   101,   128,   127,    32,    74,    40,    33,    20,    14,
      41,    81,   130,   -31,   -29,   134,   135,   136,   137,   138,
     139,   140,     1,     2,     3,    84,     5,   171,    89,   172,
      83,     7,     8,     9,    35,   117,    63,    11,   -33,    12,
      13,    32,    85,    14,    33,    20,    32,    32,   114,    33,
      20,   131,   132,   165,    86,   104,    88,    89,    90,   173,
      94,   174,   175,    15,   113,   -32,    32,   100,   101,    33,
      20,   187,   132,   182,   103,   108,   109,   104,   175,   105,
     107,    32,   121,   -31,    33,    20,   -45,   125,   186,     1,
       2,     3,   -46,     5,   142,   144,   145,   148,     7,     8,
       9,   150,   152,    63,    11,   154,    12,    13,   162,   158,
      14,     1,     2,     3,     4,     5,   164,   167,     6,   168,
       7,     8,     9,   170,   169,    10,    11,   180,    12,    13,
      15,   163,    14,     1,     2,     3,   181,     5,    68,   -34,
     -84,    78,     7,     8,     9,   183,   184,    63,    11,   141,
      12,    13,    15,    95,    14,    96,    97,    98,    99,    57,
     185,   100,   101,    95,   133,    96,    97,    98,    99,   161,
       0,   100,   101,   146,    15,     0,     0,     0,    95,   102,
      96,    97,    98,    99,     0,     0,   100,   101,    95,     0,
      96,    97,    98,    99,   149,     0,   100,   101
};

static const yytype_int16 yycheck[] =
{
       0,     9,    62,     0,     0,     0,    77,     0,     9,    23,
      47,    82,    49,    72,    43,    15,    17,    17,    15,    15,
      17,    17,    17,     3,    17,    17,    86,    26,    18,     3,
       4,     5,    27,     7,    29,    94,    50,    26,    12,    13,
      14,    72,    43,    17,    18,    18,    20,    21,    49,    48,
      24,    50,   123,    22,    16,    17,    18,    46,    43,    48,
      40,    50,    62,    94,    46,    65,    62,    10,    65,    65,
      44,    11,    65,    17,    17,    49,    16,    17,    18,     0,
      24,    61,    44,    78,    24,    25,    86,   147,    50,    43,
      70,    71,    27,    49,    29,    30,    31,    32,   106,     9,
      35,    36,    17,    83,   104,    43,    46,   104,   104,    24,
      50,    17,    47,    49,    50,    95,    96,    97,    98,    99,
     100,   101,     3,     4,     5,    43,     7,    16,    17,    18,
      35,    12,    13,    14,    16,    17,    17,    18,    49,    20,
      21,   141,    43,    24,   141,   141,   146,   147,   141,   146,
     146,    51,    52,   146,    46,    44,    16,    17,    18,    48,
      50,    50,   157,    44,    45,    49,   166,    35,    36,   166,
     166,    51,    52,   166,    43,    17,    15,    44,   173,    56,
      57,   181,    17,    49,   181,   181,    17,    43,   181,     3,
       4,     5,    17,     7,    43,    43,    16,    49,    12,    13,
      14,    51,    43,    17,    18,    17,    20,    21,    51,    43,
      24,     3,     4,     5,     6,     7,    43,    17,    10,    47,
      12,    13,    14,    52,    43,    17,    18,    17,    20,    21,
      44,    45,    24,     3,     4,     5,    42,     7,    17,    50,
      49,    27,    12,    13,    14,   170,   173,    17,    18,   104,
      20,    21,    44,    27,    24,    29,    30,    31,    32,     5,
     174,    35,    36,    27,    94,    29,    30,    31,    32,   132,
      -1,    35,    36,    47,    44,    -1,    -1,    -1,    27,    43,
      29,    30,    31,    32,    -1,    -1,    35,    36,    27,    -1,
      29,    30,    31,    32,    43,    -1,    35,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    10,    12,    13,    14,
      17,    18,    20,    21,    24,    44,    54,    55,    56,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      77,    79,    84,    85,    11,    16,    17,    18,    24,    25,
      46,    50,    59,    82,    83,    84,    85,    86,    87,    88,
      92,    94,    43,    57,    82,    17,    78,    77,    18,    43,
      78,    46,    22,    17,    56,    76,     0,    56,    65,    43,
      26,    48,    50,    49,    43,    10,    17,    67,    68,     9,
      69,    17,    67,    35,    43,    43,    46,    82,    16,    17,
      18,    67,    90,    91,    50,    27,    29,    30,    31,    32,
      35,    36,    43,    43,    44,    81,    80,    81,    17,    15,
      82,    59,    62,    45,    56,    82,    82,    17,    83,    87,
      93,    17,    69,    67,    70,    43,    69,    82,    17,    62,
      47,    51,    52,    93,    82,    82,    82,    82,    82,    82,
      82,    76,    43,    78,    43,    16,    47,    23,    49,    43,
      51,    46,    43,    69,    17,    71,    72,    73,    43,    47,
      49,    91,    51,    45,    43,    56,    62,    17,    47,    43,
      52,    16,    18,    48,    50,    67,    74,    75,    81,    89,
      17,    42,    56,    72,    74,    90,    56,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    54,    55,    55,    55,    55,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    57,    57,    58,    59,    59,    59,    60,
      61,    62,    62,    62,    63,    64,    64,    65,    65,    65,
      65,    65,    66,    66,    67,    68,    68,    70,    69,    69,
      71,    71,    72,    72,    72,    73,    74,    74,    74,    74,
      74,    75,    76,    76,    77,    78,    79,    80,    80,    81,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    83,    84,    85,    86,    86,    87,    88,
      89,    90,    90,    91,    91,    91,    92,    93,    93,    94,
      94,    94,    94,    94
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     2,     3,     2,
       3,     2,     2,     2,     2,     5,     2,     4,     3,     5,
       7,     6,     4,     1,     0,     3,     1,     1,     1,     1,
       3,     1,     1,     1,     4,     1,     3,     4,     3,     4,
       4,     5,     1,     2,     1,     1,     2,     0,     3,     0,
       1,     3,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     4,     1,     0,     3,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       3,     1,     4,     1,     3,     5,     1,     1,     1,     3,
       3,     1,     3,     1,     1,     1,     4,     1,     1,     3,
       3,     3,     3,     3
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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
#line 74 "tig.y" /* yacc.c:1646  */
    { tigC->encode((yyvsp[0].nPtr)); }
#line 1407 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 75 "tig.y" /* yacc.c:1646  */
    { ;}
#line 1413 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 79 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1419 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 80 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1425 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 81 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1431 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 82 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1437 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 86 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opPrint,(yyvsp[-1].nPtr)); }
#line 1443 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 87 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1449 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 88 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1455 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 89 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opEnd);}
#line 1461 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 90 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1467 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 91 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CStrStatement((yyvsp[-1].nPtr));}
#line 1473 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 92 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opStartTimer); }
#line 1479 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 93 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CTimedEventNode((yyvsp[-3].nPtr),(yyvsp[-1].iValue)); }
#line 1485 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 94 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CallDiscardNode((yyvsp[-1].nPtr)); }
#line 1491 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 95 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CHotTextNode((yyvsp[-2].str),(yyvsp[-1].str),NULL); }
#line 1497 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 96 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CReturnNode((yyvsp[-1].nPtr)); }
#line 1503 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 97 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CIfNode((yyvsp[-2].nPtr), (yyvsp[0].nPtr), NULL); }
#line 1509 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 98 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CIfNode((yyvsp[-4].nPtr), (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1515 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 99 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CForEachNode((yyvsp[-3].nPtr), (yyvsp[-1].nPtr), (yyvsp[0].nPtr)); }
#line 1521 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 100 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpAssignNode(opAdd,(yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1527 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 104 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1533 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 105 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = NULL; }
#line 1539 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 109 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAssign,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1545 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 114 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1551 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 115 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1557 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 116 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1563 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 120 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CVarAssigneeNode((yyvsp[0].str)); }
#line 1569 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 124 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjMemberAssigneeNode((yyvsp[-2].nPtr),(yyvsp[0].str)); }
#line 1575 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 128 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjRefNode((yyvsp[0].str)); }
#line 1581 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 129 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1587 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 130 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CSelfExprNode(); }
#line 1593 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 134 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayAssignNode((yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1599 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 138 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1605 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 139 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAdd, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1611 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 143 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CEventNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr)); }
#line 1617 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 144 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),NULL); }
#line 1623 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 145 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),(yyvsp[-3].nPtr)); }
#line 1629 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 146 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),NULL); }
#line 1635 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 147 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),(yyvsp[-3].nPtr)); }
#line 1641 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 153 "tig.y" /* yacc.c:1646  */
    { CSyntaxNode::childLevel++; }
#line 1647 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 154 "tig.y" /* yacc.c:1646  */
    { CSyntaxNode::childLevel++; }
#line 1653 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 159 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjIdentNode((yyvsp[0].str)); }
#line 1659 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 163 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new ClassIdentNode((yyvsp[0].str)); }
#line 1665 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 164 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),new ClassIdentNode((yyvsp[0].str))); }
#line 1671 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 168 "tig.y" /* yacc.c:1646  */
    { CSyntaxNode::funcMode(true); }
#line 1677 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 169 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1683 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 170 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = NULL; }
#line 1689 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 174 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1695 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 175 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1701 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 179 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberDeclNode((yyvsp[0].nPtr),NULL); }
#line 1707 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 180 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberDeclNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1713 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 181 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberDeclNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1719 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 185 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMembDeclIdentNode((yyvsp[0].str)); }
#line 1725 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 190 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((yyvsp[0].str)); }
#line 1731 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 191 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((yyvsp[0].iValue)); }
#line 1737 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 192 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((yyvsp[0].nPtr)); }
#line 1743 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 193 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((CObjIdentNode*)(yyvsp[0].nPtr)); }
#line 1749 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 194 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((CArrayInitListNode*)(yyvsp[0].nPtr)); }
#line 1755 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 198 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CFunctionDefNode((yyvsp[0].nPtr)); }
#line 1761 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 202 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1767 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 203 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1773 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 207 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CStrNode((yyvsp[0].str)); }
#line 1779 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 211 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CEventIdentNode((yyvsp[0].str)); }
#line 1785 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 215 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COptionNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1791 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 219 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1797 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 220 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = NULL; }
#line 1803 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 224 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CodeBlockNode((yyvsp[-1].nPtr)); }
#line 1809 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 228 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1815 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 229 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opGetString); }
#line 1821 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 230 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAdd, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1827 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 231 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opSub, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1833 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 232 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1839 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 233 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opCall, (yyvsp[0].nPtr)); }
#line 1845 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 234 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1851 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 235 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1857 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 236 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1863 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 237 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1869 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 238 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1875 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 239 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CSelfExprNode(); }
#line 1881 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 240 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opChildren,(yyvsp[-1].nPtr)); }
#line 1887 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 244 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CVarExprNode((yyvsp[0].str)); }
#line 1893 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 248 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberExprNode((yyvsp[-2].nPtr), (yyvsp[0].str)); }
#line 1899 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 253 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberCallNode((yyvsp[-4].nPtr), (yyvsp[-2].str),NULL); }
#line 1905 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 257 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1911 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 258 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CStrNode((yyvsp[0].str)); }
#line 1917 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 262 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CIntNode((yyvsp[0].iValue)); }
#line 1923 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 266 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitNode((yyvsp[-1].nPtr)); }
#line 1929 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 270 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitListNode((yyvsp[-1].nPtr)); }
#line 1935 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 274 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1941 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 275 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1947 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 279 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitConstNode((yyvsp[0].str)); }
#line 1953 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 280 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitConstNode((yyvsp[0].iValue)); }
#line 1959 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 281 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitConstNode((CObjIdentNode*)(yyvsp[0].nPtr)); }
#line 1965 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 286 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayElementExprNode((yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1971 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 290 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1977 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 291 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1983 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 296 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opEq, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1989 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 297 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opLT, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1995 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 298 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opLE, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2001 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 299 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opGT, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2007 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 300 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opGE, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2013 "tigParse.cpp" /* yacc.c:1646  */
    break;


#line 2017 "tigParse.cpp" /* yacc.c:1646  */
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
#line 303 "tig.y" /* yacc.c:1906  */


void yyerror(char *s) {
	fprintf(stdout, "\n%s, unexpected '%s' on line %d:", s, yytext,lineNo);
	rewind(yyin);
	char buf[500];
	for (int line=0; line < lineNo;line++)
		fgets(buf,500,yyin);
	fprintf(stdout, "\n%s", buf);
}
