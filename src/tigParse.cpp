/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Skeleton implementation for Bison GLR parsers in C

   Copyright (C) 2002-2013 Free Software Foundation, Inc.

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

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0






/* First part of user declarations.  */
#line 1 "tig.y" /* glr.c:207  */

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

#line 77 "tigParse.cpp" /* glr.c:207  */

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

#include "tigParse.hpp"

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;

/* Copy the second part of user declarations.  */

#line 105 "tigParse.cpp" /* glr.c:230  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#define YYSIZEMAX ((size_t) -1)

#ifdef __cplusplus
   typedef bool yybool;
#else
   typedef unsigned char yybool;
#endif
#define yytrue 1
#define yyfalse 0

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify clang.  */
# define YYLONGJMP(Env, Val) (longjmp (Env, Val), YYASSERT (0))
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


#ifndef YYASSERT
# define YYASSERT(Condition) ((void) ((Condition) || (abort (), 0)))
#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  99
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1070

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  142
/* YYNRULES -- Number of states.  */
#define YYNSTATES  290
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 8
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,     2,     2,     2,    60,    75,     2,
      69,    70,    58,    56,    68,    57,    72,    59,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    65,
      53,    71,    51,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    73,     2,    74,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    66,     2,    67,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    52,    54,    55,    62,
      63,    64
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,    80,    80,    81,    85,    86,    87,    88,    92,    93,
      94,    95,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   125,   129,   130,
     134,   135,   139,   140,   145,   149,   153,   154,   158,   162,
     163,   169,   170,   171,   172,   173,   179,   180,   185,   189,
     190,   194,   194,   196,   200,   201,   205,   206,   207,   211,
     215,   227,   228,   229,   230,   231,   235,   236,   240,   241,
     245,   249,   262,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   290,   291,   292,   293,   298,   303,
     304,   309,   313,   314,   319,   320,   323,   324,   325,   329,
     330,   334,   338,   343,   344,   348,   352,   356,   357,   361,
     362,   364,   369,   373,   374,   379,   380,   381,   382,   383,
     384,   388,   389
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRINT", "SET_WINDOW", "CLEAR_WINDOW",
  "OPEN_WINDOW", "END", "RETURN", "EVENT", "OPTION", "OBJECT", "HAS",
  "ARROW", "INHERITS", "SUPERCLASS", "GETSTRING", "HOT", "MAKE_HOT",
  "PURGE", "ALL", "CLEAR", "USED", "STYLE", "CAP", "ARRAY", "MESSAGE",
  "START_TIMER", "START_EVENT", "AT", "INTEGER", "IDENTIFIER", "STRING",
  "ENDL", "IF", "FOR", "EACH", "IN", "OF", "SELF", "CHILDREN",
  "ADD_ASSIGN", "BREAK", "TRON", "TROFF", "NOTHING", "MOVE", "TO", "EQ",
  "NE", "GE", "'>'", "LE", "'<'", "OR", "AND", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'!'", "UMINUS", "IFX", "ELSE", "';'", "'{'", "'}'", "','", "'('",
  "')'", "'='", "'.'", "'['", "']'", "'&'", "$accept", "program",
  "tigcode", "statement", "memberId", "return_expr", "assignment",
  "var_or_obj_memb", "variable_assignee", "obj_member_assignee",
  "obj_expr", "element_assignee", "string_statement", "dec_statement",
  "level", "obj_identifier", "class_identifier", "optional_member_list",
  "$@1", "member_decl_list", "member_decl", "memb_decl_identifier",
  "global_func_decl", "init_expr", "memb_function_def", "statement_list",
  "string_literal", "event_identifier", "code_block", "expression",
  "variable_expr", "deref_variable_expr", "member_call", "func_call",
  "func_ident", "optional_param_list", "param_list", "constant_expr",
  "integer_constant", "array_init_expr", "expr_seq", "array_dyn_init_elem",
  "array_init_list", "constant_seq", "array_init_const",
  "array_element_expr", "array_index_expr", "comparison_expr",
  "logic_expression", YY_NULL
};
#endif

