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


    void yyerror(const char *);
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
    MAKE_HOT = 282,
    EQ = 283,
    NE = 284,
    GE = 285,
    LE = 286,
    OR = 287,
    AND = 288,
    UMINUS = 289,
    IFX = 290,
    ELSE = 291
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

#line 173 "tigParse.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TIGPARSE_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 188 "tigParse.cpp" /* yacc.c:358  */

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
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   437

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  213

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    40,     2,     2,
      47,    48,    38,    36,    53,    37,    50,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    44,
      33,    49,    31,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,    46,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    32,    34,    35,    41,
      42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    76,    76,    77,    81,    82,    83,    84,    88,    89,
      90,    91,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   109,   110,   114,   119,   120,   121,   125,
     129,   133,   134,   135,   139,   143,   144,   149,   150,   151,
     152,   153,   159,   160,   165,   169,   170,   174,   174,   176,
     180,   181,   185,   186,   187,   191,   195,   196,   211,   212,
     213,   214,   215,   219,   220,   224,   225,   229,   233,   246,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   268,   272,   276,   277,   282,
     283,   287,   291,   292,   297,   298,   302,   306,   310,   314,
     315,   319,   320,   321,   326,   330,   331,   336,   337,   338,
     339,   340
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
  "FOR", "EACH", "IN", "SELF", "CHILDREN", "ADD_ASSIGN", "MAKE_HOT", "EQ",
  "NE", "GE", "'>'", "LE", "'<'", "OR", "AND", "'+'", "'-'", "'*'", "'/'",
  "'%'", "UMINUS", "IFX", "ELSE", "';'", "'{'", "'}'", "'('", "')'", "'='",
  "'.'", "'['", "']'", "','", "$accept", "program", "tigcode", "statement",
  "return_expr", "assignment", "var_or_obj_memb", "variable_assignee",
  "obj_member_assignee", "obj_expr", "element_assignee",
  "string_statement", "dec_statement", "level", "obj_identifier",
  "class_identifier", "optional_member_list", "$@1", "member_decl_list",
  "member_decl", "memb_decl_identifier", "global_func_decl", "init_expr",
  "memb_function_def", "statement_list", "string_literal",
  "event_identifier", "code_block", "expression", "variable_expr",
  "member_expr", "member_call", "func_call", "func_indent", "param_list",
  "constant_expr", "integer_constant", "array_init_expr",
  "array_init_list", "constant_seq", "array_init_const",
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
     285,    62,   286,    60,   287,   288,    43,    45,    42,    47,
      37,   289,   290,   291,    59,   123,   125,    40,    41,    61,
      46,    91,    93,    44
};
# endif

#define YYPACT_NINF -126

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-126)))

