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
    SET_WINDOW = 259,
    CLEAR_WINDOW = 260,
    END = 261,
    RETURN = 262,
    EVENT = 263,
    OPTION = 264,
    OBJECT = 265,
    HAS = 266,
    ARROW = 267,
    INHERITS = 268,
    SUPERCLASS = 269,
    GETSTRING = 270,
    HOT = 271,
    MAKE_HOT = 272,
    PURGE = 273,
    CLEAR = 274,
    STYLE = 275,
    CAP = 276,
    START_TIMER = 277,
    START_EVENT = 278,
    AT = 279,
    INTEGER = 280,
    IDENTIFIER = 281,
    STRING = 282,
    ENDL = 283,
    IF = 284,
    FOR = 285,
    EACH = 286,
    IN = 287,
    OF = 288,
    SELF = 289,
    CHILDREN = 290,
    ADD_ASSIGN = 291,
    BREAK = 292,
    TRON = 293,
    TROFF = 294,
    NOTHING = 295,
    MOVE = 296,
    TO = 297,
    EQ = 298,
    NE = 299,
    GE = 300,
    LE = 301,
    OR = 302,
    AND = 303,
    UMINUS = 304,
    IFX = 305,
    ELSE = 306
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

#line 188 "tigParse.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TIGPARSE_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 203 "tigParse.cpp" /* yacc.c:358  */

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
#define YYFINAL  93
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   711

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  272

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    55,     2,     2,
      63,    64,    53,    51,    62,    52,    66,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    59,
      48,    65,    46,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    68,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    60,     2,    61,     2,     2,     2,     2,
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
      45,    47,    49,    50,    56,    57,    58
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    79,    79,    80,    84,    85,    86,    87,    91,    92,
      93,    94,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   120,   125,   126,   130,   131,   135,   136,
     141,   145,   149,   150,   151,   156,   160,   161,   166,   167,
     168,   169,   170,   176,   177,   182,   186,   187,   191,   191,
     193,   197,   198,   202,   203,   204,   208,   212,   227,   228,
     229,   230,   231,   235,   236,   240,   241,   245,   249,   262,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   289,
     290,   294,   298,   299,   303,   304,   308,   312,   313,   314,
     318,   319,   323,   327,   331,   335,   336,   340,   341,   343,
     348,   352,   353,   358,   359,   360,   361,   362,   363
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRINT", "SET_WINDOW", "CLEAR_WINDOW",
  "END", "RETURN", "EVENT", "OPTION", "OBJECT", "HAS", "ARROW", "INHERITS",
  "SUPERCLASS", "GETSTRING", "HOT", "MAKE_HOT", "PURGE", "CLEAR", "STYLE",
  "CAP", "START_TIMER", "START_EVENT", "AT", "INTEGER", "IDENTIFIER",
  "STRING", "ENDL", "IF", "FOR", "EACH", "IN", "OF", "SELF", "CHILDREN",
  "ADD_ASSIGN", "BREAK", "TRON", "TROFF", "NOTHING", "MOVE", "TO", "EQ",
  "NE", "GE", "'>'", "LE", "'<'", "OR", "AND", "'+'", "'-'", "'*'", "'/'",
  "'%'", "UMINUS", "IFX", "ELSE", "';'", "'{'", "'}'", "','", "'('", "')'",
  "'='", "'.'", "'['", "']'", "$accept", "program", "tigcode", "statement",
  "memberId", "return_expr", "assignment", "var_or_obj_memb",
  "variable_assignee", "obj_member_assignee", "obj_expr",
  "element_assignee", "string_statement", "dec_statement", "level",
  "obj_identifier", "class_identifier", "optional_member_list", "$@1",
  "member_decl_list", "member_decl", "memb_decl_identifier",
  "global_func_decl", "init_expr", "memb_function_def", "statement_list",
  "string_literal", "event_identifier", "code_block", "expression",
  "variable_expr", "member_expr", "member_call", "func_call",
  "func_indent", "param_list", "constant_expr", "integer_constant",
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,    62,   301,    60,   302,
     303,    43,    45,    42,    47,    37,   304,   305,   306,    59,
     123,   125,    44,    40,    41,    61,    46,    91,    93
};
# endif

