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
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   334

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  196

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
     147,   148,   154,   155,   160,   164,   165,   169,   169,   171,
     175,   176,   180,   181,   182,   186,   191,   192,   193,   194,
     195,   199,   203,   204,   208,   212,   216,   220,   221,   225,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   246,   250,   255,   259,   260,   264,
     268,   272,   276,   277,   281,   282,   283,   288,   292,   293,
     298,   299,   300,   301,   302
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
     285,    62,   286,    60,   287,   288,    43,    45,    42,    47,
      37,   289,   290,   291,    59,   123,   125,    40,    41,    61,
      46,    91,    93,    44
};
# endif

#define YYPACT_NINF -72

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-72)))

#define YYTABLE_NINF -86

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     211,    62,   -29,    62,    12,    39,   -72,    42,    21,    12,
      11,   -72,    25,    53,   -72,   233,    83,   211,   -72,    64,
      -9,   -72,   -72,    68,   -72,    84,   -72,    16,   123,   119,
     104,   100,   -72,   102,   -72,   -72,   -37,   -72,    97,   108,
     111,    62,    99,    98,   277,   -72,   110,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   126,   297,   -72,   131,   131,   158,
     -72,   168,    62,    24,   134,   -72,   117,   -72,   -72,   -72,
     -72,    62,    62,    46,   169,   -72,   -72,   180,   123,   119,
     -72,   141,   181,   123,    62,   -72,   -72,    34,    62,   240,
     -72,   -72,   -72,   -72,    50,   -72,    46,    62,    62,    62,
      62,    62,    62,    62,   -72,   -72,   233,   155,    12,   -72,
     159,   191,   254,   -20,   154,   -72,   -72,   287,   297,   -72,
     -72,   -72,   161,   130,   166,   123,   194,   -72,   175,   297,
     -72,   -39,   136,   -72,   -72,    99,   170,    75,    75,    75,
      75,    75,   -72,   -72,   188,   -72,   -72,   -72,   176,   233,
      34,   209,   -72,   -72,   179,   -72,   186,   -72,   189,   -72,
      74,   -72,   -72,   222,    62,   -72,   190,   -72,   -72,   200,
      32,   198,   -72,   -72,   194,   -72,   -72,    88,    99,   -72,
     -72,   -72,   -72,   -72,   -72,   230,   233,   -72,   -72,   -72,
      90,    62,   -72,   -72,   264,   -72
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,    24,     0,     0,    42,     0,     0,     0,
      29,    64,     0,     0,    33,     0,     0,     2,     4,     0,
       0,    26,    27,     0,    28,     0,     6,     0,    49,     0,
      35,     0,    32,     0,    71,    89,    84,    88,    81,     0,
       0,     0,     0,     0,     0,    70,    74,    75,    76,    87,
      77,    78,    79,    11,     0,    23,    65,     0,    68,     0,
      14,     0,     0,     0,    29,    62,     0,     1,     5,     7,
       9,     0,     0,     0,     0,    13,    43,    44,    49,     0,
      47,     0,    44,    49,     0,    12,    16,     0,     0,     0,
      95,    44,    94,    96,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     8,    18,     0,     0,     0,    67,
       0,     0,     0,     0,     0,    10,    63,     0,    25,    84,
      98,    99,     0,    85,     0,    49,     0,    38,     0,    36,
      31,     0,     0,    80,    90,     0,     0,   100,   104,   103,
     102,   101,    72,    73,     0,    37,    66,    17,     0,     0,
       0,     0,    22,    34,     0,    40,     0,    55,    48,    50,
      52,    39,    82,     0,     0,    93,    97,    69,    15,    19,
       0,    30,    86,    41,     0,    57,    56,     0,     0,    59,
      54,    58,    61,    60,    85,     0,     0,    21,    51,    53,
       0,     0,    20,    91,     0,    83
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -72,   -72,   -72,    10,   -72,   -72,     8,   -72,   -72,   -57,
     -72,   -72,   227,   -72,     5,   225,   -71,   -72,   -72,    81,
     -72,    72,   -72,   153,   259,    -7,   -72,   -72,    69,    -3,
     -49,     1,     4,   -72,   -30,   -72,   -72,    87,   139,   -72,
     173,   -72
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    17,    65,    54,    19,    43,    21,    22,    23,
      24,    25,    26,    27,    93,    29,    81,   126,   158,   159,
     160,   180,   181,    66,    30,    57,    31,   108,   182,    44,
      45,    46,    47,    48,    49,    50,   183,    94,    95,    51,
     122,    52
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,    32,    61,   150,    33,    28,   114,   124,    20,   162,
      18,   163,   128,   -31,   -29,    53,    32,    71,    32,    33,
     -44,    33,    28,    20,   120,    20,    76,    68,   -45,    56,
     131,    73,    78,    77,    83,     1,     2,     3,    89,     5,
      72,    64,    73,   121,     7,     8,     9,   120,    14,    64,
      11,   130,    12,    13,   156,   -44,    14,    11,    14,   112,
      59,   -31,    35,   119,    32,    60,   121,    32,   117,   118,
      33,   113,    62,    34,    20,    63,   116,    15,    35,    36,
      37,   129,   163,    67,   125,   132,    38,    39,    32,    40,
     175,    91,   176,   170,   137,   138,   139,   140,   141,   142,
     143,   146,   134,   135,   175,    91,   176,    32,    70,    41,
      33,   102,   103,    42,    20,    90,    91,    92,    74,   106,
       1,     2,     3,   177,     5,   178,   107,   109,    75,     7,
       8,     9,    80,   106,    64,    11,    82,    12,    13,   178,
      84,    14,   193,   135,    85,    32,    86,   -33,    33,    96,
      32,    32,    20,    33,   116,    87,   -30,    20,    88,   169,
     -32,   185,    15,   115,    97,   179,    98,    99,   100,   101,
     105,    32,   102,   103,    33,   110,   106,   154,    20,   -30,
     187,   -30,   179,   111,   -31,   127,   123,    32,   194,   164,
      33,     1,     2,     3,    20,     5,   192,   -45,   -46,   145,
       7,     8,     9,   147,   151,    64,    11,   148,    12,    13,
     155,   157,    14,   153,     1,     2,     3,     4,     5,   161,
     168,     6,   166,     7,     8,     9,   171,   172,    10,    11,
     173,    12,    13,    15,   167,    14,     1,     2,     3,   184,
       5,   -34,   174,   186,    69,     7,     8,     9,   -85,   189,
      64,    11,    79,    12,    13,   188,    15,    14,    97,   144,
      98,    99,   100,   101,    58,   190,   102,   103,    97,   136,
      98,    99,   100,   101,   165,     0,   102,   103,    15,     0,
       0,     0,    97,   191,    98,    99,   100,   101,   133,     0,
     102,   103,    97,     0,    98,    99,   100,   101,     0,     0,
     102,   103,   149,     0,     0,    97,     0,    98,    99,   100,
     101,     0,   195,   102,   103,    97,     0,    98,    99,   100,
     101,   104,     0,   102,   103,    97,     0,    98,    99,   100,
     101,   152,     0,   102,   103
};