#define YYTABLE_NINF -92

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     124,   308,   -37,   308,  -126,    45,   -27,    52,   245,  -126,
     -21,    51,  -126,   252,    80,   124,  -126,    48,     7,  -126,
    -126,    27,  -126,    68,  -126,    21,    87,   107,    88,   120,
    -126,    99,   113,   121,  -126,  -126,   108,  -126,   122,   129,
     130,   308,   147,   128,   375,  -126,   131,  -126,  -126,   133,
    -126,  -126,  -126,  -126,  -126,  -126,   138,   400,   166,  -126,
    -126,   173,   308,    33,   -32,  -126,   206,  -126,  -126,  -126,
    -126,   308,   308,    43,   172,  -126,  -126,   174,    87,   107,
    -126,   146,   175,    87,  -126,   308,  -126,  -126,    70,    38,
     308,   342,  -126,  -126,  -126,  -126,    13,  -126,    43,   308,
     308,   308,   308,   308,   308,   308,  -126,   266,  -126,   149,
     179,   352,   150,   -10,   154,  -126,  -126,   390,   400,  -126,
    -126,  -126,   145,    84,   167,   169,    87,   198,  -126,   177,
     400,   171,   400,    -4,  -126,    61,    15,  -126,  -126,   147,
     170,   103,   103,   103,   103,   103,  -126,  -126,  -126,    60,
    -126,   181,   252,    38,   211,  -126,  -126,   283,  -126,   185,
    -126,   178,  -126,   305,  -126,   252,  -126,   171,   308,  -126,
     218,   308,  -126,   186,  -126,  -126,   193,   102,   188,  -126,
      77,  -126,   198,  -126,  -126,   308,   320,   147,  -126,  -126,
    -126,  -126,  -126,   229,  -126,   400,  -126,   311,   252,  -126,
    -126,  -126,    98,  -126,    97,  -126,   308,  -126,   171,  -126,
     365,  -126,  -126
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,    24,    42,     0,     0,     0,    29,    67,
       0,     0,    33,     0,     0,     2,     4,     0,     0,    26,
      27,     0,    28,     0,     6,     0,    49,     0,     0,    35,
      32,     0,     0,     0,    71,    96,    85,    95,    82,     0,
       0,     0,     0,     0,     0,    70,    74,    75,    76,     0,
      77,    94,    78,    79,    80,    11,     0,    23,     0,    13,
      68,     0,     0,     0,    29,    65,     0,     1,     5,     7,
       9,     0,     0,     0,     0,    12,    43,    44,    49,     0,
      47,     0,    44,    49,    41,     0,    15,    16,     0,     0,
       0,     0,   102,    44,   101,   103,     0,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     0,    18,     0,
       0,     0,    29,     0,     0,    10,    66,     0,    25,    85,
     105,   106,     0,    86,     0,     0,    49,     0,    37,     0,
      36,    90,    92,     0,    31,     0,     0,    81,    97,     0,
       0,   107,   111,   110,   109,   108,    72,    73,    90,     0,
      17,     0,     0,     0,     0,    22,    34,     0,    39,     0,
      55,    48,    50,    52,    38,     0,    57,    89,     0,    83,
       0,     0,   100,   104,    89,    14,    19,     0,    30,    88,
       0,    40,     0,    59,    58,     0,     0,     0,    61,    54,
      60,    64,    62,     0,    56,    93,    86,     0,     0,    21,
      87,    51,     0,    53,     0,    69,     0,    20,     0,    98,
       0,    63,    84
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,  -126,    10,  -126,  -126,     9,  -126,  -126,   -60,
    -126,  -126,   224,  -126,    12,   215,   -48,  -126,  -126,    62,
    -126,  -126,    59,  -126,    83,  -126,  -126,  -125,    -1,   -62,
       1,     8,    19,     5,  -103,  -126,   -45,  -126,  -126,    71,
     132,  -126,   161,  -126
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    65,    56,    17,    43,    19,    20,    21,
      22,    23,    24,    25,    95,    27,    81,   127,   161,   162,
     163,    28,   189,   190,    66,    29,    61,   191,   132,    45,
      46,    47,    48,    49,   133,    50,    51,    52,   192,    96,
      97,    53,   122,    54
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    30,    57,   114,   149,    33,   166,    55,    31,    18,
      16,   120,    26,   153,    30,   -91,    30,    59,   -31,    32,
      33,    31,    18,    31,    18,    68,    62,    26,   121,   135,
     125,    76,    32,    71,    32,   129,   120,    78,    77,    83,
      91,    73,   194,    99,   167,   100,   101,   102,   103,   168,
     112,   104,   105,   121,   180,   134,    72,    12,    73,    35,
     119,   111,    12,    58,    30,   138,   139,    30,   171,    60,
     117,   118,   113,    63,    31,    18,   116,    74,   159,   124,
      67,    34,   202,   211,   130,    32,    35,    36,    37,   136,
      30,   126,    70,   177,    38,    39,    80,    40,   141,   142,
     143,   144,   145,   146,   147,     1,     2,     3,   174,   169,
     -30,   170,    75,   168,     5,     6,     7,    41,   131,    64,
       9,    42,    10,    11,    82,   200,    12,     1,     2,     3,
     168,   -91,    84,   -30,     4,   -30,     5,     6,     7,   104,
     105,     8,     9,    86,    10,    11,   208,    13,    12,   209,
     139,   168,   170,    30,    30,   -91,    85,    87,   -31,   -29,
      31,    18,   176,    92,    93,    94,    30,   195,    88,    13,
     197,    32,   -33,    31,    18,   188,    89,    90,    30,    98,
     107,   -32,   108,   109,    32,    31,    18,   199,   110,   123,
     128,   -45,   -46,   150,    30,   151,    32,   156,   188,    30,
     -31,    31,    18,   116,   154,   210,    31,    18,   207,     1,
       2,     3,    32,   158,   157,   160,   165,    32,     5,     6,
       7,   164,   173,    64,     9,   175,    10,    11,   178,   181,
      12,   182,     1,     2,     3,   196,   198,   -34,   -86,    69,
      79,     5,     6,     7,   201,   203,    64,     9,   193,    10,
      11,    13,   115,    12,   -44,     1,     2,     3,   204,   140,
       0,     0,   -45,     0,     5,     6,     7,     0,     0,    64,
       9,   172,    10,    11,    13,   205,    12,    34,     0,     0,
       0,     0,    35,    36,    37,     0,     0,     0,     0,   -44,
      38,    39,   -91,    40,    34,   -31,     0,    13,     0,    35,
      36,    37,     0,     0,     0,     0,     0,    38,    39,     0,
      40,     0,     0,    41,   148,     0,     0,    42,     0,    34,
       0,   183,    93,   184,    35,    36,    37,     0,     0,     0,
      41,   179,    38,    39,    42,    40,   183,    93,   184,    99,
       0,   100,   101,   102,   103,     0,     0,   104,   105,     0,
     165,     0,   185,     0,   186,    41,   187,     0,     0,    42,
       0,     0,     0,     0,   206,   165,     0,   185,     0,     0,
      99,   187,   100,   101,   102,   103,     0,     0,   104,   105,
      99,     0,   100,   101,   102,   103,     0,     0,   104,   105,
     137,     0,     0,    99,     0,   100,   101,   102,   103,     0,
     152,   104,   105,    99,     0,   100,   101,   102,   103,     0,
       0,   104,   105,   212,     0,     0,     0,     0,    99,   106,
     100,   101,   102,   103,     0,     0,   104,   105,    99,     0,
     100,   101,   102,   103,   155,     0,   104,   105
};