#define YYPACT_NINF -219
#define YYTABLE_NINF -134

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const short int yypact[] =
{
     479,   618,   -56,   -33,   618,   -29,   618,  -219,   554,   586,
     618,   -25,    23,    40,  -219,    12,    28,  -219,    20,    25,
      26,    -6,    -6,   523,   122,   479,  -219,    58,   128,  -219,
    -219,    56,    65,    64,  -219,    17,    96,   101,    84,   108,
    -219,  -219,   100,   103,   116,  -219,  -219,   618,   117,   118,
     119,  -219,    -3,  -219,    -5,   123,  -219,   618,   618,   618,
     618,   152,   120,     3,   176,   902,     5,  -219,  -219,   125,
    -219,  -219,  -219,  -219,  -219,   618,  -219,   920,  -219,   131,
    1010,   137,   818,   138,   839,  1010,    52,  -219,  -219,   166,
     618,    -6,  -219,  -219,  -219,   -31,   153,  -219,   391,  -219,
    -219,  -219,  -219,   134,   618,   618,    57,   -11,   618,  -219,
    -219,   175,   199,   101,  -219,    48,   151,   186,   199,  -219,
     618,  -219,  -219,   618,   646,   618,   618,   618,    -6,  -219,
    -219,   659,  1010,   -24,  -219,  -219,    57,    -6,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,  -219,
     618,   682,  -219,  -219,  -219,   618,  -219,   618,  -219,   618,
     189,   705,   -10,    -6,  -219,  -219,  -219,   618,   938,  1010,
     146,  -219,   147,    77,   154,  1010,   160,   199,   195,  -219,
     154,  -219,   162,  1010,   -47,  -219,   860,   728,   751,    85,
    -219,   618,  -219,   157,    56,    74,    74,    74,    74,    74,
      74,    74,    74,   168,   168,  -219,   106,   167,   797,   956,
    1010,   169,   523,    -6,    -6,     8,   974,  -219,   161,   618,
    -219,  -219,   171,  -219,   173,  -219,   141,  -219,  -219,   177,
     618,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,   618,
    -219,  -219,   178,   523,   340,  -219,  -219,   107,  -219,   195,
    -219,  -219,  -219,   523,   618,   149,   130,  -219,  -219,  -219,
    -219,  -219,  -219,   881,   992,   523,  -219,  -219,  -219,  -219,
     435,   114,  -219,  -219,  -219,  -219,  -219,    32,  -219,   618,
    -219,  -219,  -219,   177,   130,  -219,   774,  -219,  -219,  -219
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const unsigned char yydefact[] =
{
       3,     0,     0,     0,     0,     0,    39,    56,     0,     0,
     118,     0,     0,    44,    80,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     2,     4,     0,     0,    42,
      43,     0,     0,     0,     6,     0,    63,     0,     0,    49,
      46,   113,   106,   107,     0,   105,    85,     0,     0,     0,
       0,   121,   104,   120,    94,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,   106,   107,     0,
      90,   119,    91,    92,   103,     0,    33,     0,    11,     0,
      38,     0,     0,     0,     0,   116,     0,    13,    81,     0,
       0,     0,    27,    29,    30,     0,    46,    78,     0,     1,
       5,     7,     9,     0,     0,     0,     0,     0,     0,    12,
      57,    58,    63,     0,    61,     0,     0,    58,    63,    55,
       0,    15,    16,   118,     0,     0,     0,     0,     0,    89,
     102,     0,   125,     0,   123,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
     118,     0,    31,    21,    34,     0,    20,     0,    36,     0,
       0,     0,     0,     0,   108,    10,    79,     0,     0,    40,
      46,   134,     0,   112,   115,    41,     0,    63,     0,   112,
     115,    51,     0,    50,     0,   101,     0,     0,     0,     0,
      93,     0,   122,     0,   100,   135,   140,   139,   138,   137,
     136,   142,   141,    86,    87,    88,     0,     0,     0,     0,
     117,     0,     0,     0,     0,     0,     0,    26,    48,   118,
     109,    53,     0,    69,    62,    64,    66,   110,    52,   111,
       0,    98,    99,    95,   124,   132,   111,    32,    17,     0,
      19,    14,    22,    46,     0,    28,    35,     0,    54,     0,
      72,    58,    71,     0,   118,     0,     0,    74,    68,    73,
      77,    75,    70,     0,     0,     0,    25,    24,   114,    65,
       0,     0,    67,   130,    37,   129,   131,     0,   127,     0,
      18,    23,    82,     0,     0,   126,     0,    76,   128,    96
};

  /* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -219,  -219,  -219,    18,  -219,  -219,  -219,     1,  -219,  -219,
      61,  -219,  -219,   212,  -219,    14,   204,  -108,  -219,  -219,
      -2,  -219,  -219,    -9,  -219,     0,  -219,  -219,  -218,    -1,
      72,  -219,    37,    53,     6,    68,  -121,  -219,   -91,  -219,
    -219,    59,  -219,  -219,   -32,  -219,   115,  -219,  -219
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,    24,    25,    97,   276,    79,    27,    62,    29,    30,
      63,    32,    33,    34,    35,    64,    37,   116,   178,   224,
     225,   226,    38,   258,   259,    98,    39,    89,   260,    85,
      66,    41,    67,    68,    69,   220,    86,    70,    71,    72,
     133,   134,   261,   277,   278,    45,   172,    73,    74
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const short int yytable[] =
{
      65,    28,   184,    77,   176,    80,    44,    82,    84,   -47,
     182,   262,   -58,    75,    36,   171,   163,   137,    26,   -46,
     173,   159,   -44,   229,    28,    52,    28,   213,   214,   206,
     110,    44,    76,    17,   -44,   -44,    78,    42,   -44,    36,
      87,   107,    22,   100,   191,   171,   124,    22,   111,   112,
     192,   118,   -58,    43,    88,   -58,   129,   130,   131,   132,
      42,    31,    42,   136,    91,   287,  -112,   -47,   -44,   222,
     -44,   -59,    40,   245,   151,   107,    43,   -46,    43,   179,
     107,    90,    95,    31,    31,    92,    31,    51,    52,   161,
      93,    94,   162,    40,    96,    40,    17,    40,   247,    28,
     284,    22,   -45,   168,   169,   -58,   285,   175,   114,  -112,
      22,   115,  -104,   174,   -45,   -45,   166,   158,   -45,   183,
     159,   180,    99,   102,   186,   187,   188,   177,   107,   109,
     146,   147,   117,   271,   148,    42,   108,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   -45,   119,
     -45,    43,    31,   103,   208,   233,   209,   107,   210,    31,
     273,   274,   275,    40,   120,   121,   216,    31,   122,   104,
      40,   250,   251,   252,   159,   159,   236,   268,   170,   250,
     251,   252,   159,   135,   283,   123,   125,   126,   127,   189,
     132,   115,   128,   136,   150,   160,   153,    31,   194,   105,
      40,   106,   154,   156,   164,   167,   -59,   253,   170,    40,
     254,   114,   255,    28,   256,   253,   181,   -60,   254,   211,
    -133,   218,   256,   219,   215,   221,   223,   228,   148,   263,
     242,   235,   237,  -132,   241,    40,   248,   101,   264,   113,
     257,   249,   265,   253,    28,    28,   272,   269,   227,    42,
     234,   193,   288,   270,    28,     0,     0,     0,     0,     0,
       0,   266,   267,     0,     0,    43,    28,     0,     0,   257,
       0,    28,     0,    31,    31,   244,     0,     0,   286,     0,
      42,    42,     0,   281,    40,   243,    40,     0,   166,     0,
      42,     0,     0,     0,     0,     0,    43,    43,     0,     0,
       0,     0,    42,     0,    31,    31,    43,    42,     0,     0,
       0,     0,     0,     0,    31,    40,    40,     0,    43,     0,
       0,     0,     0,    43,     0,    40,    31,     0,     0,     0,
       0,    31,     0,     0,     0,     0,     0,    40,     0,     0,
       0,     0,    40,     1,     2,     3,     4,     5,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     8,     0,     9,
       0,     0,     0,     0,     0,     0,    10,    11,    12,     0,
       0,    52,    14,     0,    15,    16,     0,     0,     0,    17,
       0,     0,    18,    19,    20,     0,    21,     0,     0,     0,
       0,     0,     0,    22,     1,     2,     3,     4,     5,     6,
       0,     0,     0,     0,     0,     0,    23,     0,     8,     0,
       9,     0,   107,     0,     0,     0,     0,    10,    11,    12,
       0,     0,    52,    14,     0,    15,    16,     0,     0,     0,
      17,     0,     0,    18,    19,    20,     0,    21,     1,     2,
       3,     4,     5,     6,    22,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     9,     0,     0,    23,   165,     0,
       0,    10,    11,    12,     0,     0,    52,    14,     0,    15,
      16,     0,     0,     0,    17,     0,     0,    18,    19,    20,
       0,    21,     1,     2,     3,     4,     5,     6,    22,     0,
       0,     0,     7,     0,     0,     0,     8,     0,     9,     0,
       0,    23,   282,     0,     0,    10,    11,    12,     0,     0,
      13,    14,     0,    15,    16,     0,     0,     0,    17,     0,
       0,    18,    19,    20,     0,    21,     1,     2,     3,     4,
       5,     6,    22,     0,     0,     0,     0,     0,     0,     0,
       8,     0,     9,     0,     0,    23,     0,     0,     0,    10,
      11,    12,     0,     0,    52,    14,     0,    15,    16,     0,
       0,     0,    17,     0,     0,    18,    19,    20,     0,    21,
      46,    47,    48,     0,     0,    81,    22,    49,    50,     0,
       0,     0,     0,     0,    51,    52,    53,     0,     0,    23,
       0,     0,     0,    54,    55,     0,     0,     0,     0,    56,
       0,     0,    46,    47,    48,     0,    83,    22,     0,    49,
      50,    57,     0,     0,     0,    58,    51,    52,    53,     0,
       0,     0,     0,    59,     0,    54,    55,    60,     0,    61,
       0,    56,     0,     0,    46,    47,    48,     0,     0,    22,
       0,    49,    50,    57,     0,     0,     0,    58,    51,    52,
      53,     0,     0,     0,     0,    59,     0,    54,    55,    60,
       0,    61,     0,    56,     0,     0,     0,     0,   185,     0,
       0,    22,     0,     0,     0,    57,     0,     0,     0,    58,
       0,     0,     0,     0,     0,     0,     0,    59,     0,     0,
       0,    60,     0,    61,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     0,     0,   148,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,     0,     0,   148,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   190,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
       0,     0,   148,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   207,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,     0,     0,   148,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   212,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,     0,     0,   148,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   231,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     0,
       0,   148,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   232,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,     0,     0,   148,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   289,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,     0,     0,   148,     0,     0,
       0,     0,   238,     0,     0,   239,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,     0,     0,   148,     0,
       0,     0,     0,     0,     0,     0,   155,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,     0,     0,   148,
       0,     0,     0,     0,     0,     0,     0,   157,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,     0,     0,
     148,     0,     0,     0,     0,     0,     0,     0,   230,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     0,
       0,   148,     0,     0,     0,     0,     0,     0,     0,   279,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
       0,     0,   148,     0,     0,     0,     0,   149,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,     0,     0,
     148,     0,     0,     0,     0,   152,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,     0,     0,   148,     0,
       0,     0,     0,   217,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     0,     0,   148,     0,     0,     0,
       0,   240,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,     0,     0,   148,     0,     0,     0,     0,   246,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
       0,     0,   148,     0,     0,     0,     0,   280,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,     0,     0,
     148
};

static const short int yycheck[] =
{
       1,     0,   123,     4,   112,     6,     0,     8,     9,    14,
     118,   229,    15,    69,     0,   106,    47,    14,     0,    14,
      31,    68,    25,    70,    23,    31,    25,    37,    38,   150,
      13,    25,    65,    39,    37,    38,    65,     0,    41,    25,
      65,    72,    53,    25,    68,   136,    47,    53,    31,    35,
      74,    37,    12,     0,    31,    15,    57,    58,    59,    60,
      23,     0,    25,    73,    36,   283,    69,    72,    71,   177,
      73,    31,     0,    65,    75,    72,    23,    72,    25,    31,
      72,    69,    21,    22,    23,    65,    25,    30,    31,    90,
      65,    65,    91,    21,    22,    23,    39,    25,   219,    98,
      68,    53,    25,   104,   105,    65,    74,   108,    12,    69,
      53,    15,    72,   107,    37,    38,    98,    65,    41,   120,
      68,   115,     0,    65,   125,   126,   127,   113,    72,    65,
      56,    57,    31,   254,    60,    98,    71,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,    71,    65,
      73,    98,    91,    25,   155,    70,   157,    72,   159,    98,
      30,    31,    32,    91,    56,    65,   167,   106,    65,    41,
      98,    30,    31,    32,    68,    68,    70,    70,   106,    30,
      31,    32,    68,    31,    70,    69,    69,    69,    69,   128,
     191,    15,    69,    73,    69,    29,    65,   136,   137,    71,
     128,    73,    65,    65,    51,    71,    31,    66,   136,   137,
      69,    12,    71,   212,    73,    66,    65,    31,    69,    30,
      74,    74,    73,    69,   163,    65,    31,    65,    60,   230,
     212,    74,    65,    72,    65,   163,    65,    25,   239,    35,
     226,    68,    64,    66,   243,   244,   255,   249,   180,   212,
     191,   136,   284,   253,   253,    -1,    -1,    -1,    -1,    -1,
      -1,   243,   244,    -1,    -1,   212,   265,    -1,    -1,   255,
      -1,   270,    -1,   212,   213,   214,    -1,    -1,   279,    -1,
     243,   244,    -1,   265,   212,   213,   214,    -1,   270,    -1,
     253,    -1,    -1,    -1,    -1,    -1,   243,   244,    -1,    -1,
      -1,    -1,   265,    -1,   243,   244,   253,   270,    -1,    -1,
      -1,    -1,    -1,    -1,   253,   243,   244,    -1,   265,    -1,
      -1,    -1,    -1,   270,    -1,   253,   265,    -1,    -1,    -1,
      -1,   270,    -1,    -1,    -1,    -1,    -1,   265,    -1,    -1,
      -1,    -1,   270,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    -1,
      -1,    31,    32,    -1,    34,    35,    -1,    -1,    -1,    39,
      -1,    -1,    42,    43,    44,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    53,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    17,    -1,
      19,    -1,    72,    -1,    -1,    -1,    -1,    26,    27,    28,
      -1,    -1,    31,    32,    -1,    34,    35,    -1,    -1,    -1,
      39,    -1,    -1,    42,    43,    44,    -1,    46,     3,     4,
       5,     6,     7,     8,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    -1,    19,    -1,    -1,    66,    67,    -1,
      -1,    26,    27,    28,    -1,    -1,    31,    32,    -1,    34,
      35,    -1,    -1,    -1,    39,    -1,    -1,    42,    43,    44,
      -1,    46,     3,     4,     5,     6,     7,     8,    53,    -1,
      -1,    -1,    13,    -1,    -1,    -1,    17,    -1,    19,    -1,
      -1,    66,    67,    -1,    -1,    26,    27,    28,    -1,    -1,
      31,    32,    -1,    34,    35,    -1,    -1,    -1,    39,    -1,
      -1,    42,    43,    44,    -1,    46,     3,     4,     5,     6,
       7,     8,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    -1,    19,    -1,    -1,    66,    -1,    -1,    -1,    26,
      27,    28,    -1,    -1,    31,    32,    -1,    34,    35,    -1,
      -1,    -1,    39,    -1,    -1,    42,    43,    44,    -1,    46,
      16,    17,    18,    -1,    -1,    21,    53,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    -1,    -1,    66,
      -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    16,    17,    18,    -1,    20,    53,    -1,    23,
      24,    57,    -1,    -1,    -1,    61,    30,    31,    32,    -1,
      -1,    -1,    -1,    69,    -1,    39,    40,    73,    -1,    75,
      -1,    45,    -1,    -1,    16,    17,    18,    -1,    -1,    53,
      -1,    23,    24,    57,    -1,    -1,    -1,    61,    30,    31,
      32,    -1,    -1,    -1,    -1,    69,    -1,    39,    40,    73,
      -1,    75,    -1,    45,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    53,    -1,    -1,    -1,    57,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    73,    -1,    75,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    60,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    68,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    65,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    65,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    65,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    65,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    60,    -1,    -1,    -1,    -1,    65,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    65,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    13,    17,    19,
      26,    27,    28,    31,    32,    34,    35,    39,    42,    43,
      44,    46,    53,    66,    77,    78,    79,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    98,   102,
     106,   107,   108,   109,   110,   121,    16,    17,    18,    23,
      24,    30,    31,    32,    39,    40,    45,    57,    61,    69,
      73,    75,    83,    86,    91,   105,   106,   108,   109,   110,
     113,   114,   115,   123,   124,    69,    65,   105,    65,    81,
     105,    21,   105,    20,   105,   105,   112,    65,    31,   103,
      69,    36,    65,    65,    65,    86,   106,    79,   101,     0,
      79,    89,    65,    25,    41,    71,    73,    72,    71,    65,
      13,    31,    91,    92,    12,    15,    93,    31,    91,    65,
      56,    65,    65,    69,   105,    69,    69,    69,    69,   105,
     105,   105,   105,   116,   117,    31,    73,    14,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    60,    65,
      69,   105,    65,    65,    65,    68,    65,    68,    65,    68,
      29,   105,    83,    47,    51,    67,    79,    71,   105,   105,
     106,   114,   122,    31,   110,   105,    93,    91,    94,    31,
     110,    65,    93,   105,   112,    22,   105,   105,   105,    86,
      70,    68,    74,   122,    86,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   112,    70,   105,   105,
     105,    30,    70,    37,    38,    86,   105,    65,    74,    69,
     111,    65,    93,    31,    95,    96,    97,   111,    65,    70,
      68,    70,    70,    70,   117,    74,    70,    65,    65,    68,
      65,    65,    79,   106,    86,    65,    65,   112,    65,    68,
      30,    31,    32,    66,    69,    71,    73,    91,    99,   100,
     104,   118,   104,   105,   105,    64,    79,    79,    70,    96,
     101,   112,    99,    30,    31,    32,    80,   119,   120,    68,
      65,    79,    67,    70,    68,    74,   105,   104,   120,    70
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    76,    77,    77,    78,    78,    78,    78,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    80,    81,    81,
      82,    82,    83,    83,    84,    85,    86,    86,    87,    88,
      88,    89,    89,    89,    89,    89,    90,    90,    91,    92,
      92,    94,    93,    93,    95,    95,    96,    96,    96,    97,
      98,    99,    99,    99,    99,    99,   100,   100,   101,   101,
     102,   103,   104,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   106,   106,   106,   106,   107,   108,
     108,   109,   110,   110,   111,   111,   112,   112,   112,   113,
     113,   114,   115,   116,   116,   117,   118,   119,   119,   120,
     120,   120,   121,   122,   122,   123,   123,   123,   123,   123,
     123,   124,   124
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     2,     3,     2,
       3,     2,     2,     2,     5,     2,     2,     5,     7,     5,
       3,     3,     5,     7,     6,     6,     4,     2,     5,     2,
       2,     3,     5,     2,     3,     5,     3,     1,     1,     0,
       3,     3,     1,     1,     1,     3,     1,     1,     4,     1,
       3,     3,     4,     4,     5,     2,     1,     2,     1,     1,
       2,     0,     3,     0,     1,     3,     1,     3,     2,     1,
       5,     1,     1,     1,     1,     1,     4,     1,     1,     2,
       1,     1,     3,     1,     2,     1,     3,     3,     3,     2,
       1,     1,     1,     3,     1,     4,     8,     1,     4,     4,
       3,     3,     2,     1,     1,     1,     1,     1,     3,     4,
       4,     4,     1,     1,     3,     0,     1,     3,     0,     1,
       1,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     1,     4,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const unsigned char yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const unsigned char yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned char yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0
};

/* Error token number */
#define YYTERROR 1



YYSTYPE yylval;

int yynerrs;
int yychar;

static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YYDPRINTF(Args)                        \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
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

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YYFPRINTF (stderr, "%s ", Title);                               \
        yy_symbol_print (stderr, Type, Value);        \
        YYFPRINTF (stderr, "\n");                                       \
      }                                                                 \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