static const yytype_int16 yycheck[] =
{
       3,     0,     9,    23,     0,     0,    63,    78,     0,    48,
       0,    50,    83,    50,    51,    44,    15,    26,    17,    15,
       9,    17,    17,    15,    73,    17,    10,    17,    17,    17,
      87,    51,    27,    17,    29,     3,     4,     5,    41,     7,
      49,    17,    51,    73,    12,    13,    14,    96,    24,    17,
      18,    17,    20,    21,   125,    44,    24,    18,    24,    62,
      18,    50,    16,    17,    63,    44,    96,    66,    71,    72,
      66,    63,    47,    11,    66,    22,    66,    45,    16,    17,
      18,    84,    50,     0,    79,    88,    24,    25,    87,    27,
      16,    17,    18,   150,    97,    98,    99,   100,   101,   102,
     103,   108,    52,    53,    16,    17,    18,   106,    44,    47,
     106,    36,    37,    51,   106,    16,    17,    18,    50,    45,
       3,     4,     5,    49,     7,    51,    57,    58,    44,    12,
      13,    14,     9,    45,    17,    18,    17,    20,    21,    51,
      36,    24,    52,    53,    44,   144,    44,    50,   144,    51,
     149,   150,   144,   149,   144,    47,    26,   149,    47,   149,
      50,   164,    45,    46,    28,   160,    30,    31,    32,    33,
      44,   170,    36,    37,   170,    17,    45,    47,   170,    49,
     170,    51,   177,    15,    50,    44,    17,   186,   191,    53,
     186,     3,     4,     5,   186,     7,   186,    17,    17,    44,
      12,    13,    14,    44,    50,    17,    18,    16,    20,    21,
      44,    17,    24,    52,     3,     4,     5,     6,     7,    44,
      44,    10,    52,    12,    13,    14,    17,    48,    17,    18,
      44,    20,    21,    45,    46,    24,     3,     4,     5,    17,
       7,    51,    53,    43,    17,    12,    13,    14,    50,   177,
      17,    18,    27,    20,    21,   174,    45,    24,    28,   106,
      30,    31,    32,    33,     5,   178,    36,    37,    28,    96,
      30,    31,    32,    33,   135,    -1,    36,    37,    45,    -1,
      -1,    -1,    28,    53,    30,    31,    32,    33,    48,    -1,
      36,    37,    28,    -1,    30,    31,    32,    33,    -1,    -1,
      36,    37,    48,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    -1,    48,    36,    37,    28,    -1,    30,    31,    32,
      33,    44,    -1,    36,    37,    28,    -1,    30,    31,    32,
      33,    44,    -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    10,    12,    13,    14,
      17,    18,    20,    21,    24,    45,    55,    56,    57,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      78,    80,    85,    86,    11,    16,    17,    18,    24,    25,
      27,    47,    51,    60,    83,    84,    85,    86,    87,    88,
      89,    93,    95,    44,    58,    83,    17,    79,    78,    18,
      44,    79,    47,    22,    17,    57,    77,     0,    57,    66,
      44,    26,    49,    51,    50,    44,    10,    17,    68,    69,
       9,    70,    17,    68,    36,    44,    44,    47,    47,    83,
      16,    17,    18,    68,    91,    92,    51,    28,    30,    31,
      32,    33,    36,    37,    44,    44,    45,    82,    81,    82,
      17,    15,    83,    60,    63,    46,    57,    83,    83,    17,
      84,    88,    94,    17,    70,    68,    71,    44,    70,    83,
      17,    63,    83,    48,    52,    53,    94,    83,    83,    83,
      83,    83,    83,    83,    77,    44,    79,    44,    16,    48,
      23,    50,    44,    52,    47,    44,    70,    17,    72,    73,
      74,    44,    48,    50,    53,    92,    52,    46,    44,    57,
      63,    17,    48,    44,    53,    16,    18,    49,    51,    68,
      75,    76,    82,    90,    17,    83,    43,    57,    73,    75,
      91,    53,    57,    52,    83,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    55,    56,    56,    56,    56,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    58,    58,    59,    60,    60,    60,    61,
      62,    63,    63,    63,    64,    65,    65,    66,    66,    66,
      66,    66,    67,    67,    68,    69,    69,    71,    70,    70,
      72,    72,    73,    73,    73,    74,    75,    75,    75,    75,
      75,    76,    77,    77,    78,    79,    80,    81,    81,    82,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    84,    85,    86,    87,    87,    88,
      89,    90,    91,    91,    92,    92,    92,    93,    94,    94,
      95,    95,    95,    95,    95
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
       3,     1,     4,     8,     1,     3,     5,     1,     1,     1,
       3,     3,     1,     3,     1,     1,     1,     4,     1,     1,
       3,     3,     3,     3,     3
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
#line 1419 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 76 "tig.y" /* yacc.c:1646  */
    { ;}
#line 1425 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 80 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1431 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 81 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1437 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 82 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1443 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 83 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1449 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 87 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opPrint,(yyvsp[-1].nPtr)); }
#line 1455 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 88 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1461 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 89 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1467 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 90 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opEnd);}
#line 1473 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 91 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1479 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 92 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CStrStatement((yyvsp[-1].nPtr));}
#line 1485 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 93 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opStartTimer); }
#line 1491 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 94 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CTimedEventNode((yyvsp[-3].nPtr),(yyvsp[-1].iValue)); }
#line 1497 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 95 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CallDiscardNode((yyvsp[-1].nPtr)); }
#line 1503 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 96 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CHotTextNode((yyvsp[-2].str),(yyvsp[-1].str),NULL); }
#line 1509 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 97 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CReturnNode((yyvsp[-1].nPtr)); }
#line 1515 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 98 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CIfNode((yyvsp[-2].nPtr), (yyvsp[0].nPtr), NULL); }
#line 1521 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 99 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CIfNode((yyvsp[-4].nPtr), (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1527 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 100 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CForEachNode((yyvsp[-3].nPtr), (yyvsp[-1].nPtr), (yyvsp[0].nPtr)); }
#line 1533 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 101 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpAssignNode(opAdd,(yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1539 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 105 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1545 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 106 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = NULL; }
#line 1551 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 110 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAssign,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1557 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 115 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1563 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 116 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1569 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 117 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1575 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 121 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CVarAssigneeNode((yyvsp[0].str)); }
#line 1581 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 125 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjMemberAssigneeNode((yyvsp[-2].nPtr),(yyvsp[0].str)); }
#line 1587 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 129 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjRefNode((yyvsp[0].str)); }
#line 1593 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 130 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1599 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 131 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CSelfExprNode(); }
#line 1605 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 135 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayAssignNode((yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1611 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 139 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1617 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 140 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAdd, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1623 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 144 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CEventNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr)); }
#line 1629 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 145 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),NULL); }
#line 1635 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 146 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),(yyvsp[-3].nPtr)); }
#line 1641 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 147 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),NULL); }
#line 1647 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 148 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),(yyvsp[-3].nPtr)); }
#line 1653 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 154 "tig.y" /* yacc.c:1646  */
    { CSyntaxNode::childLevel++; }
#line 1659 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 155 "tig.y" /* yacc.c:1646  */
    { CSyntaxNode::childLevel++; }
#line 1665 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 160 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjIdentNode((yyvsp[0].str)); }
#line 1671 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 164 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new ClassIdentNode((yyvsp[0].str)); }
#line 1677 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 165 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),new ClassIdentNode((yyvsp[0].str))); }
#line 1683 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 169 "tig.y" /* yacc.c:1646  */
    { CSyntaxNode::funcMode(true); }
#line 1689 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 170 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1695 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 171 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = NULL; }
#line 1701 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 175 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1707 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 176 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1713 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 180 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberDeclNode((yyvsp[0].nPtr),NULL); }
#line 1719 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 181 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberDeclNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1725 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 182 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberDeclNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1731 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 186 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMembDeclIdentNode((yyvsp[0].str)); }
#line 1737 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 191 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((yyvsp[0].str)); }
#line 1743 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 192 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((yyvsp[0].iValue)); }
#line 1749 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 193 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((yyvsp[0].nPtr)); }
#line 1755 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 194 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((CObjIdentNode*)(yyvsp[0].nPtr)); }
#line 1761 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 195 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((CArrayInitListNode*)(yyvsp[0].nPtr)); }
#line 1767 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 199 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CFunctionDefNode((yyvsp[0].nPtr)); }
#line 1773 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 203 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1779 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 204 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1785 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 208 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CStrNode((yyvsp[0].str)); }
#line 1791 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 212 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CEventIdentNode((yyvsp[0].str)); }
#line 1797 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 216 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COptionNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1803 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 220 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1809 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 221 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = NULL; }
#line 1815 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 225 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CodeBlockNode((yyvsp[-1].nPtr)); }
#line 1821 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 229 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1827 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 230 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opGetString); }
#line 1833 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 231 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAdd, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1839 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 232 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opSub, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1845 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 233 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1851 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 234 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opCall, (yyvsp[0].nPtr)); }
#line 1857 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 235 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1863 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 236 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1869 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 237 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1875 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 238 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1881 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 239 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1887 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 240 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CSelfExprNode(); }
#line 1893 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 241 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opChildren,(yyvsp[-1].nPtr)); }
#line 1899 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 242 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opMakeHot,(yyvsp[-5].nPtr),(yyvsp[-3].nPtr),(yyvsp[-1].nPtr));}
#line 1905 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 246 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CVarExprNode((yyvsp[0].str)); }
#line 1911 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 250 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberExprNode((yyvsp[-2].nPtr), (yyvsp[0].str)); }
#line 1917 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 255 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberCallNode((yyvsp[-4].nPtr), (yyvsp[-2].str),NULL); }
#line 1923 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 259 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1929 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 260 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CStrNode((yyvsp[0].str)); }
#line 1935 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 264 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CIntNode((yyvsp[0].iValue)); }
#line 1941 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 268 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitNode((yyvsp[-1].nPtr)); }
#line 1947 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 272 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitListNode((yyvsp[-1].nPtr)); }
#line 1953 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 276 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1959 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 277 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1965 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 281 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitConstNode((yyvsp[0].str)); }
#line 1971 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 282 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitConstNode((yyvsp[0].iValue)); }
#line 1977 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 283 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitConstNode((CObjIdentNode*)(yyvsp[0].nPtr)); }
#line 1983 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 288 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayElementExprNode((yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1989 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 292 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1995 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 293 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2001 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 298 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opEq, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2007 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 299 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opLT, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2013 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 300 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opLE, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2019 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 301 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opGT, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2025 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 302 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opGE, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2031 "tigParse.cpp" /* yacc.c:1646  */
    break;


#line 2035 "tigParse.cpp" /* yacc.c:1646  */
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
#line 305 "tig.y" /* yacc.c:1906  */


void yyerror(char *s) {
	fprintf(stdout, "\n%s, unexpected '%s' on line %d:", s, yytext,lineNo);
	rewind(yyin);
	char buf[500];
	for (int line=0; line < lineNo;line++)
		fgets(buf,500,yyin);
	fprintf(stdout, "\n%s", buf);
}
