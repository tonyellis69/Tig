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
#define YYFINAL  69
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   362

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  204

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
       0,    75,    75,    76,    80,    81,    82,    83,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   105,   106,   110,   115,   116,   117,   121,
     125,   129,   130,   131,   135,   139,   140,   144,   145,   146,
     147,   148,   149,   155,   156,   161,   165,   166,   170,   170,
     172,   176,   177,   181,   182,   183,   187,   191,   196,   197,
     198,   199,   200,   204,   208,   209,   213,   217,   221,   225,
     226,   230,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   251,   255,   259,   260,
     264,   265,   269,   273,   277,   281,   282,   286,   287,   288,
     293,   297,   298,   303,   304,   305,   306,   307
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
  "event_identifier", "option", "optional_code_block", "code_block",
  "expression", "variable_expr", "member_expr", "member_call",
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

#define YYPACT_NINF -69

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-69)))

#define YYTABLE_NINF -88

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     201,   234,   -29,   234,    17,    30,   -69,    40,    12,    17,
      32,   -69,    21,    37,   -69,   223,    75,   201,   -69,    41,
      83,   -69,   -69,    36,   -69,    44,   -69,     3,    88,    95,
      69,    82,    81,   -69,    97,   -69,   -69,   130,   -69,   101,
      98,   106,   234,   168,   117,   305,   -69,   104,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   113,   325,   -69,   128,   128,
     158,   -69,   161,   140,   234,     8,   -19,   -69,   103,   -69,
     -69,   -69,   -69,   234,   234,    -6,   172,   -69,   -69,   173,
      88,    95,   -69,   134,   175,    88,   -69,   234,   -69,   -69,
     145,    43,   234,   268,   -69,   -69,   -69,   -69,    28,   -69,
      -6,   234,   234,   234,   234,   234,   234,   234,   -69,   -69,
     223,   150,    17,   -69,   153,   184,   128,   282,   151,    -9,
     152,   -69,   -69,   315,   325,   -69,   -69,   -69,   157,   116,
     166,    88,   195,   -69,   176,   325,   -69,   -69,    14,   239,
     -69,   -69,   168,   164,     7,     7,     7,     7,     7,   -69,
     -69,   126,   -69,   -69,   -69,   179,   -69,   223,    43,   200,
     -69,   -69,   181,   -69,   180,   -69,   178,   -69,    77,   -69,
     -69,   215,   234,   -69,   182,   -69,   -69,   191,    33,   188,
     -69,   -69,   195,   -69,   -69,   119,   168,   -69,   -69,   -69,
     -69,   -69,   -69,   258,   223,   -69,   -69,   -69,    38,   234,
     -69,   -69,   292,   -69
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,    24,     0,     0,    43,     0,     0,     0,
      29,    66,     0,     0,    33,     0,     0,     2,     4,     0,
       0,    26,    27,     0,    28,     0,     6,     0,    50,     0,
       0,    35,     0,    32,     0,    73,    92,    86,    91,    83,
       0,     0,     0,     0,     0,     0,    72,    76,    77,    78,
      90,    79,    80,    81,    11,     0,    23,    67,     0,    70,
       0,    14,     0,     0,     0,     0,    29,    64,     0,     1,
       5,     7,     9,     0,     0,     0,     0,    13,    44,    45,
      50,     0,    48,     0,    45,    50,    42,     0,    12,    16,
       0,     0,     0,     0,    98,    45,    97,    99,     0,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     8,    18,
       0,     0,     0,    69,     0,     0,    89,     0,    29,     0,
       0,    10,    65,     0,    25,    86,   101,   102,     0,    87,
       0,    50,     0,    38,     0,    36,    89,    31,     0,     0,
      82,    93,     0,     0,   103,   107,   106,   105,   104,    74,
      75,     0,    37,    68,    17,     0,    57,     0,     0,     0,
      22,    34,     0,    40,     0,    56,    49,    51,    53,    39,
      84,     0,     0,    96,   100,    71,    15,    19,     0,    30,
      88,    41,     0,    59,    58,     0,     0,    61,    55,    60,
      63,    62,    87,     0,     0,    21,    52,    54,     0,     0,
      20,    94,     0,    85
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -69,   -69,   -69,     5,   -69,   -69,     9,   -69,   -69,   -62,
     -69,   -69,   222,   -69,     6,   221,   -68,   -69,   -69,    60,
     -69,   -69,    64,   -69,   143,   249,    -7,   -69,   -69,   -51,
      -3,   -48,     1,     4,   -69,   -45,   -69,   -69,    70,   115,
     -69,   155,   -69
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    17,    67,    55,    19,    44,    21,    22,    23,
      24,    25,    26,    27,    97,    29,    83,   132,   166,   167,
     168,    30,   188,   189,    68,    31,    58,    32,   112,   190,
      45,    46,    47,    48,    49,    50,    51,   191,    98,    99,
      52,   128,    53
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      56,    33,    62,   120,    34,    18,    28,   111,   113,    20,
      36,   125,   130,    78,   158,    54,    33,   134,    33,    34,
      79,    34,    70,    28,    20,   118,    20,   126,    90,   138,
     127,   -31,    14,    80,    57,    85,     1,     2,     3,    93,
       5,   -45,    75,   106,   107,     7,     8,     9,    11,   -46,
      66,    11,   126,    12,    13,   127,    61,    14,    60,    65,
     137,   117,   170,   164,   171,   156,    33,    14,    64,    33,
     123,   124,    34,   122,   119,    69,   -45,    20,    15,    63,
     141,   142,   -31,   171,   135,    72,    76,   131,    77,   139,
     201,   142,    33,   183,    95,   184,   178,    82,   144,   145,
     146,   147,   148,   149,   150,   153,     1,     2,     3,    73,
       5,    33,    84,    86,    34,     7,     8,     9,    87,    20,
      66,    11,   110,    12,    13,    88,   185,    14,   186,     1,
       2,     3,    74,     5,    75,   183,    95,   184,     7,     8,
       9,    89,   -30,    66,    11,    91,    12,    13,    15,   121,
      14,   -33,    33,    92,   -32,    34,   122,   109,    33,    33,
      20,    34,   177,   162,   110,   -30,    20,   -30,   100,   193,
     186,    15,   175,   110,   187,   114,   115,    90,   133,    33,
     -31,   -29,    34,   195,    94,    95,    96,    20,   116,   129,
     -46,   187,   -47,   136,   152,    33,   202,   154,    34,   200,
     155,   -31,   159,    20,     1,     2,     3,     4,     5,   161,
     163,     6,   165,     7,     8,     9,   174,   179,    10,    11,
     169,    12,    13,   176,   181,    14,     1,     2,     3,   180,
       5,   182,   192,   -34,   194,     7,     8,     9,   -87,    71,
      66,    11,   196,    12,    13,    35,    15,    14,    81,   197,
      36,    37,    38,   151,    59,   143,   198,   173,    39,    40,
       0,    41,     0,     0,     0,     0,     0,   101,    15,   102,
     103,   104,   105,     0,     0,   106,   107,     0,     0,     0,
       0,    42,     0,     0,     0,    43,   101,     0,   102,   103,
     104,   105,   172,     0,   106,   107,   101,     0,   102,   103,
     104,   105,     0,     0,   106,   107,     0,     0,     0,     0,
     101,   199,   102,   103,   104,   105,   140,     0,   106,   107,
     101,     0,   102,   103,   104,   105,     0,     0,   106,   107,
     157,     0,     0,   101,     0,   102,   103,   104,   105,     0,
     203,   106,   107,   101,     0,   102,   103,   104,   105,   108,
       0,   106,   107,   101,     0,   102,   103,   104,   105,   160,
       0,   106,   107
};