struct yyGLRStack;
static void yypstack (struct yyGLRStack* yystackp, size_t yyk)
  __attribute__ ((__unused__));
static void yypdumpstack (struct yyGLRStack* yystackp)
  __attribute__ ((__unused__));

#else /* !YYDEBUG */

# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif


#if YYERROR_VERBOSE

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
static size_t
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
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
    return strlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* !YYERROR_VERBOSE */

/** State numbers, as in LALR(1) machine */
typedef int yyStateNum;

/** Rule numbers, as in LALR(1) machine */
typedef int yyRuleNum;

/** Grammar symbol */
typedef int yySymbol;

/** Item references, as in LALR(1) machine */
typedef short int yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  size_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  non-terminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  size_t yysize, yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;


  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  size_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

static void yyFail (yyGLRStack* yystackp, const char* yymsg)
  __attribute__ ((__noreturn__));
static void
yyFail (yyGLRStack* yystackp, const char* yymsg)
{
  if (yymsg != YY_NULL)
    yyerror (yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

static void yyMemoryExhausted (yyGLRStack* yystackp)
  __attribute__ ((__noreturn__));
static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static inline const char*
yytokenName (yySymbol yytoken)
{
  if (yytoken == YYEMPTY)
    return "";

  return yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) __attribute__ ((__unused__));
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if YYDEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      else
        /* The effect of using yysval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULL;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     __attribute__ ((__unused__));
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyn, size_t yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp,
              YYSTYPE* yyvalp)
{
  yybool yynormal __attribute__ ((__unused__)) =
    (yystackp->yysplitPoint == YY_NULL);
  int yylow;
  YYUSE (yyvalp);
  YYUSE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, N, yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  switch (yyn)
    {
        case 2:
#line 80 "tig.y" /* glr.c:788  */
    { tigC->encode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1302 "tigParse.cpp" /* glr.c:788  */
    break;

  case 3:
#line 81 "tig.y" /* glr.c:788  */
    { ;}
#line 1308 "tigParse.cpp" /* glr.c:788  */
    break;

  case 4:
#line 85 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1314 "tigParse.cpp" /* glr.c:788  */
    break;

  case 5:
#line 86 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1320 "tigParse.cpp" /* glr.c:788  */
    break;

  case 6:
#line 87 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1326 "tigParse.cpp" /* glr.c:788  */
    break;

  case 7:
#line 88 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1332 "tigParse.cpp" /* glr.c:788  */
    break;

  case 8:
#line 92 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opPrint,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1338 "tigParse.cpp" /* glr.c:788  */
    break;

  case 9:
#line 93 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr); }
#line 1344 "tigParse.cpp" /* glr.c:788  */
    break;

  case 10:
#line 94 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr); }
#line 1350 "tigParse.cpp" /* glr.c:788  */
    break;

  case 11:
#line 95 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opEnd);}
#line 1356 "tigParse.cpp" /* glr.c:788  */
    break;

  case 12:
#line 97 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CStrStatement((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr));}
#line 1362 "tigParse.cpp" /* glr.c:788  */
    break;

  case 13:
#line 98 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opStartTimer); }
#line 1368 "tigParse.cpp" /* glr.c:788  */
    break;

  case 14:
#line 99 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CTimedEventNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.iValue)); }
#line 1374 "tigParse.cpp" /* glr.c:788  */
    break;

  case 15:
#line 100 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CallDiscardNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1380 "tigParse.cpp" /* glr.c:788  */
    break;

  case 16:
#line 101 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CallDiscardNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1386 "tigParse.cpp" /* glr.c:788  */
    break;

  case 17:
#line 102 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CHotTextNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),NULL); }
#line 1392 "tigParse.cpp" /* glr.c:788  */
    break;

  case 18:
#line 103 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CHotTextNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1398 "tigParse.cpp" /* glr.c:788  */
    break;

  case 19:
#line 104 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opPurge,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1404 "tigParse.cpp" /* glr.c:788  */
    break;

  case 20:
#line 105 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opPurge,new CIntNode(0),new CIntNode(0)); }
#line 1410 "tigParse.cpp" /* glr.c:788  */
    break;

  case 21:
#line 106 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CReturnNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1416 "tigParse.cpp" /* glr.c:788  */
    break;

  case 22:
#line 107 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr), NULL); }
#line 1422 "tigParse.cpp" /* glr.c:788  */
    break;

  case 23:
#line 108 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1428 "tigParse.cpp" /* glr.c:788  */
    break;

  case 24:
#line 109 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CForEachNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1434 "tigParse.cpp" /* glr.c:788  */
    break;

  case 25:
#line 110 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CForEachElementNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1440 "tigParse.cpp" /* glr.c:788  */
    break;

  case 26:
#line 111 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpAssignNode(opAdd,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1446 "tigParse.cpp" /* glr.c:788  */
    break;

  case 27:
#line 112 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opBrk); }
#line 1452 "tigParse.cpp" /* glr.c:788  */
    break;

  case 28:
#line 113 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opMove,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1458 "tigParse.cpp" /* glr.c:788  */
    break;

  case 29:
#line 114 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CTronNode(true); }
#line 1464 "tigParse.cpp" /* glr.c:788  */
    break;

  case 30:
#line 115 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CTronNode(false); }
#line 1470 "tigParse.cpp" /* glr.c:788  */
    break;

  case 31:
#line 116 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opOpenWin,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1476 "tigParse.cpp" /* glr.c:788  */
    break;

  case 32:
#line 117 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opWin,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr)); }
#line 1482 "tigParse.cpp" /* glr.c:788  */
    break;

  case 33:
#line 118 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opClr); }
#line 1488 "tigParse.cpp" /* glr.c:788  */
    break;

  case 34:
#line 119 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opHotClr); }
#line 1494 "tigParse.cpp" /* glr.c:788  */
    break;

  case 35:
#line 120 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opArrayPush,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.nPtr)); }
#line 1500 "tigParse.cpp" /* glr.c:788  */
    break;

  case 36:
#line 121 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMsgNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1506 "tigParse.cpp" /* glr.c:788  */
    break;

  case 37:
#line 125 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberIdNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1512 "tigParse.cpp" /* glr.c:788  */
    break;

  case 38:
#line 129 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1518 "tigParse.cpp" /* glr.c:788  */
    break;

  case 39:
#line 130 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = NULL; }
#line 1524 "tigParse.cpp" /* glr.c:788  */
    break;

  case 40:
#line 134 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opAssign,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr)); }
#line 1530 "tigParse.cpp" /* glr.c:788  */
    break;

  case 41:
#line 135 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opAssign,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr)); }
#line 1536 "tigParse.cpp" /* glr.c:788  */
    break;

  case 42:
#line 139 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1542 "tigParse.cpp" /* glr.c:788  */
    break;

  case 43:
#line 140 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1548 "tigParse.cpp" /* glr.c:788  */
    break;

  case 44:
#line 145 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CVarAssigneeNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1554 "tigParse.cpp" /* glr.c:788  */
    break;

  case 45:
#line 149 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjMemberAssigneeNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1560 "tigParse.cpp" /* glr.c:788  */
    break;

  case 46:
#line 153 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1566 "tigParse.cpp" /* glr.c:788  */
    break;

  case 47:
#line 154 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opPushSelf); }
#line 1572 "tigParse.cpp" /* glr.c:788  */
    break;

  case 48:
#line 158 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayAssignNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1578 "tigParse.cpp" /* glr.c:788  */
    break;

  case 49:
#line 162 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1584 "tigParse.cpp" /* glr.c:788  */
    break;

  case 50:
#line 163 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opAdd, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1590 "tigParse.cpp" /* glr.c:788  */
    break;

  case 51:
#line 169 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),NULL); }
#line 1596 "tigParse.cpp" /* glr.c:788  */
    break;

  case 52:
#line 170 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr)); }
#line 1602 "tigParse.cpp" /* glr.c:788  */
    break;

  case 53:
#line 171 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),NULL); }
#line 1608 "tigParse.cpp" /* glr.c:788  */
    break;

  case 54:
#line 172 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr)); }
#line 1614 "tigParse.cpp" /* glr.c:788  */
    break;

  case 55:
#line 173 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr); }
#line 1620 "tigParse.cpp" /* glr.c:788  */
    break;

  case 56:
#line 179 "tig.y" /* glr.c:788  */
    { CSyntaxNode::childLevel++; }
#line 1626 "tigParse.cpp" /* glr.c:788  */
    break;

  case 57:
#line 180 "tig.y" /* glr.c:788  */
    { CSyntaxNode::childLevel++; }
#line 1632 "tigParse.cpp" /* glr.c:788  */
    break;

  case 58:
#line 185 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1638 "tigParse.cpp" /* glr.c:788  */
    break;

  case 59:
#line 189 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new ClassIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1644 "tigParse.cpp" /* glr.c:788  */
    break;

  case 60:
#line 190 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),new ClassIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str))); }
#line 1650 "tigParse.cpp" /* glr.c:788  */
    break;

  case 61:
#line 194 "tig.y" /* glr.c:788  */
    { CSyntaxNode::funcMode(true); }
#line 1656 "tigParse.cpp" /* glr.c:788  */
    break;

  case 62:
#line 195 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1662 "tigParse.cpp" /* glr.c:788  */
    break;

  case 63:
#line 196 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = NULL; }
#line 1668 "tigParse.cpp" /* glr.c:788  */
    break;

  case 64:
#line 200 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1674 "tigParse.cpp" /* glr.c:788  */
    break;

  case 65:
#line 201 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1680 "tigParse.cpp" /* glr.c:788  */
    break;

  case 66:
#line 205 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr),NULL); }
#line 1686 "tigParse.cpp" /* glr.c:788  */
    break;

  case 67:
#line 206 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1692 "tigParse.cpp" /* glr.c:788  */
    break;

  case 68:
#line 207 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1698 "tigParse.cpp" /* glr.c:788  */
    break;

  case 69:
#line 211 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMembDeclIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1704 "tigParse.cpp" /* glr.c:788  */
    break;

  case 70:
#line 215 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CGlobalFuncDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1710 "tigParse.cpp" /* glr.c:788  */
    break;

  case 71:
#line 227 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CInitNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1716 "tigParse.cpp" /* glr.c:788  */
    break;

  case 72:
#line 228 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CInitNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.iValue)); }
#line 1722 "tigParse.cpp" /* glr.c:788  */
    break;

  case 73:
#line 229 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CInitNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1728 "tigParse.cpp" /* glr.c:788  */
    break;

  case 74:
#line 230 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CInitNode((CObjIdentNode*)(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1734 "tigParse.cpp" /* glr.c:788  */
    break;

  case 75:
#line 231 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CInitNode((CArrayInitListNode*)(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1740 "tigParse.cpp" /* glr.c:788  */
    break;

  case 76:
#line 235 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CFunctionDefNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1746 "tigParse.cpp" /* glr.c:788  */
    break;

  case 77:
#line 236 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CFunctionDefNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1752 "tigParse.cpp" /* glr.c:788  */
    break;

  case 78:
#line 240 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1758 "tigParse.cpp" /* glr.c:788  */
    break;

  case 79:
#line 241 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1764 "tigParse.cpp" /* glr.c:788  */
    break;

  case 80:
#line 245 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CStrNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1770 "tigParse.cpp" /* glr.c:788  */
    break;

  case 81:
#line 249 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CEventIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1776 "tigParse.cpp" /* glr.c:788  */
    break;

  case 82:
#line 262 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CodeBlockNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1782 "tigParse.cpp" /* glr.c:788  */
    break;

  case 83:
#line 266 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1788 "tigParse.cpp" /* glr.c:788  */
    break;

  case 84:
#line 267 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CVarIdNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1794 "tigParse.cpp" /* glr.c:788  */
    break;

  case 85:
#line 268 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opGetString); }
#line 1800 "tigParse.cpp" /* glr.c:788  */
    break;

  case 86:
#line 269 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opAdd, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1806 "tigParse.cpp" /* glr.c:788  */
    break;

  case 87:
#line 270 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opSub, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1812 "tigParse.cpp" /* glr.c:788  */
    break;

  case 88:
#line 271 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opMod, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1818 "tigParse.cpp" /* glr.c:788  */
    break;

  case 89:
#line 272 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opMinus, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1824 "tigParse.cpp" /* glr.c:788  */
    break;

  case 90:
#line 273 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1830 "tigParse.cpp" /* glr.c:788  */
    break;

  case 91:
#line 274 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1836 "tigParse.cpp" /* glr.c:788  */
    break;

  case 92:
#line 275 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1842 "tigParse.cpp" /* glr.c:788  */
    break;

  case 93:
#line 276 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr); }
#line 1848 "tigParse.cpp" /* glr.c:788  */
    break;

  case 94:
#line 277 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opPushSelf); }
#line 1854 "tigParse.cpp" /* glr.c:788  */
    break;

  case 95:
#line 278 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opChildren,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1860 "tigParse.cpp" /* glr.c:788  */
    break;

  case 96:
#line 279 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opMakeHot,(((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr));}
#line 1866 "tigParse.cpp" /* glr.c:788  */
    break;

  case 97:
#line 280 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CNothingNode(); }
#line 1872 "tigParse.cpp" /* glr.c:788  */
    break;

  case 98:
#line 281 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opStyle,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1878 "tigParse.cpp" /* glr.c:788  */
    break;

  case 99:
#line 282 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opCap,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1884 "tigParse.cpp" /* glr.c:788  */
    break;

  case 100:
#line 283 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opInherits,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1890 "tigParse.cpp" /* glr.c:788  */
    break;

  case 101:
#line 284 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opHotCheck,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1896 "tigParse.cpp" /* glr.c:788  */
    break;

  case 102:
#line 285 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opNot,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1902 "tigParse.cpp" /* glr.c:788  */
    break;

  case 103:
#line 286 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1908 "tigParse.cpp" /* glr.c:788  */
    break;

  case 104:
#line 290 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CVarExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1914 "tigParse.cpp" /* glr.c:788  */
    break;

  case 105:
#line 291 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1920 "tigParse.cpp" /* glr.c:788  */
    break;

  case 106:
#line 292 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1926 "tigParse.cpp" /* glr.c:788  */
    break;

  case 107:
#line 293 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1932 "tigParse.cpp" /* glr.c:788  */
    break;

  case 108:
#line 298 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CDerefVarNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1938 "tigParse.cpp" /* glr.c:788  */
    break;

  case 109:
#line 303 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberCallNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1944 "tigParse.cpp" /* glr.c:788  */
    break;

  case 110:
#line 304 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CSuperCallNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1950 "tigParse.cpp" /* glr.c:788  */
    break;

  case 111:
#line 309 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberCallNode(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1956 "tigParse.cpp" /* glr.c:788  */
    break;

  case 112:
#line 313 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CFuncIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str),NULL); }
#line 1962 "tigParse.cpp" /* glr.c:788  */
    break;

  case 113:
#line 314 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CFuncIdentNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1968 "tigParse.cpp" /* glr.c:788  */
    break;

  case 114:
#line 319 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr); }
#line 1974 "tigParse.cpp" /* glr.c:788  */
    break;

  case 115:
#line 320 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = NULL; }
#line 1980 "tigParse.cpp" /* glr.c:788  */
    break;

  case 116:
#line 323 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CParamExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1986 "tigParse.cpp" /* glr.c:788  */
    break;

  case 117:
#line 324 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),new CParamExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr))); }
#line 1992 "tigParse.cpp" /* glr.c:788  */
    break;

  case 118:
#line 325 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = NULL; }
#line 1998 "tigParse.cpp" /* glr.c:788  */
    break;

  case 119:
#line 329 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2004 "tigParse.cpp" /* glr.c:788  */
    break;

  case 120:
#line 330 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CStrNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 2010 "tigParse.cpp" /* glr.c:788  */
    break;

  case 121:
#line 334 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CIntNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.iValue)); }
#line 2016 "tigParse.cpp" /* glr.c:788  */
    break;

  case 122:
#line 338 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayDynInitNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 2022 "tigParse.cpp" /* glr.c:788  */
    break;

  case 123:
#line 343 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2028 "tigParse.cpp" /* glr.c:788  */
    break;

  case 124:
#line 344 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2034 "tigParse.cpp" /* glr.c:788  */
    break;

  case 125:
#line 348 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayDynInitElem((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2040 "tigParse.cpp" /* glr.c:788  */
    break;

  case 126:
#line 352 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayInitListNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 2046 "tigParse.cpp" /* glr.c:788  */
    break;

  case 127:
#line 356 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2052 "tigParse.cpp" /* glr.c:788  */
    break;

  case 128:
#line 357 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2058 "tigParse.cpp" /* glr.c:788  */
    break;

  case 129:
#line 361 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayInitConstNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 2064 "tigParse.cpp" /* glr.c:788  */
    break;

  case 130:
#line 362 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayInitConstNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.iValue)); }
#line 2070 "tigParse.cpp" /* glr.c:788  */
    break;

  case 131:
#line 364 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayInitConstNode((CMemberIdNode*)(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2076 "tigParse.cpp" /* glr.c:788  */
    break;

  case 132:
#line 369 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayElementExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 2082 "tigParse.cpp" /* glr.c:788  */
    break;

  case 133:
#line 373 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2088 "tigParse.cpp" /* glr.c:788  */
    break;

  case 134:
#line 374 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2094 "tigParse.cpp" /* glr.c:788  */
    break;

  case 135:
#line 379 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opEq, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2100 "tigParse.cpp" /* glr.c:788  */
    break;

  case 136:
#line 380 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opLT, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2106 "tigParse.cpp" /* glr.c:788  */
    break;

  case 137:
#line 381 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opLE, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2112 "tigParse.cpp" /* glr.c:788  */
    break;

  case 138:
#line 382 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opGT, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2118 "tigParse.cpp" /* glr.c:788  */
    break;

  case 139:
#line 383 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opGE, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2124 "tigParse.cpp" /* glr.c:788  */
    break;

  case 140:
#line 384 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opNE, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2130 "tigParse.cpp" /* glr.c:788  */
    break;

  case 141:
#line 388 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opAnd, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2136 "tigParse.cpp" /* glr.c:788  */
    break;

  case 142:
#line 389 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opOr, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2142 "tigParse.cpp" /* glr.c:788  */
    break;


#line 2146 "tigParse.cpp" /* glr.c:788  */
      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

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

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yystos[yys->yylrState],
                &yys->yysemantics.yysval);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YYFPRINTF (stderr, "%s unresolved ", yymsg);
          else
            YYFPRINTF (stderr, "%s incomplete ", yymsg);
          yy_symbol_print (stderr, yystos[yys->yylrState],
                           YY_NULL);
          YYFPRINTF (stderr, "\n");
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh);
        }
    }
}

