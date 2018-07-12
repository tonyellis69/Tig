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
    GETSTRING = 268,
    HOT = 269,
    MAKE_HOT = 270,
    PURGE = 271,
    START_TIMER = 272,
    START_EVENT = 273,
    AT = 274,
    INTEGER = 275,
    IDENTIFIER = 276,
    STRING = 277,
    ENDL = 278,
    IF = 279,
    FOR = 280,
    EACH = 281,
    IN = 282,
    SELF = 283,
    CHILDREN = 284,
    ADD_ASSIGN = 285,
    BREAK = 286,
    TRON = 287,
    TROFF = 288,
    NOTHING = 289,
    MOVE = 290,
    TO = 291,
    EQ = 292,
    NE = 293,
    GE = 294,
    LE = 295,
    OR = 296,
    AND = 297,
    UMINUS = 298,
    IFX = 299,
    ELSE = 300
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

#line 182 "tigParse.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TIGPARSE_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 197 "tigParse.cpp" /* yacc.c:358  */

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
#define YYFINAL  83
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   511

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  235

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    49,     2,     2,
      57,    58,    47,    45,    56,    46,    60,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    53,
      42,    59,    40,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    62,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     2,    55,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    41,    43,    44,    50,    51,
      52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    78,    78,    79,    83,    84,    85,    86,    90,    91,
      92,    93,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     118,   119,   123,   128,   129,   130,   134,   138,   142,   143,
     144,   148,   152,   153,   158,   159,   160,   161,   162,   168,
     169,   174,   178,   179,   183,   183,   185,   189,   190,   194,
     195,   196,   200,   204,   219,   220,   221,   222,   223,   227,
     228,   232,   233,   237,   241,   254,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   277,   281,   285,   291,   296,   300,   301,   302,
     306,   307,   311,   315,   319,   323,   324,   328,   329,   330,
     335,   339,   340,   345,   346,   347,   348,   349,   350
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRINT", "SET_WINDOW", "CLEAR_WINDOW",
  "END", "RETURN", "EVENT", "OPTION", "OBJECT", "HAS", "ARROW",
  "GETSTRING", "HOT", "MAKE_HOT", "PURGE", "START_TIMER", "START_EVENT",
  "AT", "INTEGER", "IDENTIFIER", "STRING", "ENDL", "IF", "FOR", "EACH",
  "IN", "SELF", "CHILDREN", "ADD_ASSIGN", "BREAK", "TRON", "TROFF",
  "NOTHING", "MOVE", "TO", "EQ", "NE", "GE", "'>'", "LE", "'<'", "OR",
  "AND", "'+'", "'-'", "'*'", "'/'", "'%'", "UMINUS", "IFX", "ELSE", "';'",
  "'{'", "'}'", "','", "'('", "')'", "'='", "'.'", "'['", "']'", "$accept",
  "program", "tigcode", "statement", "return_expr", "assignment",
  "var_or_obj_memb", "variable_assignee", "obj_member_assignee",
  "obj_expr", "element_assignee", "string_statement", "dec_statement",
  "level", "obj_identifier", "class_identifier", "optional_member_list",
  "$@1", "member_decl_list", "member_decl", "memb_decl_identifier",
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
      62,   295,    60,   296,   297,    43,    45,    42,    47,    37,
     298,   299,   300,    59,   123,   125,    44,    40,    41,    61,
      46,    91,    93
};
# endif

#define YYPACT_NINF -171

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-171)))

