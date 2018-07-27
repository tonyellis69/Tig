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
    USED = 275,
    STYLE = 276,
    CAP = 277,
    ARRAY = 278,
    START_TIMER = 279,
    START_EVENT = 280,
    AT = 281,
    INTEGER = 282,
    IDENTIFIER = 283,
    STRING = 284,
    ENDL = 285,
    IF = 286,
    FOR = 287,
    EACH = 288,
    IN = 289,
    OF = 290,
    SELF = 291,
    CHILDREN = 292,
    ADD_ASSIGN = 293,
    BREAK = 294,
    TRON = 295,
    TROFF = 296,
    NOTHING = 297,
    MOVE = 298,
    TO = 299,
    EQ = 300,
    NE = 301,
    GE = 302,
    LE = 303,
    OR = 304,
    AND = 305,
    UMINUS = 306,
    IFX = 307,
    ELSE = 308
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

#line 190 "tigParse.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TIGPARSE_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 205 "tigParse.cpp" /* yacc.c:358  */

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
#define YYFINAL  94
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   883

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  284

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,     2,     2,    57,    72,     2,
      66,    67,    55,    53,    65,    54,    69,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    62,
      50,    68,    48,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    70,     2,    71,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,     2,    64,     2,     2,     2,     2,
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
      45,    46,    47,    49,    51,    52,    59,    60,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    81,    81,    82,    86,    87,    88,    89,    93,    94,
      95,    96,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   123,   128,   129,   133,   134,   138,
     139,   144,   148,   153,   155,   156,   161,   165,   166,   171,
     172,   173,   174,   175,   181,   182,   187,   191,   192,   196,
     196,   198,   202,   203,   207,   208,   209,   213,   217,   232,
     233,   234,   235,   236,   240,   241,   245,   246,   250,   254,
     267,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   298,   299,   304,   308,   312,   313,
     317,   322,   326,   327,   328,   332,   333,   337,   341,   346,
     347,   351,   355,   359,   360,   364,   365,   367,   372,   376,
     377,   382,   383,   384,   385,   386,   387,   391,   392
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRINT", "SET_WINDOW", "CLEAR_WINDOW",
  "END", "RETURN", "EVENT", "OPTION", "OBJECT", "HAS", "ARROW", "INHERITS",
  "SUPERCLASS", "GETSTRING", "HOT", "MAKE_HOT", "PURGE", "CLEAR", "USED",
  "STYLE", "CAP", "ARRAY", "START_TIMER", "START_EVENT", "AT", "INTEGER",
  "IDENTIFIER", "STRING", "ENDL", "IF", "FOR", "EACH", "IN", "OF", "SELF",
  "CHILDREN", "ADD_ASSIGN", "BREAK", "TRON", "TROFF", "NOTHING", "MOVE",
  "TO", "EQ", "NE", "GE", "'>'", "LE", "'<'", "OR", "AND", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'!'", "UMINUS", "IFX", "ELSE", "';'", "'{'", "'}'",
  "','", "'('", "')'", "'='", "'.'", "'['", "']'", "'&'", "$accept",
  "program", "tigcode", "statement", "memberId", "return_expr",
  "assignment", "var_or_obj_memb", "variable_assignee",
  "obj_member_assignee", "obj_expr", "element_assignee",
  "string_statement", "dec_statement", "level", "obj_identifier",
  "class_identifier", "optional_member_list", "$@1", "member_decl_list",
  "member_decl", "memb_decl_identifier", "global_func_decl", "init_expr",
  "memb_function_def", "statement_list", "string_literal",
  "event_identifier", "code_block", "expression", "variable_expr",
  "deref_variable_expr", "member_expr", "member_call", "func_call",
  "func_indent", "param_list", "constant_expr", "integer_constant",
  "array_init_expr", "expr_seq", "array_dyn_init_elem", "array_init_list",
  "constant_seq", "array_init_const", "array_element_expr",
  "array_index_expr", "comparison_expr", "logic_expression", YY_NULL
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
     295,   296,   297,   298,   299,   300,   301,   302,    62,   303,
      60,   304,   305,    43,    45,    42,    47,    37,    33,   306,
     307,   308,    59,   123,   125,    44,    40,    41,    61,    46,
      91,    93,    38
};
# endif