/** Left-hand-side symbol for rule #YYRULE.  */
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-219)))

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yytable_value) \
  0

/** Set *YYACTION to the action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static inline void
yygetLRActions (yyStateNum yystate, int yytoken,
                int* yyaction, const short int** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yypact_value_is_default (yypact[yystate])
      || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyaction = -yydefact[yystate];
      *yyconflicts = yyconfl;
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyaction = yytable[yyindex];
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
  else
    {
      *yyaction = 0;
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
}

static inline yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yylhs)
{
  int yyr = yypgoto[yylhs - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yylhs - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, size_t yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates = (yyGLRState**) YYMALLOC (16 * sizeof yyset->yystates[0]);
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULL;
  yyset->yylookaheadNeeds =
    (yybool*) YYMALLOC (16 * sizeof yyset->yylookaheadNeeds[0]);
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, size_t yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems =
    (yyGLRStackItem*) YYMALLOC (yysize * sizeof yystackp->yynextFree[0]);
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULL;
  yystackp->yylastDeleted = YY_NULL;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS,YYTOITEMS,YYX,YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem*) (YYX)))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  size_t yynewSize;
  size_t yyn;
  size_t yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems = (yyGLRStackItem*) YYMALLOC (yynewSize * sizeof yynewItems[0]);
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*(yybool *) yyp0)
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULL)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULL)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULL)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULL)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULL)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                 yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULL)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULL && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULL)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULL;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULL || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YYDPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULL;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  size_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULL)
        {
          if (yyi == yyj)
            {
              YYDPRINTF ((stderr, "Removing dead stacks.\n"));
            }
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            {
              YYDPRINTF ((stderr, "Rename stack %lu -> %lu.\n",
                          (unsigned long int) yyi, (unsigned long int) yyj));
            }
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static inline void
yyglrShift (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
            size_t yyposn,
            YYSTYPE* yyvalp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
                 size_t yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULL;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print Args;               \
} while (0)

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static inline void
yy_reduce_print (int yynormal, yyGLRStackItem* yyvsp, size_t yyk,
                 yyRuleNum yyrule)
{
  int yynrhs = yyrhsLength (yyrule);
  int yyi;
  YYFPRINTF (stderr, "Reducing stack %lu by rule %d (line %lu):\n",
             (unsigned long int) yyk, yyrule - 1,
             (unsigned long int) yyrline[yyrule]);
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyvsp[yyi - yynrhs + 1].yystate.yylrState],
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yysval
                                              );
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YYFPRINTF (stderr, " (unresolved)");
      YYFPRINTF (stderr, "\n");
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULL)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
      YYASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      YY_REDUCE_PRINT ((1, yyrhs, yyk, yyrule));
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp,
                           yyvalp);
    }
  else
    {
      int yyi;
      yyGLRState* yys;
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      YY_REDUCE_PRINT ((0, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1, yyk, yyrule));
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
             yybool yyforceEval)
{
  size_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULL)
    {
      YYRESULTTAG yyflag;
      YYSTYPE yysval;

      yyflag = yydoAction (yystackp, yyk, yyrule, &yysval);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULL)
        {
          YYDPRINTF ((stderr, "Parse on stack %lu rejected by rule #%d.\n",
                     (unsigned long int) yyk, yyrule - 1));
        }
      if (yyflag != yyok)
        return yyflag;
      YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yysval);
    }
  else
    {
      size_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YYDPRINTF ((stderr,
                  "Reduced stack %lu by rule #%d; action deferred.  "
                  "Now in state %d.\n",
                  (unsigned long int) yyk, yyrule - 1, yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULL)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YYDPRINTF ((stderr, "Merging stack %lu into stack %lu.\n",
                                (unsigned long int) yyk,
                                (unsigned long int) yyi));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static size_t
yysplitStack (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yysplitPoint == YY_NULL)
    {
      YYASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yysize >= yystackp->yytops.yycapacity)
    {
      yyGLRState** yynewStates;
      yybool* yynewLookaheadNeeds;

      yynewStates = YY_NULL;

      if (yystackp->yytops.yycapacity
          > (YYSIZEMAX / (2 * sizeof yynewStates[0])))
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      yynewStates =
        (yyGLRState**) YYREALLOC (yystackp->yytops.yystates,
                                  (yystackp->yytops.yycapacity
                                   * sizeof yynewStates[0]));
      if (yynewStates == YY_NULL)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yystates = yynewStates;

      yynewLookaheadNeeds =
        (yybool*) YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                             (yystackp->yytops.yycapacity
                              * sizeof yynewLookaheadNeeds[0]));
      if (yynewLookaheadNeeds == YY_NULL)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize-1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       yyn > 0;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yysval = yys0->yysemantics.yysval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yysval = yys1->yysemantics.yysval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULL)
                break;
              else if (*yyz0p == YY_NULL)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
                                   yyGLRStack* yystackp);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp)
{
  if (0 < yyn)
    {
      YYASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    yychar = yychar_current;
    yylval = yylval_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULL)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, empty>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1);
  else
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, tokens %lu .. %lu>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1, (unsigned long int) (yys->yyposn + 1),
               (unsigned long int) yyx->yystate->yyposn);
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YYFPRINTF (stderr, "%*s%s <empty>\n", yyindent+2, "",
                       yytokenName (yystos[yystates[yyi]->yylrState]));
          else
            YYFPRINTF (stderr, "%*s%s <tokens %lu .. %lu>\n", yyindent+2, "",
                       yytokenName (yystos[yystates[yyi]->yylrState]),
                       (unsigned long int) (yystates[yyi-1]->yyposn + 1),
                       (unsigned long int) yystates[yyi]->yyposn);
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YYFPRINTF (stderr, "Ambiguity detected.\n");
  YYFPRINTF (stderr, "Option 1,\n");
  yyreportTree (yyx0, 2);
  YYFPRINTF (stderr, "\nOption 2,\n");
  yyreportTree (yyx1, 2);
  YYFPRINTF (stderr, "\n");
#endif

  yyerror (YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULL; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              return yyreportAmbiguity (yybest, yyp);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YYASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULL; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yysval_other;
                yyflag = yyresolveAction (yyp, yystackp, &yysval_other);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yystos[yys->yylrState],
                                &yysval);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULL;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp)
{
  if (yystackp->yysplitPoint != YY_NULL)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             ));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULL)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULL;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = ((yyGLRStackItem*) yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULL;
  yystackp->yylastDeleted = YY_NULL;

  while (yyr != YY_NULL)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, size_t yyk,
                   size_t yyposn)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULL)
    {
      yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YYDPRINTF ((stderr, "Stack %lu Entering state %d\n",
                  (unsigned long int) yyk, yystate));

      YYASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule]);
          if (yyflag == yyerr)
            {
              YYDPRINTF ((stderr,
                          "Stack %lu dies "
                          "(predicate failure or explicit user error).\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yySymbol yytoken;
          int yyaction;
          const short int* yyconflicts;

          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;
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

          yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);

          while (*yyconflicts != 0)
            {
              YYRESULTTAG yyflag;
              size_t yynewStack = yysplitStack (yystackp, yyk);
              YYDPRINTF ((stderr, "Splitting off stack %lu from %lu.\n",
                          (unsigned long int) yynewStack,
                          (unsigned long int) yyk));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts]);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn));
              else if (yyflag == yyerr)
                {
                  YYDPRINTF ((stderr, "Stack %lu dies.\n",
                              (unsigned long int) yynewStack));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
              yyconflicts += 1;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction]);
              if (yyflag == yyerr)
                {
                  YYDPRINTF ((stderr,
                              "Stack %lu dies "
                              "(predicate failure or explicit user error).\n",
                              (unsigned long int) yyk));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}

static void
yyreportSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState != 0)
    return;
#if ! YYERROR_VERBOSE
  yyerror (YY_("syntax error"));
#else
  {
  yySymbol yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);
  size_t yysize0 = yytnamerr (YY_NULL, yytokenName (yytoken));
  size_t yysize = yysize0;
  yybool yysize_overflow = yyfalse;
  char* yymsg = YY_NULL;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected").  */
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
      int yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      yyarg[yycount++] = yytokenName (yytoken);
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for this
             state because they are default actions.  */
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
                yyarg[yycount++] = yytokenName (yyx);
                {
                  size_t yysz = yysize + yytnamerr (YY_NULL, yytokenName (yyx));
                  yysize_overflow |= yysz < yysize;
                  yysize = yysz;
                }
              }
        }
    }

  switch (yycount)
    {
#define YYCASE_(N, S)                   \
      case N:                           \
        yyformat = S;                   \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  {
    size_t yysz = yysize + strlen (yyformat);
    yysize_overflow |= yysz < yysize;
    yysize = yysz;
  }

  if (!yysize_overflow)
    yymsg = (char *) YYMALLOC (yysize);

  if (yymsg)
    {
      char *yyp = yymsg;
      int yyi = 0;
      while ((*yyp = *yyformat))
        {
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
      yyerror (yymsg);
      YYFREE (yymsg);
    }
  else
    {
      yyerror (YY_("syntax error"));
      yyMemoryExhausted (yystackp);
    }
  }
#endif /* YYERROR_VERBOSE */
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp)
{
  size_t yyk;
  int yyj;

  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yySymbol yytoken;
        if (yychar == YYEOF)
          yyFail (yystackp, YY_NULL);
        if (yychar != YYEMPTY)
          {
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval);
          }
        YYDPRINTF ((stderr, "Reading a token: "));
        yychar = yylex ();
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
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
    if (yystackp->yytops.yystates[yyk] != YY_NULL)
      break;
  if (yyk >= yystackp->yytops.yysize)
    yyFail (yystackp, YY_NULL);
  for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
    yymarkStackDeleted (yystackp, yyk);
  yyremoveDeletes (yystackp);
  yycompressStack (yystackp);

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULL)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYTERROR;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              YY_SYMBOL_PRINT ("Shifting", yystos[yytable[yyj]],
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yytable[yyj],
                          yys->yyposn, &yylval);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      if (yys->yypred != YY_NULL)
        yydestroyGLRState ("Error: popping", yys);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULL)
    yyFail (yystackp, YY_NULL);
}