#define YYTABLE_NINF -97

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     304,   359,   -54,   -28,   -17,   359,  -171,    45,   359,    18,
      78,    16,  -171,    48,    96,  -171,    73,    81,   103,    30,
     338,   157,   304,  -171,   107,    47,  -171,  -171,   106,  -171,
     110,  -171,    31,   156,   155,   124,   133,  -171,   127,   128,
     125,  -171,   126,  -171,    41,  -171,   130,   131,  -171,   359,
      89,   132,   435,  -171,   135,  -171,  -171,   139,  -171,  -171,
    -171,  -171,  -171,   359,  -171,  -171,   145,   465,   171,   399,
    -171,  -171,   180,   359,    63,  -171,  -171,  -171,  -171,   -22,
      22,  -171,   234,  -171,  -171,  -171,  -171,   359,   359,    92,
     181,  -171,  -171,   182,   156,   155,  -171,   148,   183,   156,
    -171,   359,  -171,  -171,   359,   359,    30,    91,  -171,  -171,
    -171,  -171,   -15,  -171,    92,   359,   359,   359,   359,   359,
     359,   359,   359,  -171,   359,   357,  -171,   153,   359,   187,
     367,   149,    -5,   154,    30,   194,  -171,  -171,   445,   465,
    -171,  -171,  -171,   159,     9,   165,   163,   156,   202,  -171,
     174,   465,   465,    67,   411,    87,  -171,    89,  -171,   166,
      93,    93,    93,    93,    93,    93,  -171,  -171,    90,   189,
    -171,   455,   190,   338,    30,   212,    37,  -171,  -171,  -171,
     359,  -171,   191,  -171,   193,  -171,    -4,  -171,   359,   192,
     359,  -171,  -171,   184,  -171,  -171,  -171,  -171,   195,   137,
     197,  -171,    94,  -171,   202,  -171,  -171,   338,   359,    24,
      89,  -171,  -171,  -171,  -171,  -171,   465,  -171,   423,   338,
    -171,  -171,  -171,   269,   115,  -171,     3,   359,  -171,  -171,
     192,  -171,   389,  -171,  -171
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     0,    31,    49,     0,     0,     0,
       0,    36,    73,     0,     0,    40,     0,     0,     0,     0,
       0,     0,     2,     4,     0,     0,    33,    34,     0,    35,
       0,     6,     0,    56,     0,     0,    42,    39,     0,     0,
       0,    77,     0,   102,    92,   101,    88,     0,    91,     0,
       0,     0,     0,    76,    80,    81,    82,     0,    83,   100,
      84,    85,    86,     0,    29,    11,     0,    30,     0,     0,
      13,    74,     0,     0,     0,    24,    26,    27,    38,     0,
      36,    71,     0,     1,     5,     7,     9,     0,     0,     0,
       0,    12,    50,    51,    56,     0,    54,     0,    51,    56,
      48,     0,    15,    16,    99,     0,     0,     0,   108,    51,
     107,   109,     0,   105,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,    99,     0,    19,     0,     0,     0,
       0,    36,     0,     0,     0,     0,    10,    72,     0,    32,
      92,   111,   112,     0,    93,     0,     0,    56,     0,    44,
       0,    43,    97,     0,     0,     0,    87,     0,   103,     0,
     113,   118,   117,   116,   115,   114,    78,    79,     0,     0,
      17,     0,     0,     0,     0,     0,     0,    93,    23,    41,
      99,    46,     0,    62,    55,    57,    59,    45,     0,    95,
       0,    89,   106,   110,    95,    28,    18,    14,    20,     0,
      37,    25,     0,    47,     0,    65,    64,     0,    99,     0,
       0,    67,    61,    66,    70,    68,    98,    63,     0,     0,
      22,    94,    58,     0,     0,    60,     0,     0,    21,    75,
       0,   104,     0,    69,    90
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -171,  -171,  -171,    13,  -171,  -171,     6,  -171,  -171,   -10,
    -171,  -171,   231,  -171,     8,   222,   -84,  -171,  -171,    56,
    -171,  -171,    52,  -171,    57,  -171,  -171,  -170,    -1,   -60,
       1,    11,    12,     2,  -119,  -171,   -40,  -171,  -171,    53,
     111,  -171,   164,  -171
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,    22,    81,    66,    24,    51,    26,    27,    28,
      29,    30,    31,    32,   111,    34,    97,   148,   184,   185,
     186,    35,   212,   213,    82,    36,    72,   214,   152,    53,
      54,    55,    56,    57,   153,    58,    59,    60,   215,   112,
     113,    61,   143,    62
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,    37,    40,    63,    67,   168,    25,    69,    33,    79,
     146,    38,    39,    23,   134,   150,   205,   109,   206,   217,
      37,    37,   174,    37,    40,    64,    25,   -51,    25,   141,
      33,    38,    39,    38,    39,    84,    65,   -52,   135,   -37,
      94,   157,    99,    92,   205,   109,   206,   158,   107,   142,
     207,    78,    93,   208,   141,   209,    89,   210,    15,   157,
     233,   202,   125,   182,   133,   231,   -96,    68,   -37,   -51,
     -37,    70,   130,   -96,   142,    37,   -38,    87,   207,   -96,
     132,   208,   -38,    37,   131,   210,   138,   139,    25,   224,
     201,    15,   145,    38,    39,   137,   155,   135,   -96,    71,
     151,   -38,   -36,   147,   154,    73,    88,    37,    89,   108,
     109,   110,    43,   140,   160,   161,   162,   163,   164,   165,
     166,   167,    74,   188,   176,   189,    75,   171,   115,   116,
     117,   118,   119,   120,    76,    37,   121,   122,   121,   122,
       1,     2,     3,     4,     5,   191,   188,   135,   194,   156,
     188,     7,   221,     8,     9,    10,    77,    83,    80,    12,
      86,    13,    14,    91,   199,    15,    90,    96,    16,    17,
      18,   188,    19,   230,    37,    37,    98,   100,   101,    25,
     102,   103,   104,   105,    38,    39,   198,   216,   106,   218,
     -40,    20,   127,   114,   211,   -39,   124,   135,   126,   129,
      37,   149,   144,   -52,   -53,    25,   170,   172,    37,   -38,
      38,    39,   220,    25,   175,   177,   181,   211,    38,    39,
      37,   179,   180,   183,    37,    25,   232,   187,   193,    25,
      38,    39,   228,   200,    38,    39,   137,     1,     2,     3,
       4,     5,   195,   197,   203,   -41,   207,   219,     7,   204,
       8,     9,    10,    85,    95,    80,    12,   -93,    13,    14,
     222,   225,    15,   226,   223,    16,    17,    18,   192,    19,
       0,     0,     1,     2,     3,     4,     5,     0,   159,     0,
       0,     0,     0,     7,     0,     8,     9,    10,    20,   136,
      80,    12,     0,    13,    14,     0,     0,    15,     0,     0,
      16,    17,    18,     0,    19,     0,     0,     1,     2,     3,
       4,     5,     0,     0,     0,     0,     6,     0,     7,     0,
       8,     9,    10,    20,   229,    11,    12,     0,    13,    14,
       0,     0,    15,     0,     0,    16,    17,    18,     0,    19,
       0,     1,     2,     3,     4,     5,     0,     0,     0,     0,
       0,     0,     7,     0,     8,     9,    10,     0,    20,    80,
      12,     0,    13,    14,     0,     0,    15,     0,     0,    16,
      17,    18,    41,    19,    42,     0,     0,     0,     0,    43,
      44,    45,     0,     0,     0,     0,     0,    46,    47,     0,
       0,     0,    20,    48,   115,   116,   117,   118,   119,   120,
       0,     0,   121,   122,   115,   116,   117,   118,   119,   120,
       0,     0,   121,   122,     0,   169,    49,     0,     0,     0,
      50,     0,     0,     0,     0,   173,   115,   116,   117,   118,
     119,   120,     0,     0,   121,   122,   115,   116,   117,   118,
     119,   120,     0,     0,   121,   122,     0,   234,   115,   116,
     117,   118,   119,   120,     0,   128,   121,   122,     0,     0,
     115,   116,   117,   118,   119,   120,     0,   190,   121,   122,
       0,     0,   115,   116,   117,   118,   119,   120,     0,   227,
     121,   122,   115,   116,   117,   118,   119,   120,   123,     0,
     121,   122,   115,   116,   117,   118,   119,   120,   178,     0,
     121,   122,   115,   116,   117,   118,   119,   120,   196,     0,
     121,   122
};