static const yytype_int16 yycheck[] =
{
       1,     0,     3,    63,   107,     0,   131,    44,     0,     0,
       0,    73,     0,    23,    13,    47,    15,    44,    50,     0,
      15,    13,    13,    15,    15,    15,    47,    15,    73,    89,
      78,    10,    13,    26,    15,    83,    98,    25,    17,    27,
      41,    51,   167,    28,    48,    30,    31,    32,    33,    53,
      17,    36,    37,    98,   157,    17,    49,    24,    51,    16,
      17,    62,    24,    18,    63,    52,    53,    66,    53,    17,
      71,    72,    63,    22,    66,    66,    66,    50,   126,    74,
       0,    11,   185,   208,    85,    66,    16,    17,    18,    90,
      89,    79,    44,   153,    24,    25,     9,    27,    99,   100,
     101,   102,   103,   104,   105,     3,     4,     5,    48,    48,
      26,    50,    44,    53,    12,    13,    14,    47,    48,    17,
      18,    51,    20,    21,    17,    48,    24,     3,     4,     5,
      53,    47,    44,    49,    10,    51,    12,    13,    14,    36,
      37,    17,    18,    44,    20,    21,    48,    45,    24,    52,
      53,    53,    50,   152,   153,    47,    36,    44,    50,    51,
     152,   152,   152,    16,    17,    18,   165,   168,    47,    45,
     171,   152,    50,   165,   165,   163,    47,    47,   177,    51,
      47,    50,    44,    17,   165,   177,   177,   177,    15,    17,
      44,    17,    17,    44,   193,    16,   177,    52,   186,   198,
      50,   193,   193,   193,    50,   206,   198,   198,   198,     3,
       4,     5,   193,    44,    47,    17,    45,   198,    12,    13,
      14,    44,    52,    17,    18,    44,    20,    21,    17,    44,
      24,    53,     3,     4,     5,    17,    43,    51,    50,    15,
      25,    12,    13,    14,   182,   186,    17,    18,   165,    20,
      21,    45,    46,    24,     9,     3,     4,     5,   187,    98,
      -1,    -1,    17,    -1,    12,    13,    14,    -1,    -1,    17,
      18,   139,    20,    21,    45,    46,    24,    11,    -1,    -1,
      -1,    -1,    16,    17,    18,    -1,    -1,    -1,    -1,    44,
      24,    25,    47,    27,    11,    50,    -1,    45,    -1,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,
      27,    -1,    -1,    47,    48,    -1,    -1,    51,    -1,    11,
      -1,    16,    17,    18,    16,    17,    18,    -1,    -1,    -1,
      47,    48,    24,    25,    51,    27,    16,    17,    18,    28,
      -1,    30,    31,    32,    33,    -1,    -1,    36,    37,    -1,
      45,    -1,    47,    -1,    49,    47,    51,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    53,    45,    -1,    47,    -1,    -1,
      28,    51,    30,    31,    32,    33,    -1,    -1,    36,    37,
      28,    -1,    30,    31,    32,    33,    -1,    -1,    36,    37,
      48,    -1,    -1,    28,    -1,    30,    31,    32,    33,    -1,
      48,    36,    37,    28,    -1,    30,    31,    32,    33,    -1,
      -1,    36,    37,    48,    -1,    -1,    -1,    -1,    28,    44,
      30,    31,    32,    33,    -1,    -1,    36,    37,    28,    -1,
      30,    31,    32,    33,    44,    -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    10,    12,    13,    14,    17,    18,
      20,    21,    24,    45,    55,    56,    57,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    75,    79,
      84,    85,    86,    87,    11,    16,    17,    18,    24,    25,
      27,    47,    51,    60,    82,    83,    84,    85,    86,    87,
      89,    90,    91,    95,    97,    44,    58,    82,    18,    44,
      17,    80,    47,    22,    17,    57,    78,     0,    57,    66,
      44,    26,    49,    51,    50,    44,    10,    17,    68,    69,
       9,    70,    17,    68,    44,    36,    44,    44,    47,    47,
      47,    82,    16,    17,    18,    68,    93,    94,    51,    28,
      30,    31,    32,    33,    36,    37,    44,    47,    44,    17,
      15,    82,    17,    60,    63,    46,    57,    82,    82,    17,
      83,    90,    96,    17,    87,    70,    68,    71,    44,    70,
      82,    48,    82,    88,    17,    63,    82,    48,    52,    53,
      96,    82,    82,    82,    82,    82,    82,    82,    48,    88,
      44,    16,    48,    23,    50,    44,    52,    47,    44,    70,
      17,    72,    73,    74,    44,    45,    81,    48,    53,    48,
      50,    53,    94,    52,    48,    44,    57,    63,    17,    48,
      88,    44,    53,    16,    18,    47,    49,    51,    68,    76,
      77,    81,    92,    78,    81,    82,    17,    82,    43,    57,
      48,    73,    88,    76,    93,    46,    53,    57,    48,    52,
      82,    81,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    55,    56,    56,    56,    56,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    58,    58,    59,    60,    60,    60,    61,
      62,    63,    63,    63,    64,    65,    65,    66,    66,    66,
      66,    66,    67,    67,    68,    69,    69,    71,    70,    70,
      72,    72,    73,    73,    73,    74,    75,    75,    76,    76,
      76,    76,    76,    77,    77,    78,    78,    79,    80,    81,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    83,    84,    85,    85,    86,
      86,    87,    88,    88,    89,    89,    90,    91,    92,    93,
      93,    94,    94,    94,    95,    96,    96,    97,    97,    97,
      97,    97
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     2,     3,     2,
       3,     2,     2,     2,     5,     2,     2,     4,     3,     5,
       7,     6,     4,     1,     0,     3,     1,     1,     1,     1,
       3,     1,     1,     1,     4,     1,     3,     3,     4,     4,
       5,     2,     1,     2,     1,     1,     2,     0,     3,     0,
       1,     3,     1,     3,     2,     1,     5,     4,     1,     1,
       1,     1,     1,     4,     1,     1,     2,     1,     1,     3,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     4,     8,     1,     3,     6,     5,     4,
       3,     1,     1,     3,     1,     1,     1,     3,     3,     1,
       3,     1,     1,     1,     4,     1,     1,     3,     3,     3,
       3,     3
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
#line 76 "tig.y" /* yacc.c:1646  */
    { tigC->encode((yyvsp[0].nPtr)); }
#line 1449 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 77 "tig.y" /* yacc.c:1646  */
    { ;}
#line 1455 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 81 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1461 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 82 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1467 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 83 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1473 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 84 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1479 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 88 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opPrint,(yyvsp[-1].nPtr)); }
#line 1485 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 89 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1491 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 90 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1497 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 91 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opEnd);}
#line 1503 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 93 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CStrStatement((yyvsp[-1].nPtr));}
#line 1509 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 94 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opStartTimer); }
#line 1515 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 95 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CTimedEventNode((yyvsp[-3].nPtr),(yyvsp[-1].iValue)); }
#line 1521 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 96 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CallDiscardNode((yyvsp[-1].nPtr)); }
#line 1527 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 97 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CallDiscardNode((yyvsp[-1].nPtr)); }
#line 1533 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 98 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CHotTextNode((yyvsp[-2].str),(yyvsp[-1].str),NULL); }
#line 1539 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 99 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CReturnNode((yyvsp[-1].nPtr)); }
#line 1545 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 100 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CIfNode((yyvsp[-2].nPtr), (yyvsp[0].nPtr), NULL); }
#line 1551 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 101 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CIfNode((yyvsp[-4].nPtr), (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1557 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 102 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CForEachNode((yyvsp[-3].nPtr), (yyvsp[-1].nPtr), (yyvsp[0].nPtr)); }
#line 1563 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 103 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpAssignNode(opAdd,(yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1569 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 109 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1575 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 110 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = NULL; }
#line 1581 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 114 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAssign,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1587 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 119 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1593 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 120 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1599 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 121 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1605 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 125 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CVarAssigneeNode((yyvsp[0].str)); }
#line 1611 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 129 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjMemberAssigneeNode((yyvsp[-2].nPtr),(yyvsp[0].str)); }
#line 1617 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 133 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjRefNode((yyvsp[0].str)); }
#line 1623 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 134 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1629 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 135 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CSelfExprNode(); }
#line 1635 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 139 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayAssignNode((yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1641 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 143 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1647 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 144 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAdd, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1653 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 149 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),NULL); }
#line 1659 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 150 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),(yyvsp[-3].nPtr)); }
#line 1665 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 151 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),NULL); }
#line 1671 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 152 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),(yyvsp[-3].nPtr)); }
#line 1677 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 153 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1683 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 159 "tig.y" /* yacc.c:1646  */
    { CSyntaxNode::childLevel++; }
#line 1689 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 160 "tig.y" /* yacc.c:1646  */
    { CSyntaxNode::childLevel++; }
#line 1695 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 165 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjIdentNode((yyvsp[0].str)); }
#line 1701 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 169 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new ClassIdentNode((yyvsp[0].str)); }
#line 1707 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 170 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),new ClassIdentNode((yyvsp[0].str))); }
#line 1713 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 174 "tig.y" /* yacc.c:1646  */
    { CSyntaxNode::funcMode(true); }
#line 1719 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 175 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1725 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 176 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = NULL; }
#line 1731 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 180 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1737 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 181 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1743 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 185 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberDeclNode((yyvsp[0].nPtr),NULL); }
#line 1749 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 186 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberDeclNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1755 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 187 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberDeclNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1761 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 191 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMembDeclIdentNode((yyvsp[0].str)); }
#line 1767 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 195 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CGlobalFuncDeclNode((yyvsp[-4].nPtr),(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1773 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 196 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CGlobalFuncDeclNode((yyvsp[-3].nPtr),NULL,(yyvsp[0].nPtr)); }
#line 1779 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 211 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((yyvsp[0].str)); }
#line 1785 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 212 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((yyvsp[0].iValue)); }
#line 1791 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 213 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((yyvsp[0].nPtr)); }
#line 1797 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 214 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((CObjIdentNode*)(yyvsp[0].nPtr)); }
#line 1803 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 215 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((CArrayInitListNode*)(yyvsp[0].nPtr)); }
#line 1809 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 219 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CFunctionDefNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1815 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 220 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CFunctionDefNode(NULL,(yyvsp[0].nPtr)); }
#line 1821 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 224 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1827 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 225 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1833 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 229 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CStrNode((yyvsp[0].str)); }
#line 1839 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 233 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CEventIdentNode((yyvsp[0].str)); }
#line 1845 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 246 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CodeBlockNode((yyvsp[-1].nPtr)); }
#line 1851 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 250 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1857 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 251 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opGetString); }
#line 1863 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 252 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAdd, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1869 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 253 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opSub, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1875 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 254 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1881 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 255 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1887 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 256 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1893 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 257 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1899 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 258 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1905 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 259 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1911 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 260 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1917 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 261 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1923 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 262 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CSelfExprNode(); }
#line 1929 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 263 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opChildren,(yyvsp[-1].nPtr)); }
#line 1935 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 264 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opMakeHot,(yyvsp[-5].nPtr),(yyvsp[-3].nPtr),(yyvsp[-1].nPtr));}
#line 1941 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 268 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CVarExprNode((yyvsp[0].str)); }
#line 1947 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 272 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberExprNode((yyvsp[-2].nPtr), (yyvsp[0].str)); }
#line 1953 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 276 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberCallNode((yyvsp[-5].nPtr), (yyvsp[-3].nPtr), (yyvsp[-1].nPtr)); }
#line 1959 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 277 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberCallNode((yyvsp[-4].nPtr), (yyvsp[-2].nPtr), NULL); }
#line 1965 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 282 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberCallNode(NULL, (yyvsp[-3].nPtr), (yyvsp[-1].nPtr)); }
#line 1971 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 283 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberCallNode(NULL, (yyvsp[-2].nPtr), NULL); }
#line 1977 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 287 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CFuncIdentNode((yyvsp[0].str)); }
#line 1983 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 291 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CParamExprNode((yyvsp[0].nPtr)); }
#line 1989 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 292 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-2].nPtr),new CParamExprNode((yyvsp[0].nPtr))); }
#line 1995 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 297 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2001 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 298 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CStrNode((yyvsp[0].str)); }
#line 2007 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 302 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CIntNode((yyvsp[0].iValue)); }
#line 2013 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 306 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitNode((yyvsp[-1].nPtr)); }
#line 2019 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 310 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitListNode((yyvsp[-1].nPtr)); }
#line 2025 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 314 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2031 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 315 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 2037 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 319 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitConstNode((yyvsp[0].str)); }
#line 2043 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 320 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitConstNode((yyvsp[0].iValue)); }
#line 2049 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 321 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitConstNode((CObjIdentNode*)(yyvsp[0].nPtr)); }
#line 2055 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 326 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayElementExprNode((yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 2061 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 330 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2067 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 331 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2073 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 336 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opEq, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2079 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 337 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opLT, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2085 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 338 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opLE, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2091 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 339 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opGT, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2097 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 340 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opGE, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2103 "tigParse.cpp" /* yacc.c:1646  */
    break;


#line 2107 "tigParse.cpp" /* yacc.c:1646  */
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
#line 343 "tig.y" /* yacc.c:1906  */


void yyerror(const char *s) {
	fprintf(stdout, "\n%s, unexpected '%s' on line %d:", s, yytext,lineNo);
	rewind(yyin);
	char buf[500];
	for (int line=0; line < lineNo;line++)
		fgets(buf,500,yyin);
	fprintf(stdout, "\n%s", buf);
}