#define YYCHK1(YYE)                                                          \
  do {                                                                       \
    switch (YYE) {                                                           \
    case yyok:                                                               \
      break;                                                                 \
    case yyabort:                                                            \
      goto yyabortlab;                                                       \
    case yyaccept:                                                           \
      goto yyacceptlab;                                                      \
    case yyerr:                                                              \
      goto yyuser_error;                                                     \
    default:                                                                 \
      goto yybuglab;                                                         \
    }                                                                        \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  size_t yyposn;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode */
      while (yytrue)
        {
          yyRuleNum yyrule;
          int yyaction;
          const short int* yyconflicts;

          yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
          YYDPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {

                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
            }
          else
            {
              yySymbol yytoken;
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

              yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);
              if (*yyconflicts != 0)
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {

                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
            }
        }

      while (yytrue)
        {
          yySymbol yytoken_to_shift;
          size_t yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));

              yyreportSyntaxError (&yystack);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              int yyaction;
              const short int* yyconflicts;
              yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
              yygetLRActions (yystate, yytoken_to_shift, &yyaction,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YYDPRINTF ((stderr, "On stack %lu, ", (unsigned long int) yys));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval);
              YYDPRINTF ((stderr, "Stack %lu now in state #%d\n",
                          (unsigned long int) yys,
                          yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YYASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          size_t yysize = yystack.yytops.yysize;
          size_t yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                  if (yys->yypred != YY_NULL)
                      yydestroyGLRState ("Cleanup: popping", yys);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if YYDEBUG
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YYFPRINTF (stderr, " -> ");
    }
  YYFPRINTF (stderr, "%d@%lu", yys->yylrState,
             (unsigned long int) yys->yyposn);
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == YY_NULL)
    YYFPRINTF (stderr, "<null>");
  else
    yy_yypstack (yyst);
  YYFPRINTF (stderr, "\n");
}