static const yytype_int16 yycheck[] =
{
       1,     0,     0,    57,     5,   124,     0,     8,     0,    19,
      94,     0,     0,     0,    36,    99,    20,    21,    22,   189,
      19,    20,    27,    22,    22,    53,    20,    11,    22,    89,
      22,    20,    20,    22,    22,    22,    53,    21,    60,    30,
      32,    56,    34,    12,    20,    21,    22,    62,    49,    89,
      54,    21,    21,    57,   114,    59,    61,    61,    28,    56,
     230,   180,    63,   147,    74,    62,    57,    22,    59,    53,
      61,    53,    73,    57,   114,    74,    60,    30,    54,    57,
      74,    57,    60,    82,    21,    61,    87,    88,    82,   208,
      53,    28,    90,    82,    82,    82,   106,    60,    57,    21,
     101,    60,    61,    95,   105,    57,    59,   106,    61,    20,
      21,    22,    20,    21,   115,   116,   117,   118,   119,   120,
     121,   122,    26,    56,   134,    58,    53,   128,    37,    38,
      39,    40,    41,    42,    53,   134,    45,    46,    45,    46,
       3,     4,     5,     6,     7,    58,    56,    60,    58,    58,
      56,    14,    58,    16,    17,    18,    53,     0,    21,    22,
      53,    24,    25,    53,   174,    28,    60,    11,    31,    32,
      33,    56,    35,    58,   173,   174,    21,    53,    45,   173,
      53,    53,    57,    57,   173,   173,   173,   188,    57,   190,
      60,    54,    21,    61,   186,    60,    57,    60,    53,    19,
     199,    53,    21,    21,    21,   199,    53,    20,   207,    60,
     199,   199,   199,   207,    60,    21,    53,   209,   207,   207,
     219,    62,    57,    21,   223,   219,   227,    53,    62,   223,
     219,   219,   219,    21,   223,   223,   223,     3,     4,     5,
       6,     7,    53,    53,    53,    61,    54,    52,    14,    56,
      16,    17,    18,    22,    32,    21,    22,    60,    24,    25,
     204,   209,    28,   210,   207,    31,    32,    33,   157,    35,
      -1,    -1,     3,     4,     5,     6,     7,    -1,   114,    -1,
      -1,    -1,    -1,    14,    -1,    16,    17,    18,    54,    55,
      21,    22,    -1,    24,    25,    -1,    -1,    28,    -1,    -1,
      31,    32,    33,    -1,    35,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    14,    -1,
      16,    17,    18,    54,    55,    21,    22,    -1,    24,    25,
      -1,    -1,    28,    -1,    -1,    31,    32,    33,    -1,    35,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    14,    -1,    16,    17,    18,    -1,    54,    21,
      22,    -1,    24,    25,    -1,    -1,    28,    -1,    -1,    31,
      32,    33,    13,    35,    15,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,
      -1,    -1,    54,    34,    37,    38,    39,    40,    41,    42,
      -1,    -1,    45,    46,    37,    38,    39,    40,    41,    42,
      -1,    -1,    45,    46,    -1,    58,    57,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    58,    37,    38,    39,    40,
      41,    42,    -1,    -1,    45,    46,    37,    38,    39,    40,
      41,    42,    -1,    -1,    45,    46,    -1,    58,    37,    38,
      39,    40,    41,    42,    -1,    56,    45,    46,    -1,    -1,
      37,    38,    39,    40,    41,    42,    -1,    56,    45,    46,
      -1,    -1,    37,    38,    39,    40,    41,    42,    -1,    56,
      45,    46,    37,    38,    39,    40,    41,    42,    53,    -1,
      45,    46,    37,    38,    39,    40,    41,    42,    53,    -1,
      45,    46,    37,    38,    39,    40,    41,    42,    53,    -1,
      45,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    12,    14,    16,    17,
      18,    21,    22,    24,    25,    28,    31,    32,    33,    35,
      54,    64,    65,    66,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    84,    88,    93,    94,    95,
      96,    13,    15,    20,    21,    22,    28,    29,    34,    57,
      61,    69,    91,    92,    93,    94,    95,    96,    98,    99,
     100,   104,   106,    57,    53,    53,    67,    91,    22,    91,
      53,    21,    89,    57,    26,    53,    53,    53,    21,    72,
      21,    66,    87,     0,    66,    75,    53,    30,    59,    61,
      60,    53,    12,    21,    77,    78,    11,    79,    21,    77,
      53,    45,    53,    53,    57,    57,    57,    91,    20,    21,
      22,    77,   102,   103,    61,    37,    38,    39,    40,    41,
      42,    45,    46,    53,    57,    91,    53,    21,    56,    19,
      91,    21,    69,    72,    36,    60,    55,    66,    91,    91,
      21,    92,    99,   105,    21,    96,    79,    77,    80,    53,
      79,    91,    91,    97,    91,    72,    58,    56,    62,   105,
      91,    91,    91,    91,    91,    91,    91,    91,    97,    58,
      53,    91,    20,    58,    27,    60,    72,    21,    53,    62,
      57,    53,    79,    21,    81,    82,    83,    53,    56,    58,
      56,    58,   103,    62,    58,    53,    53,    53,    66,    72,
      21,    53,    97,    53,    56,    20,    22,    54,    57,    59,
      61,    77,    85,    86,    90,   101,    91,    90,    91,    52,
      66,    58,    82,    87,    97,    85,   102,    56,    66,    55,
      58,    62,    91,    90,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    64,    65,    65,    65,    65,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      67,    67,    68,    69,    69,    69,    70,    71,    72,    72,
      72,    73,    74,    74,    75,    75,    75,    75,    75,    76,
      76,    77,    78,    78,    80,    79,    79,    81,    81,    82,
      82,    82,    83,    84,    85,    85,    85,    85,    85,    86,
      86,    87,    87,    88,    89,    90,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    92,    93,    94,    95,    96,    97,    97,    97,
      98,    98,    99,   100,   101,   102,   102,   103,   103,   103,
     104,   105,   105,   106,   106,   106,   106,   106,   106
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     2,     3,     2,
       3,     2,     2,     2,     5,     2,     2,     4,     5,     3,
       5,     7,     6,     4,     2,     5,     2,     2,     5,     2,
       1,     0,     3,     1,     1,     1,     1,     3,     1,     1,
       1,     4,     1,     3,     3,     4,     4,     5,     2,     1,
       2,     1,     1,     2,     0,     3,     0,     1,     3,     1,
       3,     2,     1,     5,     1,     1,     1,     1,     1,     4,
       1,     1,     2,     1,     1,     3,     1,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     4,
       8,     1,     1,     3,     6,     4,     1,     1,     3,     0,
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
#line 78 "tig.y" /* yacc.c:1646  */
    { tigC->encode((yyvsp[0].nPtr)); }
#line 1483 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 79 "tig.y" /* yacc.c:1646  */
    { ;}
#line 1489 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 83 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1495 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 84 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1501 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 85 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1507 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 86 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1513 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 90 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opPrint,(yyvsp[-1].nPtr)); }
#line 1519 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 91 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1525 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 92 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1531 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 93 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opEnd);}
#line 1537 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 95 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CStrStatement((yyvsp[-1].nPtr));}
#line 1543 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 96 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opStartTimer); }
#line 1549 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 97 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CTimedEventNode((yyvsp[-3].nPtr),(yyvsp[-1].iValue)); }
#line 1555 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 98 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CallDiscardNode((yyvsp[-1].nPtr)); }
#line 1561 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 99 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CallDiscardNode((yyvsp[-1].nPtr)); }
#line 1567 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 100 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CHotTextNode((yyvsp[-2].str),(yyvsp[-1].str),NULL); }
#line 1573 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 101 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opPurge,(yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1579 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 102 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CReturnNode((yyvsp[-1].nPtr)); }
#line 1585 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 103 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CIfNode((yyvsp[-2].nPtr), (yyvsp[0].nPtr), NULL); }
#line 1591 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 104 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CIfNode((yyvsp[-4].nPtr), (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1597 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 105 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CForEachNode((yyvsp[-3].nPtr), (yyvsp[-1].nPtr), (yyvsp[0].nPtr)); }
#line 1603 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 106 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpAssignNode(opAdd,(yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1609 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 107 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opBrk); }
#line 1615 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 108 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opMove,(yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1621 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 109 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CTronNode(true); }
#line 1627 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 110 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CTronNode(false); }
#line 1633 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 111 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opWin,(yyvsp[-2].nPtr)); }
#line 1639 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 112 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opClr); }
#line 1645 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 118 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1651 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 119 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = NULL; }
#line 1657 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 123 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAssign,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1663 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 128 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1669 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 129 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1675 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 130 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1681 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 134 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CVarAssigneeNode((yyvsp[0].str)); }
#line 1687 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 138 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjMemberAssigneeNode((yyvsp[-2].nPtr),(yyvsp[0].str)); }
#line 1693 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 142 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjRefNode((yyvsp[0].str)); }
#line 1699 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 143 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1705 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 144 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CSelfExprNode(); }
#line 1711 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 148 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayAssignNode((yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 1717 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 152 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1723 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 153 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAdd, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1729 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 158 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),NULL); }
#line 1735 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 159 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),(yyvsp[-3].nPtr)); }
#line 1741 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 160 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),NULL); }
#line 1747 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 161 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjDeclNode((yyvsp[-2].nPtr),(yyvsp[-1].nPtr),(yyvsp[-3].nPtr)); }
#line 1753 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 162 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1759 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 168 "tig.y" /* yacc.c:1646  */
    { CSyntaxNode::childLevel++; }
#line 1765 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 169 "tig.y" /* yacc.c:1646  */
    { CSyntaxNode::childLevel++; }
#line 1771 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 174 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CObjIdentNode((yyvsp[0].str)); }
#line 1777 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 178 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new ClassIdentNode((yyvsp[0].str)); }
#line 1783 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 179 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),new ClassIdentNode((yyvsp[0].str))); }
#line 1789 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 183 "tig.y" /* yacc.c:1646  */
    { CSyntaxNode::funcMode(true); }
#line 1795 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 184 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1801 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 185 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = NULL; }
#line 1807 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 189 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1813 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 190 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1819 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 194 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberDeclNode((yyvsp[0].nPtr),NULL); }
#line 1825 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 195 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberDeclNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1831 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 196 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberDeclNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1837 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 200 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMembDeclIdentNode((yyvsp[0].str)); }
#line 1843 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 204 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CGlobalFuncDeclNode((yyvsp[-4].nPtr),(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1849 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 219 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((yyvsp[0].str)); }
#line 1855 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 220 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((yyvsp[0].iValue)); }
#line 1861 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 221 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((yyvsp[0].nPtr)); }
#line 1867 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 222 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((CObjIdentNode*)(yyvsp[0].nPtr)); }
#line 1873 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 223 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CInitNode((CArrayInitListNode*)(yyvsp[0].nPtr)); }
#line 1879 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 227 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CFunctionDefNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1885 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 228 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CFunctionDefNode(NULL,(yyvsp[0].nPtr)); }
#line 1891 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 232 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1897 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 233 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1903 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 237 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CStrNode((yyvsp[0].str)); }
#line 1909 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 241 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CEventIdentNode((yyvsp[0].str)); }
#line 1915 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 254 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CodeBlockNode((yyvsp[-1].nPtr)); }
#line 1921 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 258 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1927 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 259 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opGetString); }
#line 1933 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 260 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opAdd, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1939 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 261 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opSub, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1945 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 262 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1951 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 263 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1957 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 264 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1963 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 265 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1969 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 266 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1975 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 267 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1981 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 268 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1987 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 269 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1993 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 270 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CSelfExprNode(); }
#line 1999 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 271 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opChildren,(yyvsp[-1].nPtr)); }
#line 2005 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 272 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opMakeHot,(yyvsp[-5].nPtr),(yyvsp[-3].nPtr),(yyvsp[-1].nPtr));}
#line 2011 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 273 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CNothingNode(); }
#line 2017 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 277 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CVarExprNode((yyvsp[0].str)); }
#line 2023 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 281 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberExprNode((yyvsp[-2].nPtr), (yyvsp[0].str)); }
#line 2029 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 285 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberCallNode((yyvsp[-5].nPtr), (yyvsp[-3].nPtr), (yyvsp[-1].nPtr)); }
#line 2035 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 291 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CMemberCallNode(NULL, (yyvsp[-3].nPtr), (yyvsp[-1].nPtr)); }
#line 2041 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 296 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CFuncIdentNode((yyvsp[0].str)); }
#line 2047 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 300 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CParamExprNode((yyvsp[0].nPtr)); }
#line 2053 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 301 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-2].nPtr),new CParamExprNode((yyvsp[0].nPtr))); }
#line 2059 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 302 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = NULL; }
#line 2065 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 306 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2071 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 307 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CStrNode((yyvsp[0].str)); }
#line 2077 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 311 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CIntNode((yyvsp[0].iValue)); }
#line 2083 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 315 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitNode((yyvsp[-1].nPtr)); }
#line 2089 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 319 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitListNode((yyvsp[-1].nPtr)); }
#line 2095 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 323 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2101 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 324 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CJointNode((yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 2107 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 328 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitConstNode((yyvsp[0].str)); }
#line 2113 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 329 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitConstNode((yyvsp[0].iValue)); }
#line 2119 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 330 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayInitConstNode((CObjIdentNode*)(yyvsp[0].nPtr)); }
#line 2125 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 335 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new CArrayElementExprNode((yyvsp[-3].nPtr),(yyvsp[-1].nPtr)); }
#line 2131 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 339 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2137 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 340 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2143 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 345 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opEq, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2149 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 346 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opLT, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2155 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 347 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opLE, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2161 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 348 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opGT, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2167 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 349 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opGE, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2173 "tigParse.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 350 "tig.y" /* yacc.c:1646  */
    { (yyval.nPtr) = new COpNode(opNE, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2179 "tigParse.cpp" /* yacc.c:1646  */
    break;


#line 2183 "tigParse.cpp" /* yacc.c:1646  */
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
#line 353 "tig.y" /* yacc.c:1906  */


void yyerror(const char *s) {
	fprintf(stdout, "\n%s, unexpected '%s' on line %d:", s, yytext,lineNo);
	rewind(yyin);
	char buf[500];
	for (int line=0; line < lineNo;line++)
		fgets(buf,500,yyin);
	fprintf(stdout, "\n%s", buf);
}