#define YYPACT_NINF -216

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-216)))

#define YYTABLE_NINF -130

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     459,   172,   -48,   -16,    10,   172,  -216,   529,   172,    17,
      23,    -2,  -216,   -28,    48,  -216,    41,    47,    51,    -7,
     500,   118,   459,  -216,    60,   147,  -216,  -216,    78,    82,
      90,  -216,     4,   132,   125,    94,   113,  -216,  -216,   103,
     107,   108,  -216,  -216,   172,   114,   117,   126,  -216,   220,
    -216,   -12,   129,  -216,    -7,   172,   172,   172,   168,   135,
      -3,   196,   739,     0,  -216,     2,  -216,  -216,   145,  -216,
    -216,  -216,  -216,  -216,   172,  -216,  -216,   154,   829,   159,
     677,   687,  -216,  -216,   197,   172,    -7,  -216,  -216,  -216,
     -11,   -24,  -216,   377,  -216,  -216,  -216,  -216,   163,   172,
     172,    25,   194,   172,  -216,  -216,   204,   222,   125,  -216,
     207,   175,   211,   222,  -216,   172,  -216,  -216,   172,   527,
     172,   172,   172,    -7,   171,   178,  -216,   557,   829,    30,
    -216,  -216,    25,    -7,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,  -216,   172,   567,  -216,  -216,   172,
     172,   214,   590,     5,    -7,   224,  -216,  -216,   172,   757,
     829,   177,  -216,   179,   213,   187,   829,   192,   222,   231,
    -216,   198,  -216,   201,   829,   829,   -37,  -216,   708,   600,
     623,     1,  -216,   172,  -216,   199,   171,    38,    38,    38,
      38,    38,    38,    38,    38,  -216,  -216,    64,   203,   656,
     775,   206,   500,    -7,    -7,   -35,   128,   793,  -216,   202,
     172,  -216,   227,  -216,   208,  -216,    20,   172,  -216,   172,
     212,   172,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
     172,  -216,  -216,   221,   500,   335,  -216,  -216,   112,  -216,
     231,  -216,  -216,  -216,   500,   172,    98,   144,  -216,  -216,
    -216,  -216,  -216,   119,   829,  -216,   718,   811,   500,  -216,
    -216,  -216,  -216,   418,   137,  -216,  -216,  -216,  -216,  -216,
      35,  -216,  -216,   172,  -216,  -216,  -216,   212,   144,  -216,
     633,  -216,  -216,  -216
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     0,    36,    54,     0,     0,     0,
       0,    41,    78,     0,     0,    45,     0,     0,     0,     0,
       0,     0,     2,     4,     0,     0,    39,    40,     0,     0,
       0,     6,     0,    61,     0,     0,    47,    43,    44,     0,
       0,     0,   105,    84,     0,     0,     0,     0,   117,   104,
     116,    94,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,    82,    87,    88,    89,     0,    90,
     115,    91,    92,   103,     0,    31,    11,     0,    35,     0,
       0,     0,    13,    79,     0,     0,     0,    26,    28,    29,
     104,     0,    76,     0,     1,     5,     7,     9,     0,     0,
       0,     0,     0,     0,    12,    55,    56,    61,     0,    59,
       0,     0,    56,    61,    53,     0,    15,    16,   114,     0,
       0,     0,     0,     0,     0,   106,   102,     0,   121,     0,
     119,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,   114,     0,    20,    32,     0,
       0,     0,     0,     0,     0,     0,    10,    77,     0,     0,
      37,    43,   130,     0,   107,     0,    38,     0,    61,     0,
     111,     0,    49,     0,    48,   112,     0,   101,     0,     0,
       0,     0,    93,     0,   118,     0,   100,   131,   136,   135,
     134,   133,   132,   138,   137,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,     0,    25,    46,
     114,    51,     0,    67,    60,    62,    64,   114,    50,     0,
     110,     0,    98,    99,    95,   120,   128,   110,    30,    17,
       0,    19,    14,    21,    43,     0,    27,    33,     0,    52,
       0,    70,    56,    69,     0,   114,     0,     0,    72,    66,
      71,    75,    73,     0,   113,    68,     0,     0,     0,    24,
      23,   108,    63,     0,     0,    65,   126,    34,   125,   127,
       0,   123,   109,     0,    18,    22,    80,     0,     0,   122,
       0,    74,   124,    96
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -216,  -216,  -216,    65,  -216,  -216,  -216,    11,  -216,  -216,
      22,  -216,  -216,   262,  -216,     3,   259,  -105,  -216,  -216,
      54,  -216,  -216,    49,  -216,    52,  -216,  -216,  -215,    -1,
      58,  -216,    74,    85,   110,    14,  -128,  -216,   -82,  -216,
    -216,   115,  -216,  -216,    19,  -216,   169,  -216,  -216
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,    22,    92,   269,    77,    24,    59,    26,    27,
      60,    29,    30,    31,    32,    61,    34,   111,   169,   214,
     215,   216,    35,   249,   250,    93,    36,    84,   251,   175,
      63,    64,    65,    66,    67,    68,   176,    69,    70,    71,
     129,   130,   252,   270,   271,    42,   163,    72,    73
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,   -45,   167,    33,    78,   255,    80,    81,   173,   -56,
     133,    25,   -56,   -43,    41,   -44,   105,   197,    74,   162,
     154,    90,    28,   -41,   -41,    33,   -57,   236,   219,    15,
     220,    25,   106,    25,   155,   107,    41,   113,    85,   203,
     204,    91,    28,   119,    28,   155,    75,   241,   242,   243,
     162,    83,    48,    90,   126,   127,   128,   -45,    37,   -41,
     -56,    15,   281,   212,  -111,    23,   102,  -104,   224,   -43,
     155,   -44,    76,   146,    38,   132,   124,    37,    37,    82,
      37,    86,   238,   244,   152,    39,   245,    95,   246,   253,
     247,   142,   143,    38,    38,   183,    38,   153,   159,   160,
     278,   184,   166,    87,    25,    39,   279,    39,   124,    88,
      40,   168,   125,    89,   174,    28,   165,   264,    94,   178,
     179,   180,    97,   124,   171,   241,   242,   243,    38,   219,
      40,   227,    40,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   109,    37,   181,   110,   102,   199,   200,
     103,    37,   104,   112,   124,   186,   114,   207,   157,   161,
      38,   244,   -42,   -42,   245,   116,   115,    38,   247,   117,
      98,   266,   267,   268,   118,    38,   205,   219,    39,   261,
     120,    37,   128,   121,   219,    99,   272,    43,    44,    45,
     161,    37,   122,    46,    47,   123,   131,    38,   -42,    48,
      49,    50,   219,    40,   277,   132,    38,    38,    51,    52,
     110,   145,    37,    25,    53,   100,   147,   101,   254,   248,
     256,   148,   164,   151,    28,   124,   235,    54,    38,   257,
      55,   158,   -57,   109,   -56,   170,   -42,   172,    56,   -58,
     155,   201,    57,   -41,    58,    25,    25,   -43,  -129,   248,
     209,   -42,   206,   210,   211,    25,    28,    28,   -41,   213,
      37,   234,    37,   218,   217,   228,    28,   233,   232,    25,
     226,  -128,   280,   240,    25,   244,    38,    38,    38,  -111,
      28,   -42,   258,   -42,    96,    28,  -111,    39,   -41,   239,
     -41,   108,    37,    37,   262,   265,   263,   282,   225,   259,
     260,   185,    37,     0,     0,     0,     0,     0,    38,    38,
       0,     0,    40,     0,     0,     0,    37,     0,    38,    39,
      39,    37,     0,   275,     0,     0,     0,     0,   157,    39,
       0,     0,    38,     0,     0,     0,     0,    38,     1,     2,
       3,     4,     5,    39,    40,    40,     0,     0,    39,     0,
       0,     7,     0,     8,    40,     0,     0,     0,     0,     9,
      10,     0,     0,    49,    12,     0,    13,    14,    40,     0,
       0,    15,     0,    40,    16,    17,    18,     0,    19,     0,
       1,     2,     3,     4,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     0,     8,     0,     0,    20,     0,
       0,     9,    10,     0,   155,    49,    12,     0,    13,    14,
       0,     0,     0,    15,     0,     0,    16,    17,    18,     0,
      19,     1,     2,     3,     4,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     8,     0,     0,     0,
      20,   156,     9,    10,     0,     0,    49,    12,     0,    13,
      14,     0,     0,     0,    15,     0,     0,    16,    17,    18,
       0,    19,     1,     2,     3,     4,     5,     0,     0,     0,
       0,     6,     0,     0,     0,     7,     0,     8,     0,     0,
       0,    20,   276,     9,    10,     0,     0,    11,    12,     0,
      13,    14,     0,     0,     0,    15,     0,     0,    16,    17,
      18,     0,    19,     1,     2,     3,     4,     5,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     8,     0,
       0,     0,    20,     0,     9,    10,     0,     0,    49,    12,
       0,    13,    14,     0,     0,     0,    15,     0,     0,    16,
      17,    18,     0,    19,    43,    44,    45,   177,    79,     0,
      46,    47,     0,     0,     0,     0,    48,    49,    50,     0,
       0,     0,     0,    20,     0,    51,    52,     0,     0,     0,
       0,    53,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,     0,     0,    54,     0,     0,    55,     0,     0,
       0,     0,     0,     0,     0,    56,     0,     0,     0,    57,
       0,    58,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,     0,     0,   182,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   198,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,     0,     0,   202,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   222,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,     0,     0,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     283,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,     0,     0,     0,     0,     0,     0,     0,   229,     0,
       0,   230,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   149,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   150,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   221,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   273,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,     0,     0,     0,     0,     0,     0,
       0,   144,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,     0,     0,     0,     0,     0,     0,     0,   208,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
       0,     0,     0,     0,     0,     0,     0,   231,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,     0,     0,
       0,     0,     0,     0,     0,   237,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,     0,     0,     0,     0,
       0,     0,     0,   274,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143
};