static void
yypstack (yyGLRStack* yystackp, size_t yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

#define YYINDEX(YYX)                                                         \
    ((YYX) == YY_NULL ? -1 : (yyGLRStackItem*) (YYX) - yystackp->yyitems)


static void
yypdumpstack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yyp;
  size_t yyi;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YYFPRINTF (stderr, "%3lu. ",
                 (unsigned long int) (yyp - yystackp->yyitems));
      if (*(yybool *) yyp)
        {
          YYFPRINTF (stderr, "Res: %d, LR State: %d, posn: %lu, pred: %ld",
                     yyp->yystate.yyresolved, yyp->yystate.yylrState,
                     (unsigned long int) yyp->yystate.yyposn,
                     (long int) YYINDEX (yyp->yystate.yypred));
          if (! yyp->yystate.yyresolved)
            YYFPRINTF (stderr, ", firstVal: %ld",
                       (long int) YYINDEX (yyp->yystate
                                             .yysemantics.yyfirstVal));
        }
      else
        {
          YYFPRINTF (stderr, "Option. rule: %d, state: %ld, next: %ld",
                     yyp->yyoption.yyrule - 1,
                     (long int) YYINDEX (yyp->yyoption.yystate),
                     (long int) YYINDEX (yyp->yyoption.yynext));
        }
      YYFPRINTF (stderr, "\n");
    }
  YYFPRINTF (stderr, "Tops:");
  for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
    YYFPRINTF (stderr, "%lu: %ld; ", (unsigned long int) yyi,
               (long int) YYINDEX (yystackp->yytops.yystates[yyi]));
  YYFPRINTF (stderr, "\n");
}
#endif

#undef yylval
#undef yychar
#undef yynerrs



#line 392 "tig.y" /* glr.c:2549  */


void yyerror(const char *s) {
	fprintf(stdout, "\n%s, unexpected '%s' on line %d:", s, yytext,lineNo);
	rewind(yyin);
	char buf[500];
	for (int line=0; line < lineNo;line++)
		fgets(buf,500,yyin);
	fprintf(stdout, "\n%s", buf);
}