#define YYPACT_NINF -204

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-204)))

#define YYTABLE_NINF -107

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     406,   495,    -7,     0,    44,   495,  -204,   474,   495,    66,
       4,   255,  -204,    12,    76,  -204,    80,    88,    93,    60,
      65,   445,   114,   406,  -204,    94,   -22,  -204,  -204,    98,
     107,   100,  -204,    48,    17,   156,   124,   133,  -204,   127,
     128,   130,  -204,   138,   140,   142,  -204,    -5,  -204,    -3,
     143,  -204,    65,   495,    28,   141,     6,   177,   619,  -204,
      10,  -204,  -204,   144,  -204,  -204,  -204,  -204,  -204,   495,
    -204,  -204,   150,   659,   155,   571,   583,  -204,  -204,   186,
     495,    75,  -204,  -204,  -204,  -204,   -29,   -19,   154,   153,
      22,  -204,   151,  -204,  -204,  -204,  -204,   495,   495,    58,
     196,   495,  -204,  -204,   200,   217,   156,  -204,   203,   175,
     212,   217,  -204,   495,  -204,  -204,   495,   495,   495,   495,
      60,   153,   499,  -204,  -204,  -204,  -204,   -35,  -204,    58,
      60,   495,   495,   495,   495,   495,   495,   495,   495,  -204,
     495,   509,  -204,  -204,   495,   495,   214,   523,   179,    96,
      60,   215,   220,   495,  -204,  -204,   629,   659,  -204,  -204,
     180,   158,   184,   659,   190,   217,   226,  -204,   192,  -204,
     199,   659,   659,    42,   595,   533,   547,    55,  -204,    28,
    -204,   195,   198,    38,    38,    38,    38,    38,    38,  -204,
    -204,    62,   206,   246,   639,   208,   445,    60,    60,   -34,
    -204,   202,    78,  -204,  -204,   495,  -204,   213,  -204,   209,
    -204,   135,   495,  -204,   495,   218,   495,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,   495,  -204,  -204,   222,   325,
     325,  -204,  -204,    84,  -204,   226,  -204,  -204,  -204,   445,
     495,   210,    28,  -204,  -204,  -204,  -204,  -204,   101,   659,
    -204,   607,   649,   445,  -204,  -204,  -204,  -204,   366,   106,
    -204,   -33,  -204,   495,  -204,  -204,  -204,   218,  -204,   557,
    -204,  -204
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     0,    35,    53,     0,     0,     0,
       0,    40,    77,     0,     0,    44,     0,     0,     0,     0,
       0,     0,     0,     2,     4,     0,     0,    38,    39,     0,
       0,     0,     6,     0,    60,     0,     0,    46,    43,     0,
       0,     0,    82,     0,     0,     0,   112,    99,   111,    92,
       0,    95,     0,     0,     0,     0,     0,     0,     0,    80,
      85,    86,    87,     0,    88,   110,    89,   100,    90,     0,
      31,    11,     0,    34,     0,     0,     0,    13,    78,     0,
       0,     0,    26,    28,    29,    42,     0,    99,     0,     0,
      40,    75,     0,     1,     5,     7,     9,     0,     0,     0,
       0,     0,    12,    54,    55,    60,     0,    58,     0,     0,
      55,    60,    52,     0,    15,    16,   109,     0,     0,     0,
       0,    81,     0,   118,    33,   117,   119,     0,   115,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
     109,     0,    20,    32,     0,     0,     0,     0,    40,     0,
       0,     0,     0,   109,    10,    76,     0,    36,   121,   122,
       0,   101,     0,    37,     0,    60,     0,   106,     0,    48,
       0,    47,   107,     0,     0,     0,     0,     0,    91,     0,
     113,     0,    98,   123,   128,   127,   126,   125,   124,    83,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     101,    41,     0,    25,    45,   109,    50,     0,    66,    59,
      61,    63,   109,    49,     0,   104,     0,    96,    97,    93,
     116,   120,   104,    30,    17,     0,    19,    14,    21,     0,
       0,    27,   105,     0,    51,     0,    69,    55,    68,     0,
     109,     0,     0,    71,    65,    70,    74,    72,     0,   108,
      67,     0,     0,     0,    24,    23,   102,    62,     0,     0,
      64,     0,   103,     0,    18,    22,    79,     0,   114,     0,
      73,    94
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -204,  -204,  -204,     3,  -204,  -204,  -204,     1,  -204,  -204,
      21,  -204,  -204,   259,  -204,    16,   251,   -94,  -204,  -204,
      53,  -204,  -204,    54,  -204,    61,  -204,  -204,  -203,    -1,
     -18,    46,    57,    87,    15,  -135,  -204,   -79,  -204,  -204,
      59,   123,  -204,   174,  -204
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,    23,    91,   126,    72,    25,    55,    27,    28,
      56,    30,    31,    32,    33,    57,    35,   109,   166,   209,
     210,   211,    36,   244,   245,    92,    37,    79,   246,   172,
      59,    60,    61,    62,    63,   173,    64,    65,    66,   247,
     127,   128,    67,   160,    68
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,    26,    89,    24,    73,   191,    75,    76,   -42,   -55,
     -44,   164,   250,   150,    97,    41,    34,   170,   202,   130,
     159,    29,    26,   -43,    26,   231,    94,   179,   107,   179,
      78,   108,   151,   180,   121,   268,   -55,   151,    41,    34,
      86,    88,    29,    98,    29,    99,    38,   -42,   -40,   105,
     159,   111,   122,   123,   124,   125,    69,    39,  -106,    70,
     103,   -42,   -40,   -44,   270,    38,    38,    38,   141,    38,
     233,   207,   100,    88,   104,    80,   -43,   248,    39,   147,
      39,   158,   149,    46,    87,  -106,    85,    40,   -42,   137,
     138,    87,    15,    26,    15,   155,   156,   157,    38,    15,
     163,   148,    88,    71,   214,   259,   215,    81,    40,    15,
      40,   158,   171,    29,    93,   162,   174,   175,   176,   219,
      88,   151,   165,   168,   214,    77,   222,    38,   197,   198,
     183,   184,   185,   186,   187,   188,   189,   190,    38,    82,
     214,   177,   232,   193,   194,    38,   214,    83,   256,    39,
      88,   182,    84,    96,     1,     2,     3,     4,     5,   102,
     236,   237,   238,   214,   100,   262,    38,     7,   214,     8,
     267,   199,   101,     9,    10,    38,    38,    90,    12,    40,
      13,    14,   110,   112,   113,    15,   114,   115,    16,    17,
      18,   108,    19,   116,   -41,   239,    38,    26,   240,   228,
     241,   117,   242,   118,    20,   119,   120,   140,   129,   142,
     146,    21,   154,   249,   143,   251,   153,    29,   229,   230,
     152,  -106,   161,   -41,   252,   -41,   -56,   243,   107,   167,
      26,    26,   254,   255,   169,   236,   237,   238,   -57,   195,
      26,   200,    38,    38,    38,   -42,   201,   205,   204,   206,
      29,    29,   208,    39,    26,   212,   265,   243,   213,    26,
      29,   155,   269,   221,   151,   223,   -55,   227,  -101,   -55,
     239,   235,   234,   240,    29,    38,    38,   242,   239,    29,
     253,   -56,    95,    40,   106,    38,    39,    39,   257,   131,
     132,   133,   134,   135,   136,   260,    39,   137,   138,    38,
     258,   261,   220,   181,    38,   224,     0,     0,   225,     0,
      39,     0,     0,     0,   -55,    39,    40,    40,  -106,     0,
       0,   -42,     0,     0,     0,     0,    40,     0,     1,     2,
       3,     4,     5,     0,     0,     0,     0,     0,     0,     0,
      40,     7,     0,     8,     0,    40,     0,     9,    10,     0,
       0,    90,    12,     0,    13,    14,     0,     0,     0,    15,
       0,     0,    16,    17,    18,     0,    19,     0,     0,     1,
       2,     3,     4,     5,     0,     0,     0,     0,    20,     0,
       0,     0,     7,     0,     8,    21,     0,     0,     9,    10,
       0,   151,    90,    12,     0,    13,    14,     0,     0,     0,
      15,     0,     0,    16,    17,    18,     0,    19,     0,     1,
       2,     3,     4,     5,     0,     0,     0,     0,     6,    20,
       0,     0,     7,     0,     8,     0,    21,   266,     9,    10,
       0,     0,    11,    12,     0,    13,    14,     0,     0,     0,
      15,     0,     0,    16,    17,    18,     0,    19,     1,     2,
       3,     4,     5,     0,     0,     0,     0,     0,     0,    20,
       0,     7,     0,     8,     0,     0,    21,     9,    10,     0,
       0,    90,    12,     0,    13,    14,     0,     0,     0,    15,
       0,     0,    16,    17,    18,     0,    19,     0,     0,    42,
       0,    43,     0,    74,    44,    45,     0,     0,    20,    46,
      47,    48,     0,     0,     0,    21,     0,     0,    49,    50,
      42,     0,    43,     0,    51,    44,    45,     0,     0,     0,
      46,    47,    48,     0,     0,     0,     0,    52,     0,    49,
      50,     0,     0,     0,     0,    51,     0,    53,     0,     0,
       0,    54,   131,   132,   133,   134,   135,   136,    52,     0,
     137,   138,   131,   132,   133,   134,   135,   136,    53,     0,
     137,   138,    54,   178,     0,     0,   131,   132,   133,   134,
     135,   136,     0,   192,   137,   138,   131,   132,   133,   134,
     135,   136,     0,     0,   137,   138,     0,   196,     0,     0,
     131,   132,   133,   134,   135,   136,     0,   217,   137,   138,
     131,   132,   133,   134,   135,   136,     0,     0,   137,   138,
       0,   218,     0,     0,   131,   132,   133,   134,   135,   136,
       0,   271,   137,   138,     0,     0,   131,   132,   133,   134,
     135,   136,     0,   144,   137,   138,     0,     0,   131,   132,
     133,   134,   135,   136,     0,   145,   137,   138,     0,     0,
     131,   132,   133,   134,   135,   136,     0,   216,   137,   138,
       0,     0,   131,   132,   133,   134,   135,   136,     0,   263,
     137,   138,   131,   132,   133,   134,   135,   136,   139,     0,
     137,   138,   131,   132,   133,   134,   135,   136,   203,     0,
     137,   138,   131,   132,   133,   134,   135,   136,   226,     0,
     137,   138,   131,   132,   133,   134,   135,   136,   264,     0,
     137,   138
};