static const yytype_int16 yycheck[] =
{
       1,    13,   107,     0,     5,   220,     7,     8,   113,    11,
      13,     0,    14,    13,     0,    13,    12,   145,    66,   101,
      44,    28,     0,    34,    35,    22,    28,    62,    65,    36,
      67,    20,    28,    22,    69,    32,    22,    34,    66,    34,
      35,    19,    20,    44,    22,    69,    62,    27,    28,    29,
     132,    28,    27,    28,    55,    56,    57,    69,     0,    70,
      62,    36,   277,   168,    66,     0,    69,    69,    67,    69,
      69,    69,    62,    74,     0,    70,    54,    19,    20,    62,
      22,    33,   210,    63,    85,     0,    66,    22,    68,   217,
      70,    53,    54,    19,    20,    65,    22,    86,    99,   100,
      65,    71,   103,    62,    93,    20,    71,    22,    86,    62,
       0,   108,    54,    62,   115,    93,   102,   245,     0,   120,
     121,   122,    62,   101,   110,    27,    28,    29,    54,    65,
      20,    67,    22,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    11,    86,   123,    14,    69,   149,   150,
      68,    93,    62,    28,   132,   133,    62,   158,    93,   101,
      86,    63,    34,    35,    66,    62,    53,    93,    70,    62,
      23,    27,    28,    29,    66,   101,   154,    65,    93,    67,
      66,   123,   183,    66,    65,    38,    67,    15,    16,    17,
     132,   133,    66,    21,    22,    66,    28,   123,    70,    27,
      28,    29,    65,    93,    67,    70,   132,   133,    36,    37,
      14,    66,   154,   202,    42,    68,    62,    70,   219,   216,
     221,    62,    28,    26,   202,   203,   204,    55,   154,   230,
      58,    68,    28,    11,    14,    28,    23,    62,    66,    28,
      69,    27,    70,    23,    72,   234,   235,    69,    71,   246,
      71,    38,    28,    66,    62,   244,   234,   235,    38,    28,
     202,   203,   204,    62,    66,    62,   244,   202,    62,   258,
      71,    69,   273,    65,   263,    63,   202,   203,   204,    66,
     258,    68,    61,    70,    22,   263,    66,   202,    68,    62,
      70,    32,   234,   235,   240,   246,   244,   278,   183,   234,
     235,   132,   244,    -1,    -1,    -1,    -1,    -1,   234,   235,
      -1,    -1,   202,    -1,    -1,    -1,   258,    -1,   244,   234,
     235,   263,    -1,   258,    -1,    -1,    -1,    -1,   263,   244,
      -1,    -1,   258,    -1,    -1,    -1,    -1,   263,     3,     4,
       5,     6,     7,   258,   234,   235,    -1,    -1,   263,    -1,
      -1,    16,    -1,    18,   244,    -1,    -1,    -1,    -1,    24,
      25,    -1,    -1,    28,    29,    -1,    31,    32,   258,    -1,
      -1,    36,    -1,   263,    39,    40,    41,    -1,    43,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    -1,    18,    -1,    -1,    63,    -1,
      -1,    24,    25,    -1,    69,    28,    29,    -1,    31,    32,
      -1,    -1,    -1,    36,    -1,    -1,    39,    40,    41,    -1,
      43,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    -1,    18,    -1,    -1,    -1,
      63,    64,    24,    25,    -1,    -1,    28,    29,    -1,    31,
      32,    -1,    -1,    -1,    36,    -1,    -1,    39,    40,    41,
      -1,    43,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    16,    -1,    18,    -1,    -1,
      -1,    63,    64,    24,    25,    -1,    -1,    28,    29,    -1,
      31,    32,    -1,    -1,    -1,    36,    -1,    -1,    39,    40,
      41,    -1,    43,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    18,    -1,
      -1,    -1,    63,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    31,    32,    -1,    -1,    -1,    36,    -1,    -1,    39,
      40,    41,    -1,    43,    15,    16,    17,    20,    19,    -1,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,
      -1,    -1,    -1,    63,    -1,    36,    37,    -1,    -1,    -1,
      -1,    42,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    55,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    70,
      -1,    72,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    65,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    12,    16,    18,    24,
      25,    28,    29,    31,    32,    36,    39,    40,    41,    43,
      63,    74,    75,    76,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    95,    99,   103,   105,   106,
     107,   108,   118,    15,    16,    17,    21,    22,    27,    28,
      29,    36,    37,    42,    55,    58,    66,    70,    72,    80,
      83,    88,   102,   103,   104,   105,   106,   107,   108,   110,
     111,   112,   120,   121,    66,    62,    62,    78,   102,    19,
     102,   102,    62,    28,   100,    66,    33,    62,    62,    62,
      28,    83,    76,    98,     0,    76,    86,    62,    23,    38,
      68,    70,    69,    68,    62,    12,    28,    88,    89,    11,
      14,    90,    28,    88,    62,    53,    62,    62,    66,   102,
      66,    66,    66,    66,    83,   103,   102,   102,   102,   113,
     114,    28,    70,    13,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    62,    66,   102,    62,    62,    65,
      65,    26,   102,    80,    44,    69,    64,    76,    68,   102,
     102,   103,   111,   119,    28,   108,   102,    90,    88,    91,
      28,   108,    62,    90,   102,   102,   109,    20,   102,   102,
     102,    83,    67,    65,    71,   119,    83,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   109,    67,   102,
     102,    27,    67,    34,    35,    83,    28,   102,    62,    71,
      66,    62,    90,    28,    92,    93,    94,    66,    62,    65,
      67,    65,    67,    67,    67,   114,    71,    67,    62,    62,
      65,    62,    62,    76,   103,    83,    62,    62,   109,    62,
      65,    27,    28,    29,    63,    66,    68,    70,    88,    96,
      97,   101,   115,   109,   102,   101,   102,   102,    61,    76,
      76,    67,    93,    98,   109,    96,    27,    28,    29,    77,
     116,   117,    67,    65,    62,    76,    64,    67,    65,    71,
     102,   101,   117,    67
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    74,    75,    75,    75,    75,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    77,    78,    78,    79,    79,    80,
      80,    81,    82,    83,    83,    83,    84,    85,    85,    86,
      86,    86,    86,    86,    87,    87,    88,    89,    89,    91,
      90,    90,    92,    92,    93,    93,    93,    94,    95,    96,
      96,    96,    96,    96,    97,    97,    98,    98,    99,   100,
     101,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   103,   103,   104,   105,   106,   106,
     107,   108,   109,   109,   109,   110,   110,   111,   112,   113,
     113,   114,   115,   116,   116,   117,   117,   117,   118,   119,
     119,   120,   120,   120,   120,   120,   120,   121,   121
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     2,     3,     2,
       3,     2,     2,     2,     5,     2,     2,     5,     7,     5,
       3,     5,     7,     6,     6,     4,     2,     5,     2,     2,
       5,     2,     3,     5,     1,     1,     0,     3,     3,     1,
       1,     1,     3,     1,     1,     1,     4,     1,     3,     3,
       4,     4,     5,     2,     1,     2,     1,     1,     2,     0,
       3,     0,     1,     3,     1,     3,     2,     1,     5,     1,
       1,     1,     1,     1,     4,     1,     1,     2,     1,     1,
       3,     1,     1,     2,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     3,     1,     4,     8,     1,     4,     4,
       3,     3,     2,     1,     1,     1,     2,     3,     6,     6,
       4,     1,     1,     3,     0,     1,     1,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     4,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3
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
#line 81 "tig.y" /* yacc.c:1646  */
    { tigC->encode((yyvsp[0].nPtr)); }
#line 1590 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 82 "tig.y" /* yacc.c:1646  */
    { ;}
#line 1596 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 86 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1602 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 87 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1608 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 88 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1614 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 89 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1620 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 93 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opPrint,(yyvsp[-1].nPtr)); }
#line 1626 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 94 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1632 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 95 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1638 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 96 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opEnd);}
#line 1644 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 98 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CStrStatement((yyvsp[-1].nPtr));}
#line 1650 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 99 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opStartTimer); }
#line 1656 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 100 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CTimedEventNode((yyvsp[-3].nPtr),(yyvsp[-1].iValue)); }
#line 1662 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 101 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CallDiscardNode((yyvsp[-1].nPtr)); }
#line 1668 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 102 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CallDiscardNode((yyvsp[-1].nPtr)); }
#line 1674 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 103 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CHotTextNode((yyvsp[-3].nPtr),(yyvsp[-1].nPtr),NULL); }
#line 1680 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 104 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CHotTextNode((yyvsp[-5].nPtr),(yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1686 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 105 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opPurge,(yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1692 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 106 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CReturnNode((yyvsp[-1].nPtr)); }
#line 1698 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 107 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CIfNode((yyvsp[-2].nPtr), (yyvsp[0].nPtr), NULL); }
#line 1704 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 108 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CIfNode((yyvsp[-4].nPtr), (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1710 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 109 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CForEachNode((yyvsp[-3].nPtr), (yyvsp[-1].nPtr), (yyvsp[0].nPtr)); }
#line 1716 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 110 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CForEachElementNode((yyvsp[-3].nPtr), (yyvsp[-1].nPtr), (yyvsp[0].nPtr)); }
#line 1722 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 111 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpAssignNode(opAdd,(yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1728 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 112 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opBrk); }
#line 1734 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 113 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opMove,(yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1740 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 114 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CTronNode(true); }
#line 1746 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 115 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CTronNode(false); }
#line 1752 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 116 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opWin,(yyvsp[-2].nPtr)); }
#line 1758 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 117 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opClr); }
#line 1764 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 118 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opHotClr); }
#line 1770 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 119 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opArrayPush,(yyvsp[-1].nPtr),(yyvsp[-4].nPtr)); }
#line 1776 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 123 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberIdNode((yyvsp[0].str)); }
#line 1782 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 128 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1788 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 129 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = NULL; }
#line 1794 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 133 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAssign,(yyvsp[0].nPtr),(yyvsp[-2].nPtr)); }
#line 1800 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 134 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAssignElem,(yyvsp[0].nPtr),(yyvsp[-2].nPtr)); }
#line 1806 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 138 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1812 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 139 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1818 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 144 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CVarAssigneeNode((yyvsp[0].str)); }
#line 1824 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 148 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjMemberAssigneeNode((yyvsp[-2].nPtr),(yyvsp[0].str)); }
#line 1830 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 153 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1836 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 155 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1842 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 156 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opPushSelf); }
#line 1848 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 161 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayAssignNode((yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1854 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 165 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1860 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 166 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAdd, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1866 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 171 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),NULL); }
#line 1872 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 172 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),(yyvsp[-3].nPtr)); }
#line 1878 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 173 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),NULL); }
#line 1884 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 174 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),(yyvsp[-3].nPtr)); }
#line 1890 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 175 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1896 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 181 "tig.y" /* yacc.c:1646  */
    { CSyntaxNode::childLevel++; }
#line 1902 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 182 "tig.y" /* yacc.c:1646  */
    { CSyntaxNode::childLevel++; }
#line 1908 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 187 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjIdentNode((yyvsp[0].str)); }
#line 1914 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 191 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new ClassIdentNode((yyvsp[0].str)); }
#line 1920 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 192 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),new ClassIdentNode((yyvsp[0].str))); }
#line 1926 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 196 "tig.y" /* yacc.c:1646  */
    { CSyntaxNode::funcMode(true); }
#line 1932 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 197 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1938 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 198 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = NULL; }
#line 1944 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 202 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1950 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 203 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1956 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 207 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberDeclNode((yyvsp[0].nPtr),NULL); }
#line 1962 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 208 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberDeclNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1968 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 209 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberDeclNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1974 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 213 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMembDeclIdentNode((yyvsp[0].str)); }
#line 1980 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 217 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CGlobalFuncDeclNode((yyvsp[-4].nPtr),(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1986 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 232 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((yyvsp[0].str)); }
#line 1992 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 233 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((yyvsp[0].iValue)); }
#line 1998 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 234 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((yyvsp[0].nPtr)); }
#line 2004 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 235 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((CObjIdentNode*)(yyvsp[0].nPtr)); }
#line 2010 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 236 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((CArrayInitListNode*)(yyvsp[0].nPtr)); }
#line 2016 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 240 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CFunctionDefNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 2022 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 241 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CFunctionDefNode(NULL,(yyvsp[0].nPtr)); }
#line 2028 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 245 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2034 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 246 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 2040 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 250 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CStrNode((yyvsp[0].str)); }
#line 2046 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 254 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CEventIdentNode((yyvsp[0].str)); }
#line 2052 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 267 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CodeBlockNode((yyvsp[-1].nPtr)); }
#line 2058 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 271 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2064 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 272 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2070 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 273 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CVarIdNode((yyvsp[0].str)); }
#line 2076 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 274 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opGetString); }
#line 2082 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 275 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAdd, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2088 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 276 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opSub, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2094 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 277 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2100 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 278 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2106 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 279 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2112 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 280 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2118 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 281 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2124 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 283 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2130 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 284 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 2136 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 285 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opPushSelf); }
#line 2142 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 286 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opChildren,(yyvsp[-1].nPtr)); }
#line 2148 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 287 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opMakeHot,(yyvsp[-5].nPtr),(yyvsp[-3].nPtr),(yyvsp[-1].nPtr));}
#line 2154 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 288 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CNothingNode(); }
#line 2160 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 289 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opStyle,(yyvsp[-1].nPtr)); }
#line 2166 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 290 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opCap,(yyvsp[-1].nPtr)); }
#line 2172 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 291 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opInherits,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 2178 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 292 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opHotCheck,(yyvsp[-1].nPtr)); }
#line 2184 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 293 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opNot,(yyvsp[0].nPtr)); }
#line 2190 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 294 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2196 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 298 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CVarExprNode((yyvsp[0].str)); }
#line 2202 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 299 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2208 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 304 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CDerefVarNode((yyvsp[0].nPtr)); }
#line 2214 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 308 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberExprNode((yyvsp[-2].nPtr), (yyvsp[0].str)); }
#line 2220 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 312 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberCallNode((yyvsp[-5].nPtr), (yyvsp[-3].nPtr), (yyvsp[-1].nPtr)); }
#line 2226 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 313 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CSuperCallNode((yyvsp[-5].nPtr), (yyvsp[-3].nPtr), (yyvsp[-1].nPtr)); }
#line 2232 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 317 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberCallNode(NULL, (yyvsp[-3].nPtr), (yyvsp[-1].nPtr)); }
#line 2238 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 322 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CFuncIdentNode((yyvsp[0].str)); }
#line 2244 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 326 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CParamExprNode((yyvsp[0].nPtr)); }
#line 2250 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 327 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-2].nPtr),new CParamExprNode((yyvsp[0].nPtr))); }
#line 2256 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 328 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = NULL; }
#line 2262 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 332 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2268 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 333 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CStrNode((yyvsp[0].str)); }
#line 2274 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 337 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CIntNode((yyvsp[0].iValue)); }
#line 2280 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 341 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayDynInitNode((yyvsp[-1].nPtr)); }
#line 2286 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 346 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2292 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 347 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 2298 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 351 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayDynInitElem((yyvsp[0].nPtr)); }
#line 2304 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 355 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitListNode((yyvsp[-1].nPtr)); }
#line 2310 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 359 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2316 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 360 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 2322 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 364 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitConstNode((yyvsp[0].str)); }
#line 2328 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 365 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitConstNode((yyvsp[0].iValue)); }
#line 2334 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 367 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitConstNode((CMemberIdNode*)(yyvsp[0].nPtr)); }
#line 2340 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 372 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayElementExprNode((yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 2346 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 376 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2352 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 377 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2358 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 382 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opEq, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2364 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 383 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opLT, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2370 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 384 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opLE, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2376 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 385 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opGT, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2382 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 386 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opGE, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2388 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 387 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opNE, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2394 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 391 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAnd, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2400 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 392 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opOr, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2406 "tigParse.cpp" /* yacc.c:1646  */
    break;


#line 2410 "tigParse.cpp" /* yacc.c:1646  */
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
#line 395 "tig.y" /* yacc.c:1906  */


void yyerror(const char *s) {
	fprintf(stdout, "\n%s, unexpected '%s' on line %d:", s, yytext,lineNo);
	rewind(yyin);
	char buf[500];
	for (int line=0; line < lineNo;line++)
		fgets(buf,500,yyin);
	fprintf(stdout, "\n%s", buf);
}