static const yytype_int16 yycheck[] =
{
       3,     0,     9,    65,     0,     0,     0,    58,    59,     0,
      16,    17,    80,    10,    23,    44,    15,    85,    17,    15,
      17,    17,    17,    17,    15,    17,    17,    75,    47,    91,
      75,    50,    24,    27,    17,    29,     3,     4,     5,    42,
       7,     9,    51,    36,    37,    12,    13,    14,    18,    17,
      17,    18,   100,    20,    21,   100,    44,    24,    18,    22,
      17,    64,    48,   131,    50,   116,    65,    24,    47,    68,
      73,    74,    68,    68,    65,     0,    44,    68,    45,    47,
      52,    53,    50,    50,    87,    44,    50,    81,    44,    92,
      52,    53,    91,    16,    17,    18,   158,     9,   101,   102,
     103,   104,   105,   106,   107,   112,     3,     4,     5,    26,
       7,   110,    17,    44,   110,    12,    13,    14,    36,   110,
      17,    18,    45,    20,    21,    44,    49,    24,    51,     3,
       4,     5,    49,     7,    51,    16,    17,    18,    12,    13,
      14,    44,    26,    17,    18,    47,    20,    21,    45,    46,
      24,    50,   151,    47,    50,   151,   151,    44,   157,   158,
     151,   157,   157,    47,    45,    49,   157,    51,    51,   172,
      51,    45,    46,    45,   168,    17,    15,    47,    44,   178,
      50,    51,   178,   178,    16,    17,    18,   178,    48,    17,
      17,   185,    17,    48,    44,   194,   199,    44,   194,   194,
      16,    50,    50,   194,     3,     4,     5,     6,     7,    52,
      44,    10,    17,    12,    13,    14,    52,    17,    17,    18,
      44,    20,    21,    44,    44,    24,     3,     4,     5,    48,
       7,    53,    17,    51,    43,    12,    13,    14,    50,    17,
      17,    18,   182,    20,    21,    11,    45,    24,    27,   185,
      16,    17,    18,   110,     5,   100,   186,   142,    24,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    28,    45,    30,
      31,    32,    33,    -1,    -1,    36,    37,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    51,    28,    -1,    30,    31,
      32,    33,    53,    -1,    36,    37,    28,    -1,    30,    31,
      32,    33,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,
      28,    53,    30,    31,    32,    33,    48,    -1,    36,    37,
      28,    -1,    30,    31,    32,    33,    -1,    -1,    36,    37,
      48,    -1,    -1,    28,    -1,    30,    31,    32,    33,    -1,
      48,    36,    37,    28,    -1,    30,    31,    32,    33,    44,
      -1,    36,    37,    28,    -1,    30,    31,    32,    33,    44,
      -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    10,    12,    13,    14,
      17,    18,    20,    21,    24,    45,    55,    56,    57,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      75,    79,    81,    86,    87,    11,    16,    17,    18,    24,
      25,    27,    47,    51,    60,    84,    85,    86,    87,    88,
      89,    90,    94,    96,    44,    58,    84,    17,    80,    79,
      18,    44,    80,    47,    47,    22,    17,    57,    78,     0,
      57,    66,    44,    26,    49,    51,    50,    44,    10,    17,
      68,    69,     9,    70,    17,    68,    44,    36,    44,    44,
      47,    47,    47,    84,    16,    17,    18,    68,    92,    93,
      51,    28,    30,    31,    32,    33,    36,    37,    44,    44,
      45,    83,    82,    83,    17,    15,    48,    84,    17,    60,
      63,    46,    57,    84,    84,    17,    85,    89,    95,    17,
      70,    68,    71,    44,    70,    84,    48,    17,    63,    84,
      48,    52,    53,    95,    84,    84,    84,    84,    84,    84,
      84,    78,    44,    80,    44,    16,    83,    48,    23,    50,
      44,    52,    47,    44,    70,    17,    72,    73,    74,    44,
      48,    50,    53,    93,    52,    46,    44,    57,    63,    17,
      48,    44,    53,    16,    18,    49,    51,    68,    76,    77,
      83,    91,    17,    84,    43,    57,    73,    76,    92,    53,
      57,    52,    84,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    55,    56,    56,    56,    56,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    58,    58,    59,    60,    60,    60,    61,
      62,    63,    63,    63,    64,    65,    65,    66,    66,    66,
      66,    66,    66,    67,    67,    68,    69,    69,    71,    70,
      70,    72,    72,    73,    73,    73,    74,    75,    76,    76,
      76,    76,    76,    77,    78,    78,    79,    80,    81,    82,
      82,    83,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    85,    86,    87,    87,
      88,    88,    89,    90,    91,    92,    92,    93,    93,    93,
      94,    95,    95,    96,    96,    96,    96,    96
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     2,     3,     2,
       3,     2,     2,     2,     2,     5,     2,     4,     3,     5,
       7,     6,     4,     1,     0,     3,     1,     1,     1,     1,
       3,     1,     1,     1,     4,     1,     3,     4,     3,     4,
       4,     5,     2,     1,     2,     1,     1,     2,     0,     3,
       0,     1,     3,     1,     3,     2,     1,     4,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     4,     1,
       0,     3,     1,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     3,     1,     4,     8,     1,     3,     5,     3,
       1,     1,     1,     3,     3,     1,     3,     1,     1,     1,
       4,     1,     1,     3,     3,     3,     3,     3
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
#line 75 "tig.y" /* yacc.c:1646  */
    { tigC->encode((yyvsp[0].nPtr)); }
#line 1429 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 76 "tig.y" /* yacc.c:1646  */
    { ;}
#line 1435 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 80 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1441 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 81 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1447 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 82 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1453 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 83 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1459 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 87 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opPrint,(yyvsp[-1].nPtr)); }
#line 1465 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 88 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1471 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 89 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1477 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 90 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opEnd);}
#line 1483 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 91 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1489 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 92 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CStrStatement((yyvsp[-1].nPtr));}
#line 1495 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 93 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opStartTimer); }
#line 1501 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 94 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CTimedEventNode((yyvsp[-3].nPtr),(yyvsp[-1].iValue)); }
#line 1507 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 95 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CallDiscardNode((yyvsp[-1].nPtr)); }
#line 1513 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 96 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CHotTextNode((yyvsp[-2].str),(yyvsp[-1].str),NULL); }
#line 1519 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 97 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CReturnNode((yyvsp[-1].nPtr)); }
#line 1525 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 98 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CIfNode((yyvsp[-2].nPtr), (yyvsp[0].nPtr), NULL); }
#line 1531 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 99 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CIfNode((yyvsp[-4].nPtr), (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1537 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 100 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CForEachNode((yyvsp[-3].nPtr), (yyvsp[-1].nPtr), (yyvsp[0].nPtr)); }
#line 1543 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 101 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpAssignNode(opAdd,(yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1549 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 105 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1555 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 106 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = NULL; }
#line 1561 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 110 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAssign,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1567 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 115 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1573 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 116 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1579 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 117 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1585 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 121 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CVarAssigneeNode((yyvsp[0].str)); }
#line 1591 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 125 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjMemberAssigneeNode((yyvsp[-2].nPtr),(yyvsp[0].str)); }
#line 1597 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 129 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjRefNode((yyvsp[0].str)); }
#line 1603 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 130 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1609 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 131 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CSelfExprNode(); }
#line 1615 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 135 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayAssignNode((yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1621 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 139 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1627 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 140 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAdd, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1633 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 144 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CEventNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr)); }
#line 1639 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 145 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),NULL); }
#line 1645 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 146 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),(yyvsp[-3].nPtr)); }
#line 1651 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 147 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),NULL); }
#line 1657 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 148 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),(yyvsp[-3].nPtr)); }
#line 1663 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 149 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1669 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 155 "tig.y" /* yacc.c:1646  */
    { CSyntaxNode::childLevel++; }
#line 1675 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 156 "tig.y" /* yacc.c:1646  */
    { CSyntaxNode::childLevel++; }
#line 1681 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 161 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjIdentNode((yyvsp[0].str)); }
#line 1687 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 165 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new ClassIdentNode((yyvsp[0].str)); }
#line 1693 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 166 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),new ClassIdentNode((yyvsp[0].str))); }
#line 1699 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 170 "tig.y" /* yacc.c:1646  */
    { CSyntaxNode::funcMode(true); }
#line 1705 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 171 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1711 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 172 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = NULL; }
#line 1717 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 176 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1723 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 177 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1729 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 181 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberDeclNode((yyvsp[0].nPtr),NULL); }
#line 1735 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 182 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberDeclNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1741 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 183 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberDeclNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1747 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 187 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMembDeclIdentNode((yyvsp[0].str)); }
#line 1753 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 191 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CGlobalFuncDeclNode((yyvsp[-3].str),NULL,(yyvsp[0].nPtr)); }
#line 1759 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 196 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((yyvsp[0].str)); }
#line 1765 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 197 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((yyvsp[0].iValue)); }
#line 1771 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 198 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((yyvsp[0].nPtr)); }
#line 1777 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 199 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((CObjIdentNode*)(yyvsp[0].nPtr)); }
#line 1783 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 200 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((CArrayInitListNode*)(yyvsp[0].nPtr)); }
#line 1789 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 204 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CFunctionDefNode((yyvsp[0].nPtr)); }
#line 1795 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 208 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1801 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 209 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1807 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 213 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CStrNode((yyvsp[0].str)); }
#line 1813 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 217 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CEventIdentNode((yyvsp[0].str)); }
#line 1819 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 221 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COptionNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1825 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 225 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1831 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 226 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = NULL; }
#line 1837 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 230 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CodeBlockNode((yyvsp[-1].nPtr)); }
#line 1843 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 234 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1849 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 235 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opGetString); }
#line 1855 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 236 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAdd, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1861 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 237 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opSub, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1867 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 238 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1873 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 239 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opCall, (yyvsp[0].nPtr)); }
#line 1879 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 240 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1885 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 241 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1891 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 242 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1897 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 243 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1903 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 244 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1909 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 245 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CSelfExprNode(); }
#line 1915 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 246 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opChildren,(yyvsp[-1].nPtr)); }
#line 1921 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 247 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opMakeHot,(yyvsp[-5].nPtr),(yyvsp[-3].nPtr),(yyvsp[-1].nPtr));}
#line 1927 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 251 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CVarExprNode((yyvsp[0].str)); }
#line 1933 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 255 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberExprNode((yyvsp[-2].nPtr), (yyvsp[0].str)); }
#line 1939 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 259 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberCallNode((yyvsp[-4].nPtr), (yyvsp[-2].str),NULL); }
#line 1945 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 260 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberCallNode(NULL, (yyvsp[-2].str),NULL); }
#line 1951 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 264 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1957 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 265 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CStrNode((yyvsp[0].str)); }
#line 1963 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 269 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CIntNode((yyvsp[0].iValue)); }
#line 1969 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 273 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitNode((yyvsp[-1].nPtr)); }
#line 1975 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 277 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitListNode((yyvsp[-1].nPtr)); }
#line 1981 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 281 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1987 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 282 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1993 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 286 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitConstNode((yyvsp[0].str)); }
#line 1999 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 287 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitConstNode((yyvsp[0].iValue)); }
#line 2005 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 288 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitConstNode((CObjIdentNode*)(yyvsp[0].nPtr)); }
#line 2011 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 293 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayElementExprNode((yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 2017 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 297 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2023 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 298 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2029 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 303 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opEq, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2035 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 304 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opLT, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2041 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 305 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opLE, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2047 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 306 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opGT, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2053 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 307 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opGE, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2059 "tigParse.cpp" /* yacc.c:1646  */
    break;


#line 2063 "tigParse.cpp" /* yacc.c:1646  */
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
#line 310 "tig.y" /* yacc.c:1906  */


void yyerror(char *s) {
	fprintf(stdout, "\n%s, unexpected '%s' on line %d:", s, yytext,lineNo);
	rewind(yyin);
	char buf[500];
	for (int line=0; line < lineNo;line++)
		fgets(buf,500,yyin);
	fprintf(stdout, "\n%s", buf);
}