static const yytype_int16 yycheck[] =
{
       1,     0,    20,     0,     5,   140,     7,     8,    13,    14,
      13,   105,   215,    42,    36,     0,     0,   111,   153,    13,
      99,     0,    21,    13,    23,    59,    23,    62,    11,    62,
      26,    14,    66,    68,    52,    68,    14,    66,    23,    23,
      19,    20,    21,    65,    23,    67,     0,    66,    67,    33,
     129,    35,    53,    25,    26,    27,    63,     0,    63,    59,
      12,    66,    67,    66,   267,    19,    20,    21,    69,    23,
     205,   165,    66,    52,    26,    63,    66,   212,    21,    80,
      23,    99,    81,    25,    26,    63,    26,     0,    66,    51,
      52,    26,    34,    92,    34,    92,    97,    98,    52,    34,
     101,    26,    81,    59,    62,   240,    64,    31,    21,    34,
      23,   129,   113,    92,     0,   100,   117,   118,   119,    64,
      99,    66,   106,   108,    62,    59,    64,    81,    32,    33,
     131,   132,   133,   134,   135,   136,   137,   138,    92,    59,
      62,   120,    64,   144,   145,    99,    62,    59,    64,    92,
     129,   130,    59,    59,     3,     4,     5,     6,     7,    59,
      25,    26,    27,    62,    66,    64,   120,    16,    62,    18,
      64,   150,    65,    22,    23,   129,   130,    26,    27,    92,
      29,    30,    26,    59,    51,    34,    59,    59,    37,    38,
      39,    14,    41,    63,    36,    60,   150,   196,    63,   196,
      65,    63,    67,    63,    53,    63,    63,    63,    67,    59,
      24,    60,    61,   214,    59,   216,    63,   196,   197,   198,
      66,    63,    26,    65,   225,    67,    26,   211,    11,    26,
     229,   230,   229,   230,    59,    25,    26,    27,    26,    25,
     239,    26,   196,   197,   198,    66,    26,    63,    68,    59,
     229,   230,    26,   196,   253,    63,   253,   241,    59,   258,
     239,   258,   263,    68,    66,    59,    11,    59,    66,    14,
      60,    62,    59,    63,   253,   229,   230,    67,    60,   258,
      58,    26,    23,   196,    33,   239,   229,   230,   235,    43,
      44,    45,    46,    47,    48,   241,   239,    51,    52,   253,
     239,   242,   179,   129,   258,    59,    -1,    -1,    62,    -1,
     253,    -1,    -1,    -1,    59,   258,   229,   230,    63,    -1,
      -1,    66,    -1,    -1,    -1,    -1,   239,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     253,    16,    -1,    18,    -1,   258,    -1,    22,    23,    -1,
      -1,    26,    27,    -1,    29,    30,    -1,    -1,    -1,    34,
      -1,    -1,    37,    38,    39,    -1,    41,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    16,    -1,    18,    60,    -1,    -1,    22,    23,
      -1,    66,    26,    27,    -1,    29,    30,    -1,    -1,    -1,
      34,    -1,    -1,    37,    38,    39,    -1,    41,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    53,
      -1,    -1,    16,    -1,    18,    -1,    60,    61,    22,    23,
      -1,    -1,    26,    27,    -1,    29,    30,    -1,    -1,    -1,
      34,    -1,    -1,    37,    38,    39,    -1,    41,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    16,    -1,    18,    -1,    -1,    60,    22,    23,    -1,
      -1,    26,    27,    -1,    29,    30,    -1,    -1,    -1,    34,
      -1,    -1,    37,    38,    39,    -1,    41,    -1,    -1,    15,
      -1,    17,    -1,    19,    20,    21,    -1,    -1,    53,    25,
      26,    27,    -1,    -1,    -1,    60,    -1,    -1,    34,    35,
      15,    -1,    17,    -1,    40,    20,    21,    -1,    -1,    -1,
      25,    26,    27,    -1,    -1,    -1,    -1,    53,    -1,    34,
      35,    -1,    -1,    -1,    -1,    40,    -1,    63,    -1,    -1,
      -1,    67,    43,    44,    45,    46,    47,    48,    53,    -1,
      51,    52,    43,    44,    45,    46,    47,    48,    63,    -1,
      51,    52,    67,    64,    -1,    -1,    43,    44,    45,    46,
      47,    48,    -1,    64,    51,    52,    43,    44,    45,    46,
      47,    48,    -1,    -1,    51,    52,    -1,    64,    -1,    -1,
      43,    44,    45,    46,    47,    48,    -1,    64,    51,    52,
      43,    44,    45,    46,    47,    48,    -1,    -1,    51,    52,
      -1,    64,    -1,    -1,    43,    44,    45,    46,    47,    48,
      -1,    64,    51,    52,    -1,    -1,    43,    44,    45,    46,
      47,    48,    -1,    62,    51,    52,    -1,    -1,    43,    44,
      45,    46,    47,    48,    -1,    62,    51,    52,    -1,    -1,
      43,    44,    45,    46,    47,    48,    -1,    62,    51,    52,
      -1,    -1,    43,    44,    45,    46,    47,    48,    -1,    62,
      51,    52,    43,    44,    45,    46,    47,    48,    59,    -1,
      51,    52,    43,    44,    45,    46,    47,    48,    59,    -1,
      51,    52,    43,    44,    45,    46,    47,    48,    59,    -1,
      51,    52,    43,    44,    45,    46,    47,    48,    59,    -1,
      51,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    12,    16,    18,    22,
      23,    26,    27,    29,    30,    34,    37,    38,    39,    41,
      53,    60,    70,    71,    72,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    91,    95,   100,   101,
     102,   103,    15,    17,    20,    21,    25,    26,    27,    34,
      35,    40,    53,    63,    67,    76,    79,    84,    98,    99,
     100,   101,   102,   103,   105,   106,   107,   111,   113,    63,
      59,    59,    74,    98,    19,    98,    98,    59,    26,    96,
      63,    31,    59,    59,    59,    26,    79,    26,    79,    99,
      26,    72,    94,     0,    72,    82,    59,    36,    65,    67,
      66,    65,    59,    12,    26,    84,    85,    11,    14,    86,
      26,    84,    59,    51,    59,    59,    63,    63,    63,    63,
      63,    99,    98,    25,    26,    27,    73,   109,   110,    67,
      13,    43,    44,    45,    46,    47,    48,    51,    52,    59,
      63,    98,    59,    59,    62,    62,    24,    98,    26,    76,
      42,    66,    66,    63,    61,    72,    98,    98,    99,   106,
     112,    26,   103,    98,    86,    84,    87,    26,   103,    59,
      86,    98,    98,   104,    98,    98,    98,    79,    64,    62,
      68,   112,    79,    98,    98,    98,    98,    98,    98,    98,
      98,   104,    64,    98,    98,    25,    64,    32,    33,    79,
      26,    26,   104,    59,    68,    63,    59,    86,    26,    88,
      89,    90,    63,    59,    62,    64,    62,    64,    64,    64,
     110,    68,    64,    59,    59,    62,    59,    59,    72,    79,
      79,    59,    64,   104,    59,    62,    25,    26,    27,    60,
      63,    65,    67,    84,    92,    93,    97,   108,   104,    98,
      97,    98,    98,    58,    72,    72,    64,    89,    94,   104,
      92,   109,    64,    62,    59,    72,    61,    64,    68,    98,
      97,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    71,    71,    71,    71,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    73,    74,    74,    75,    75,    76,    76,
      77,    78,    79,    79,    79,    80,    81,    81,    82,    82,
      82,    82,    82,    83,    83,    84,    85,    85,    87,    86,
      86,    88,    88,    89,    89,    89,    90,    91,    92,    92,
      92,    92,    92,    93,    93,    94,    94,    95,    96,    97,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    99,
      99,   100,   101,   101,   102,   102,   103,   104,   104,   104,
     105,   105,   106,   107,   108,   109,   109,   110,   110,   110,
     111,   112,   112,   113,   113,   113,   113,   113,   113
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     2,     3,     2,
       3,     2,     2,     2,     5,     2,     2,     5,     7,     5,
       3,     5,     7,     6,     6,     4,     2,     5,     2,     2,
       5,     2,     3,     1,     1,     0,     3,     3,     1,     1,
       1,     3,     1,     1,     1,     4,     1,     3,     3,     4,
       4,     5,     2,     1,     2,     1,     1,     2,     0,     3,
       0,     1,     3,     1,     3,     2,     1,     5,     1,     1,
       1,     1,     1,     4,     1,     1,     2,     1,     1,     3,
       1,     2,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     3,     1,     4,     8,     1,     4,     4,     3,     1,
       1,     3,     6,     6,     4,     5,     1,     1,     3,     0,
       1,     1,     1,     3,     3,     1,     3,     1,     1,     1,
       4,     1,     1,     3,     3,     3,     3,     3,     3
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
#line 79 "tig.y" /* yacc.c:1646  */
    { tigC->encode((yyvsp[0].nPtr)); }
#line 1545 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 80 "tig.y" /* yacc.c:1646  */
    { ;}
#line 1551 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 84 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1557 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 85 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1563 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 86 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1569 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 87 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1575 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 91 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opPrint,(yyvsp[-1].nPtr)); }
#line 1581 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 92 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1587 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 93 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1593 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 94 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opEnd);}
#line 1599 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 96 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CStrStatement((yyvsp[-1].nPtr));}
#line 1605 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 97 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opStartTimer); }
#line 1611 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 98 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CTimedEventNode((yyvsp[-3].nPtr),(yyvsp[-1].iValue)); }
#line 1617 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 99 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CallDiscardNode((yyvsp[-1].nPtr)); }
#line 1623 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 100 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CallDiscardNode((yyvsp[-1].nPtr)); }
#line 1629 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 101 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CHotTextNode((yyvsp[-3].nPtr),(yyvsp[-1].nPtr),NULL); }
#line 1635 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 102 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CHotTextNode((yyvsp[-5].nPtr),(yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1641 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 103 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opPurge,(yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1647 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 104 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CReturnNode((yyvsp[-1].nPtr)); }
#line 1653 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 105 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CIfNode((yyvsp[-2].nPtr), (yyvsp[0].nPtr), NULL); }
#line 1659 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 106 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CIfNode((yyvsp[-4].nPtr), (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1665 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 107 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CForEachNode((yyvsp[-3].nPtr), (yyvsp[-1].nPtr), (yyvsp[0].nPtr)); }
#line 1671 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 108 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CForEachElementNode((yyvsp[-3].nPtr), (yyvsp[-1].nPtr), (yyvsp[0].nPtr)); }
#line 1677 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 109 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpAssignNode(opAdd,(yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1683 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 110 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opBrk); }
#line 1689 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 111 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opMove,(yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1695 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 112 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CTronNode(true); }
#line 1701 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 113 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CTronNode(false); }
#line 1707 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 114 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opWin,(yyvsp[-2].nPtr)); }
#line 1713 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 115 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opClr); }
#line 1719 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 116 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opHotClr); }
#line 1725 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 120 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberIdNode((yyvsp[0].str)); }
#line 1731 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 125 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1737 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 126 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = NULL; }
#line 1743 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 130 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAssign,(yyvsp[0].nPtr),(yyvsp[-2].nPtr)); }
#line 1749 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 131 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAssignElem,(yyvsp[0].nPtr),(yyvsp[-2].nPtr)); }
#line 1755 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 135 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1761 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 136 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1767 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 141 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CVarAssigneeNode((yyvsp[0].str)); }
#line 1773 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 145 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjMemberAssigneeNode((yyvsp[-2].nPtr),(yyvsp[0].str)); }
#line 1779 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 149 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjRefNode((yyvsp[0].str)); }
#line 1785 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 150 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1791 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 151 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opPushSelf); }
#line 1797 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 156 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayAssignNode((yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1803 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 160 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1809 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 161 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAdd, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1815 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 166 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),NULL); }
#line 1821 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 167 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),(yyvsp[-3].nPtr)); }
#line 1827 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 168 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),NULL); }
#line 1833 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 169 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),(yyvsp[-3].nPtr)); }
#line 1839 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 170 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1845 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 176 "tig.y" /* yacc.c:1646  */
    { CSyntaxNode::childLevel++; }
#line 1851 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 177 "tig.y" /* yacc.c:1646  */
    { CSyntaxNode::childLevel++; }
#line 1857 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 182 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjIdentNode((yyvsp[0].str)); }
#line 1863 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 186 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new ClassIdentNode((yyvsp[0].str)); }
#line 1869 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 187 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),new ClassIdentNode((yyvsp[0].str))); }
#line 1875 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 191 "tig.y" /* yacc.c:1646  */
    { CSyntaxNode::funcMode(true); }
#line 1881 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 192 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1887 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 193 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = NULL; }
#line 1893 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 197 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1899 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 198 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1905 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 202 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberDeclNode((yyvsp[0].nPtr),NULL); }
#line 1911 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 203 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberDeclNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1917 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 204 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberDeclNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1923 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 208 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMembDeclIdentNode((yyvsp[0].str)); }
#line 1929 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 212 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CGlobalFuncDeclNode((yyvsp[-4].nPtr),(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1935 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 227 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((yyvsp[0].str)); }
#line 1941 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 228 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((yyvsp[0].iValue)); }
#line 1947 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 229 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((yyvsp[0].nPtr)); }
#line 1953 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 230 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((CObjIdentNode*)(yyvsp[0].nPtr)); }
#line 1959 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 231 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((CArrayInitListNode*)(yyvsp[0].nPtr)); }
#line 1965 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 235 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CFunctionDefNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1971 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 236 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CFunctionDefNode(NULL,(yyvsp[0].nPtr)); }
#line 1977 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 240 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1983 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 241 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1989 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 245 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CStrNode((yyvsp[0].str)); }
#line 1995 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 249 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CEventIdentNode((yyvsp[0].str)); }
#line 2001 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 262 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CodeBlockNode((yyvsp[-1].nPtr)); }
#line 2007 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 266 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2013 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 267 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CDerefVarNode((yyvsp[0].nPtr)); }
#line 2019 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 268 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opGetString); }
#line 2025 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 269 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAdd, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2031 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 270 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opSub, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2037 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 271 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2043 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 272 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2049 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 273 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2055 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 274 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2061 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 275 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2067 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 277 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2073 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 278 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 2079 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 279 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opPushSelf); }
#line 2085 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 280 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opChildren,(yyvsp[-1].nPtr)); }
#line 2091 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 281 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opMakeHot,(yyvsp[-5].nPtr),(yyvsp[-3].nPtr),(yyvsp[-1].nPtr));}
#line 2097 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 282 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CNothingNode(); }
#line 2103 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 283 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opStyle,(yyvsp[-1].nPtr)); }
#line 2109 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 284 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opCap,(yyvsp[-1].nPtr)); }
#line 2115 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 285 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opInherits,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 2121 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 289 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CVarExprNode((yyvsp[0].str)); }
#line 2127 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 290 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2133 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 294 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberExprNode((yyvsp[-2].nPtr), (yyvsp[0].str)); }
#line 2139 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 298 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberCallNode((yyvsp[-5].nPtr), (yyvsp[-3].nPtr), (yyvsp[-1].nPtr)); }
#line 2145 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 299 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CSuperCallNode((yyvsp[-5].nPtr), (yyvsp[-3].nPtr), (yyvsp[-1].nPtr)); }
#line 2151 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 303 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberCallNode(NULL, (yyvsp[-3].nPtr), (yyvsp[-1].nPtr)); }
#line 2157 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 304 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CDerefMemberCallNode( (yyvsp[-3].nPtr), (yyvsp[-1].nPtr)); }
#line 2163 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 308 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CFuncIdentNode((yyvsp[0].str)); }
#line 2169 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 312 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CParamExprNode((yyvsp[0].nPtr)); }
#line 2175 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 313 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-2].nPtr),new CParamExprNode((yyvsp[0].nPtr))); }
#line 2181 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 314 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = NULL; }
#line 2187 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 318 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2193 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 319 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CStrNode((yyvsp[0].str)); }
#line 2199 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 323 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CIntNode((yyvsp[0].iValue)); }
#line 2205 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 327 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitNode((yyvsp[-1].nPtr)); }
#line 2211 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 331 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitListNode((yyvsp[-1].nPtr)); }
#line 2217 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 335 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2223 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 336 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 2229 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 340 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitConstNode((yyvsp[0].str)); }
#line 2235 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 341 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitConstNode((yyvsp[0].iValue)); }
#line 2241 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 343 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitConstNode((CMemberIdNode*)(yyvsp[0].nPtr)); }
#line 2247 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 348 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayElementExprNode((yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 2253 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 352 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2259 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 353 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2265 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 358 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opEq, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2271 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 359 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opLT, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2277 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 360 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opLE, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2283 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 361 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opGT, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2289 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 362 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opGE, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2295 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 363 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opNE, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2301 "tigParse.cpp" /* yacc.c:1646  */
    break;


#line 2305 "tigParse.cpp" /* yacc.c:1646  */
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
#line 366 "tig.y" /* yacc.c:1906  */


void yyerror(const char *s) {
	fprintf(stdout, "\n%s, unexpected '%s' on line %d:", s, yytext,lineNo);
	rewind(yyin);
	char buf[500];
	for (int line=0; line < lineNo;line++)
		fgets(buf,500,yyin);
	fprintf(stdout, "\n%s", buf);
}
