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
	#include <iostream>
	#include <string>
	#include <vector>

	#include "compiler.h"
	#include "syntaxNode.h"
	#include "lineRec.h"

    void yyerror(const char *);
    int yylex(void);


	CTigCompiler* tigC;

	//extern int yylineno;
	extern char* yytext;
	extern fpos_t lastLinePos;
	extern fpos_t linePos;
	extern FILE* yyin;

	extern std::vector<std::string> filenames;
	extern std::vector<TLineRec> lineRecs;




#line 84 "tigParse.cpp" /* glr.c:207  */

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

#line 112 "tigParse.cpp" /* glr.c:230  */

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
#define YYFINAL  105
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1103

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  150
/* YYNRULES -- Number of states.  */
#define YYNSTATES  311
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 10
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    67,     2,    63,     2,    62,    81,     2,
      75,    76,    60,    58,    74,    59,    78,    61,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    71,
      54,    77,    52,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    79,     2,    80,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,     2,    73,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    53,    55,    56,
      57,    64,    65,    66,    68,    69,    70
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,    91,    91,    92,    96,    97,    98,    99,   103,   104,
     105,   106,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     139,   143,   144,   148,   149,   153,   154,   159,   163,   167,
     168,   172,   176,   177,   183,   184,   185,   186,   187,   193,
     194,   199,   203,   204,   208,   208,   210,   214,   215,   219,
     220,   221,   225,   229,   241,   242,   243,   244,   245,   249,
     250,   254,   255,   259,   263,   276,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   293,   294,
     295,   297,   298,   299,   300,   301,   302,   304,   305,   306,
     307,   308,   312,   313,   314,   315,   320,   325,   326,   331,
     335,   336,   341,   342,   346,   347,   348,   352,   353,   357,
     361,   366,   367,   371,   375,   379,   380,   384,   385,   387,
     392,   396,   397,   402,   403,   404,   405,   406,   407,   411,
     412
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRINT", "SET_WINDOW", "CLEAR_WINDOW",
  "OPEN_WINDOW", "END", "RETURN", "EVENT", "OPTION", "OBJECT", "ARROW",
  "INHERITS", "SUPERCLASS", "GETSTRING", "HOT", "MAKE_HOT", "PURGE", "ALL",
  "CLEAR", "USED", "STYLE", "CAP", "ARRAY", "MESSAGE", "START_TIMER",
  "START_EVENT", "AT", "INTEGER", "IDENTIFIER", "STRING", "ENDL", "IF",
  "FOR", "EACH", "OF", "CONTINUE", "NOT", "LOOP_BREAK", "SELF", "CHILDREN",
  "ADD_ASSIGN", "BREAK", "TRON", "TROFF", "NOTHING", "MOVE", "TO", "EQ",
  "NE", "GE", "'>'", "LE", "'<'", "OR", "AND", "HAS", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'#'", "MATCHES", "IS", "IN", "'!'", "UMINUS", "IFX",
  "ELSE", "';'", "'{'", "'}'", "','", "'('", "')'", "'='", "'.'", "'['",
  "']'", "'&'", "$accept", "program", "tigcode", "statement", "memberId",
  "return_expr", "assignment", "var_or_obj_memb", "variable_assignee",
  "obj_member_assignee", "obj_expr", "element_assignee",
  "string_statement", "dec_statement", "level", "obj_identifier",
  "class_identifier", "optional_member_list", "$@1", "member_decl_list",
  "member_decl", "memb_decl_identifier", "global_func_decl", "init_expr",
  "memb_function_def", "statement_list", "string_literal",
  "event_identifier", "code_block", "expression", "variable_expr",
  "deref_variable_expr", "member_call", "func_call", "func_ident",
  "optional_param_list", "param_list", "constant_expr", "integer_constant",
  "array_init_expr", "expr_seq", "array_dyn_init_elem", "array_init_list",
  "constant_seq", "array_init_const", "array_element_expr",
  "array_index_expr", "comparison_expr", "logic_expression", YY_NULL
};
#endif

#define YYPACT_NINF -234
#define YYTABLE_NINF -142

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const short int yypact[] =
{
     503,   635,   -73,   -24,   635,    -4,   635,  -234,   588,    -5,
     635,     5,    57,    64,  -234,    17,    76,    46,    52,  -234,
      56,    69,    72,    65,    65,  -234,   555,   162,   503,  -234,
      94,    -7,  -234,  -234,    92,    98,   111,  -234,    12,    14,
     157,   117,   139,  -234,  -234,   128,   130,   131,  -234,  -234,
     635,   136,   137,   138,  -234,   153,  -234,   -12,   140,  -234,
     635,   635,   635,   635,   175,   135,     6,   206,   877,    26,
    -234,  -234,   146,  -234,  -234,  -234,  -234,  -234,   635,  -234,
     900,  -234,   152,  1038,   155,   809,   167,  -234,   165,  1038,
      32,  -234,  -234,   196,   635,    65,  -234,  -234,  -234,  -234,
    -234,   -30,   189,  -234,   399,  -234,  -234,  -234,  -234,   166,
     635,   635,   144,   -14,   635,  -234,  -234,   212,   188,   157,
      -3,  -234,   177,   216,   188,  -234,   635,  -234,  -234,   635,
     669,   635,   635,   635,    65,  -234,  -234,   714,  1038,    16,
    -234,  -234,   144,    65,   183,   635,   635,   635,   635,   635,
     635,   635,   635,   635,   635,   635,   635,   635,   184,  -234,
     635,   733,  -234,  -234,  -234,   635,  -234,   635,  -234,   635,
     222,   752,   -23,    65,  -234,  -234,  -234,   635,   923,  1038,
     172,  -234,   173,    49,   185,  1038,   190,   188,  -234,   185,
     229,  -234,   191,  1038,   -43,  -234,   826,   771,   790,    40,
    -234,   635,  -234,   186,    92,    65,   145,   145,   145,   145,
     145,   145,   145,   145,   145,    24,    24,    73,  -234,   635,
      60,   192,   843,   193,   946,  1038,   201,   555,    65,    65,
     -13,   969,  -234,   195,   635,  -234,  -234,   204,  -234,  -234,
     202,  -234,   150,  -234,   205,   635,  -234,  -234,  -234,  -234,
    -234,    92,  -234,  -234,  -234,   635,   635,  -234,  -234,   210,
     342,   555,  -234,  -234,    85,  -234,   229,  -234,  -234,  -234,
     555,   635,   161,    -8,  -234,  -234,  -234,  -234,  -234,  -234,
     860,   992,  1015,   555,  -234,  -234,  -234,  -234,   451,   109,
    -234,  -234,  -234,  -234,    27,  -234,   635,  -234,  -234,  -234,
    -234,   205,    -8,  -234,   686,  -234,  -234,   635,  -234,   120,
    -234
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const unsigned char yydefact[] =
{
       3,     0,     0,     0,     0,     0,    42,    59,     0,     0,
     126,     0,     0,    47,    83,     0,     0,     0,     0,    50,
       0,     0,     0,     0,     0,    39,     0,     0,     2,     4,
       0,     0,    45,    46,     0,     0,     0,     6,     0,    66,
       0,     0,    52,    49,   121,   114,   115,     0,   113,    88,
       0,     0,     0,     0,   129,   112,   128,    97,     0,   103,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
     114,   115,     0,    93,   127,    94,    95,   110,     0,    33,
       0,    11,     0,    41,     0,     0,     0,    40,     0,   124,
       0,    13,    84,     0,     0,     0,    37,    38,    27,    29,
      30,     0,    49,    81,     0,     1,     5,     7,     9,     0,
       0,     0,     0,     0,     0,    12,    60,    61,    66,     0,
       0,    64,     0,    61,    66,    58,     0,    15,    16,   126,
       0,     0,     0,     0,     0,    92,   109,     0,   133,     0,
     131,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
     126,     0,    31,    21,    34,     0,    20,     0,    36,     0,
       0,     0,     0,     0,   116,    10,    82,     0,     0,    43,
      49,   142,     0,   120,   123,    44,     0,    66,   120,   123,
       0,    54,     0,    53,     0,   108,     0,     0,     0,     0,
      96,     0,   130,     0,   106,     0,   107,   143,   148,   147,
     146,   145,   144,   150,   149,    89,    90,    91,   111,     0,
       0,     0,     0,   121,     0,   125,     0,     0,     0,     0,
       0,     0,    26,    51,   126,   117,    56,     0,   118,    72,
      65,    67,    69,    55,   119,     0,   104,   105,   100,   132,
     140,    99,    98,   119,    32,     0,     0,    19,    14,    22,
       0,    49,    28,    35,     0,    57,     0,    75,    61,    74,
       0,   126,     0,     0,    77,    71,    76,    80,    78,    73,
       0,     0,     0,     0,    24,    25,   122,    68,     0,     0,
      70,   138,   137,   139,     0,   135,     0,    18,    17,    23,
      85,     0,     0,   134,     0,    79,   136,   126,   101,     0,
     102
};

  /* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -234,  -234,  -234,    10,   273,  -234,  -234,     4,  -234,  -234,
      29,  -234,  -234,   256,  -234,    41,   247,  -112,  -234,  -234,
      20,  -234,  -234,    22,  -234,    18,  -234,  -234,  -233,    -1,
      74,   132,     8,    54,     9,   115,  -114,  -234,   -92,  -234,
    -234,    99,  -234,  -234,     3,  -234,   164,  -234,  -234
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,    27,    28,   103,   293,    82,    30,    65,    32,    33,
      66,    35,    36,    37,    38,    67,    40,   122,   190,   240,
     241,   242,    41,   275,   276,   104,    42,    93,   277,    89,
      69,    44,    70,    71,    72,   235,    90,    73,    74,    75,
     139,   140,   278,   294,   295,    48,   182,    76,    77
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const short int yytable[] =
{
      68,   -50,    78,    80,    31,    83,   186,    85,    45,    47,
      29,   279,   192,   228,    86,   194,   183,   109,   173,   143,
     181,   291,    87,   292,   116,    87,   -50,   188,   120,    34,
      31,   169,    31,   244,    45,   110,    45,    47,   106,   -49,
      24,    39,   117,   229,   144,   -50,   220,    79,   113,   130,
     181,    24,   101,    34,    46,    34,   142,    34,   262,   135,
     136,   137,   138,   145,   -49,   113,   -50,    81,   305,    39,
     111,   121,   112,   -48,    43,   237,    91,   161,   -61,   118,
      46,   124,    46,   -49,   113,   -48,   156,    92,   157,   158,
     201,   -48,    94,   171,   -62,    55,   202,    43,   102,   172,
      43,   302,    43,   168,   -49,    19,   169,   303,    31,   178,
     179,    95,    45,   185,   176,   -48,   248,    96,   113,    24,
     264,   -61,   184,    97,    34,   193,   -48,    98,   -48,   189,
     196,   197,   198,    34,   169,   -61,   253,   157,   158,  -120,
      99,    34,  -112,   100,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   289,    46,   169,
     187,   286,   105,   199,   222,   108,   224,   -61,   225,    43,
     113,    34,   204,    54,    55,   114,   231,   -47,    43,   267,
     268,   269,   115,   169,    19,   301,   180,   123,   125,   -47,
     267,   268,   269,   309,   169,   -47,   310,   126,    24,   127,
     138,   128,   230,   154,   155,   141,   129,   156,    43,   157,
     158,   131,   132,   133,   142,   134,   180,    43,   252,   -47,
     120,   160,   270,   163,   170,   271,   164,   272,  -120,   273,
     -47,    31,   -47,   270,   251,    45,   271,   259,   166,   167,
     273,   174,   -62,   177,   280,   121,   -63,    43,   191,   205,
     219,   226,  -141,   233,   281,   282,    34,   260,    34,   239,
     234,   236,   243,   254,    31,    31,   250,   256,    45,    45,
     284,   285,   258,  -140,    31,   265,   266,   270,    45,    43,
     283,    46,    88,   274,   107,   119,   287,    31,   288,    34,
      34,    45,    31,   299,   290,   304,    45,   223,   176,    34,
     249,    43,    43,   261,   238,   306,   203,     0,     0,     0,
       0,     0,    34,   274,    46,    46,     0,    34,     0,     0,
       0,     0,     0,     0,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    43,    43,     0,    46,     0,     0,
       0,     0,    46,     0,    43,     1,     2,     3,     4,     5,
       6,     0,     0,     0,     0,     0,     0,    43,     8,     0,
       9,     0,    43,     0,     0,     0,     0,    10,    11,    12,
       0,     0,    55,    14,     0,    15,    16,     0,     0,    17,
       0,    18,    19,     0,     0,    20,    21,    22,     0,    23,
       0,     0,     0,     0,     0,     0,    24,     0,     0,     0,
       0,     0,     1,     2,     3,     4,     5,     6,     0,     0,
       0,     0,     0,    25,    26,     8,     0,     9,     0,     0,
     113,     0,     0,     0,    10,    11,    12,     0,     0,    55,
      14,     0,    15,    16,     0,     0,    17,     0,    18,    19,
       0,     0,    20,    21,    22,     0,    23,     0,     0,     0,
       0,     0,     0,    24,     1,     2,     3,     4,     5,     6,
       0,     0,     0,     0,     0,     0,     0,     8,     0,     9,
      25,    26,   175,     0,     0,     0,    10,    11,    12,     0,
       0,    55,    14,     0,    15,    16,     0,     0,    17,     0,
      18,    19,     0,     0,    20,    21,    22,     0,    23,     0,
       0,     0,     0,     0,     0,    24,     1,     2,     3,     4,
       5,     6,     0,     0,     0,     7,     0,     0,     0,     8,
       0,     9,    25,    26,   300,     0,     0,     0,    10,    11,
      12,     0,     0,    13,    14,     0,    15,    16,     0,     0,
      17,     0,    18,    19,     0,     0,    20,    21,    22,     0,
      23,     0,     0,     0,     0,     0,     0,    24,     1,     2,
       3,     4,     5,     6,     0,     0,     0,     0,     0,     0,
       0,     8,     0,     9,    25,    26,     0,     0,     0,     0,
      10,    11,    12,     0,     0,    55,    14,     0,    15,    16,
       0,     0,    17,     0,    18,    19,     0,     0,    20,    21,
      22,     0,    23,    49,    50,    51,     0,     0,    84,    24,
      52,    53,     0,     0,     0,     0,     0,    54,    55,    56,
       0,     0,     0,     0,     0,     0,    25,    26,    57,    58,
       0,     0,     0,     0,    59,     0,     0,     0,     0,     0,
       0,     0,    24,     0,     0,     0,     0,    60,     0,     0,
      49,    50,    51,     0,     0,    61,     0,    52,    53,     0,
       0,     0,     0,    62,    54,    55,    56,    63,     0,    64,
       0,     0,     0,     0,     0,    57,    58,     0,     0,     0,
       0,    59,     0,     0,     0,     0,     0,     0,     0,    24,
     195,     0,     0,     0,    60,     0,     0,     0,     0,     0,
       0,     0,    61,     0,     0,     0,     0,     0,     0,     0,
      62,     0,     0,     0,    63,     0,    64,     0,   146,   147,
     148,   149,   150,   151,   152,   153,     0,   154,   155,     0,
       0,   156,     0,   157,   158,   146,   147,   148,   149,   150,
     151,   152,   153,     0,   154,   155,     0,     0,   156,     0,
     157,   158,     0,     0,     0,     0,     0,     0,     0,     0,
     307,     0,   308,   146,   147,   148,   149,   150,   151,   152,
     153,     0,   154,   155,     0,     0,   156,     0,   157,   158,
       0,     0,   146,   147,   148,   149,   150,   151,   152,   153,
     200,   154,   155,     0,     0,   156,     0,   157,   158,     0,
       0,   146,   147,   148,   149,   150,   151,   152,   153,   221,
     154,   155,     0,     0,   156,     0,   157,   158,     0,     0,
     146,   147,   148,   149,   150,   151,   152,   153,   227,   154,
     155,     0,     0,   156,     0,   157,   158,     0,     0,   146,
     147,   148,   149,   150,   151,   152,   153,   246,   154,   155,
       0,     0,   156,     0,   157,   158,     0,     0,   146,   147,
     148,   149,   150,   151,   152,   153,   247,   154,   155,     0,
       0,   156,     0,   157,   158,   146,   147,   148,   149,   150,
     151,   152,   153,   165,   154,   155,     0,     0,   156,     0,
     157,   158,   146,   147,   148,   149,   150,   151,   152,   153,
     245,   154,   155,     0,     0,   156,     0,   157,   158,   146,
     147,   148,   149,   150,   151,   152,   153,   255,   154,   155,
       0,     0,   156,     0,   157,   158,   146,   147,   148,   149,
     150,   151,   152,   153,   296,   154,   155,     0,     0,   156,
       0,   157,   158,     0,     0,     0,     0,     0,   159,   146,
     147,   148,   149,   150,   151,   152,   153,     0,   154,   155,
       0,     0,   156,     0,   157,   158,     0,     0,     0,     0,
       0,   162,   146,   147,   148,   149,   150,   151,   152,   153,
       0,   154,   155,     0,     0,   156,     0,   157,   158,     0,
       0,     0,     0,     0,   232,   146,   147,   148,   149,   150,
     151,   152,   153,     0,   154,   155,     0,     0,   156,     0,
     157,   158,     0,     0,     0,     0,     0,   257,   146,   147,
     148,   149,   150,   151,   152,   153,     0,   154,   155,     0,
       0,   156,     0,   157,   158,     0,     0,     0,     0,     0,
     263,   146,   147,   148,   149,   150,   151,   152,   153,     0,
     154,   155,     0,     0,   156,     0,   157,   158,     0,     0,
       0,     0,     0,   297,   146,   147,   148,   149,   150,   151,
     152,   153,     0,   154,   155,     0,     0,   156,     0,   157,
     158,     0,     0,     0,     0,     0,   298,   146,   147,   148,
     149,   150,   151,   152,   153,     0,   154,   155,     0,     0,
     156,     0,   157,   158
};

static const short int yycheck[] =
{
       1,    13,    75,     4,     0,     6,   118,     8,     0,     0,
       0,   244,   124,    36,    19,   129,    30,    24,    48,    13,
     112,    29,    30,    31,    12,    30,    38,    30,    14,     0,
      26,    74,    28,    76,    26,    42,    28,    28,    28,    13,
      54,     0,    30,    66,    38,    57,   160,    71,    78,    50,
     142,    54,    23,    24,     0,    26,    79,    28,    71,    60,
      61,    62,    63,    57,    38,    78,    78,    71,   301,    28,
      77,    57,    79,    24,     0,   187,    71,    78,    14,    38,
      26,    40,    28,    57,    78,    36,    62,    30,    64,    65,
      74,    42,    75,    94,    30,    30,    80,    23,    24,    95,
      26,    74,    28,    71,    78,    40,    74,    80,   104,   110,
     111,    35,   104,   114,   104,    66,    76,    71,    78,    54,
     234,    57,   113,    71,    95,   126,    77,    71,    79,   120,
     131,   132,   133,   104,    74,    71,    76,    64,    65,    75,
      71,   112,    78,    71,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   271,   104,    74,
     119,    76,     0,   134,   165,    71,   167,    14,   169,    95,
      78,   142,   143,    29,    30,    77,   177,    24,   104,    29,
      30,    31,    71,    74,    40,    76,   112,    30,    71,    36,
      29,    30,    31,   307,    74,    42,    76,    58,    54,    71,
     201,    71,   173,    58,    59,    30,    75,    62,   134,    64,
      65,    75,    75,    75,    79,    75,   142,   143,   219,    66,
      14,    75,    72,    71,    28,    75,    71,    77,    75,    79,
      77,   227,    79,    72,   205,   227,    75,   227,    71,    74,
      79,    52,    30,    77,   245,    57,    30,   173,    71,    66,
      66,    29,    80,    80,   255,   256,   227,   228,   229,    30,
      75,    71,    71,    71,   260,   261,    80,    74,   260,   261,
     260,   261,    71,    78,   270,    71,    74,    72,   270,   205,
      70,   227,     9,   242,    28,    38,   266,   283,   270,   260,
     261,   283,   288,   283,   272,   296,   288,   165,   288,   270,
     201,   227,   228,   229,   189,   302,   142,    -1,    -1,    -1,
      -1,    -1,   283,   272,   260,   261,    -1,   288,    -1,    -1,
      -1,    -1,    -1,    -1,   270,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   260,   261,    -1,   283,    -1,    -1,
      -1,    -1,   288,    -1,   270,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,   283,    16,    -1,
      18,    -1,   288,    -1,    -1,    -1,    -1,    25,    26,    27,
      -1,    -1,    30,    31,    -1,    33,    34,    -1,    -1,    37,
      -1,    39,    40,    -1,    -1,    43,    44,    45,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    71,    72,    16,    -1,    18,    -1,    -1,
      78,    -1,    -1,    -1,    25,    26,    27,    -1,    -1,    30,
      31,    -1,    33,    34,    -1,    -1,    37,    -1,    39,    40,
      -1,    -1,    43,    44,    45,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    54,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    18,
      71,    72,    73,    -1,    -1,    -1,    25,    26,    27,    -1,
      -1,    30,    31,    -1,    33,    34,    -1,    -1,    37,    -1,
      39,    40,    -1,    -1,    43,    44,    45,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    54,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    16,
      -1,    18,    71,    72,    73,    -1,    -1,    -1,    25,    26,
      27,    -1,    -1,    30,    31,    -1,    33,    34,    -1,    -1,
      37,    -1,    39,    40,    -1,    -1,    43,    44,    45,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    54,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    18,    71,    72,    -1,    -1,    -1,    -1,
      25,    26,    27,    -1,    -1,    30,    31,    -1,    33,    34,
      -1,    -1,    37,    -1,    39,    40,    -1,    -1,    43,    44,
      45,    -1,    47,    15,    16,    17,    -1,    -1,    20,    54,
      22,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    40,    41,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    -1,    -1,
      15,    16,    17,    -1,    -1,    67,    -1,    22,    23,    -1,
      -1,    -1,    -1,    75,    29,    30,    31,    79,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      21,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    79,    -1,    81,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    65,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    76,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    65,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      76,    58,    59,    -1,    -1,    62,    -1,    64,    65,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    76,
      58,    59,    -1,    -1,    62,    -1,    64,    65,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    76,    58,
      59,    -1,    -1,    62,    -1,    64,    65,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    76,    58,    59,
      -1,    -1,    62,    -1,    64,    65,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    76,    58,    59,    -1,
      -1,    62,    -1,    64,    65,    49,    50,    51,    52,    53,
      54,    55,    56,    74,    58,    59,    -1,    -1,    62,    -1,
      64,    65,    49,    50,    51,    52,    53,    54,    55,    56,
      74,    58,    59,    -1,    -1,    62,    -1,    64,    65,    49,
      50,    51,    52,    53,    54,    55,    56,    74,    58,    59,
      -1,    -1,    62,    -1,    64,    65,    49,    50,    51,    52,
      53,    54,    55,    56,    74,    58,    59,    -1,    -1,    62,
      -1,    64,    65,    -1,    -1,    -1,    -1,    -1,    71,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      -1,    -1,    62,    -1,    64,    65,    -1,    -1,    -1,    -1,
      -1,    71,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    -1,    -1,    62,    -1,    64,    65,    -1,
      -1,    -1,    -1,    -1,    71,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    65,    -1,    -1,    -1,    -1,    -1,    71,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    65,    -1,    -1,    -1,    -1,    -1,
      71,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    65,    -1,    -1,
      -1,    -1,    -1,    71,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    -1,    -1,    62,    -1,    64,
      65,    -1,    -1,    -1,    -1,    -1,    71,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    -1,    -1,
      62,    -1,    64,    65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    12,    16,    18,
      25,    26,    27,    30,    31,    33,    34,    37,    39,    40,
      43,    44,    45,    47,    54,    71,    72,    83,    84,    85,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   104,   108,   112,   113,   114,   115,   116,   127,    15,
      16,    17,    22,    23,    29,    30,    31,    40,    41,    46,
      59,    67,    75,    79,    81,    89,    92,    97,   111,   112,
     114,   115,   116,   119,   120,   121,   129,   130,    75,    71,
     111,    71,    87,   111,    20,   111,    19,    30,    86,   111,
     118,    71,    30,   109,    75,    35,    71,    71,    71,    71,
      71,    92,   112,    85,   107,     0,    85,    95,    71,    24,
      42,    77,    79,    78,    77,    71,    12,    30,    97,    98,
      14,    57,    99,    30,    97,    71,    58,    71,    71,    75,
     111,    75,    75,    75,    75,   111,   111,   111,   111,   122,
     123,    30,    79,    13,    38,    57,    49,    50,    51,    52,
      53,    54,    55,    56,    58,    59,    62,    64,    65,    71,
      75,   111,    71,    71,    71,    74,    71,    74,    71,    74,
      28,   111,    89,    48,    52,    73,    85,    77,   111,   111,
     112,   120,   128,    30,   116,   111,    99,    97,    30,   116,
     100,    71,    99,   111,   118,    21,   111,   111,   111,    92,
      76,    74,    80,   128,    92,    66,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,    66,
     118,    76,   111,   113,   111,   111,    29,    76,    36,    66,
      92,   111,    71,    80,    75,   117,    71,    99,   117,    30,
     101,   102,   103,    71,    76,    74,    76,    76,    76,   123,
      80,    92,   111,    76,    71,    74,    74,    71,    71,    85,
      92,   112,    71,    71,   118,    71,    74,    29,    30,    31,
      72,    75,    77,    79,    97,   105,   106,   110,   124,   110,
     111,   111,   111,    70,    85,    85,    76,   102,   107,   118,
     105,    29,    31,    86,   125,   126,    74,    71,    71,    85,
      73,    76,    74,    80,   111,   110,   126,    74,    76,   118,
      76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    82,    83,    83,    84,    84,    84,    84,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      86,    87,    87,    88,    88,    89,    89,    90,    91,    92,
      92,    93,    94,    94,    95,    95,    95,    95,    95,    96,
      96,    97,    98,    98,   100,    99,    99,   101,   101,   102,
     102,   102,   103,   104,   105,   105,   105,   105,   105,   106,
     106,   107,   107,   108,   109,   110,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   112,   112,   112,   112,   113,   114,   114,   115,
     116,   116,   117,   117,   118,   118,   118,   119,   119,   120,
     121,   122,   122,   123,   124,   125,   125,   126,   126,   126,
     127,   128,   128,   129,   129,   129,   129,   129,   129,   130,
     130
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     2,     3,     2,
       3,     2,     2,     2,     5,     2,     2,     7,     7,     5,
       3,     3,     5,     7,     6,     6,     4,     2,     5,     2,
       2,     3,     5,     2,     3,     5,     3,     2,     2,     1,
       1,     1,     0,     3,     3,     1,     1,     1,     3,     1,
       1,     4,     1,     3,     3,     4,     4,     5,     2,     1,
       2,     1,     1,     2,     0,     3,     0,     1,     3,     1,
       3,     2,     1,     5,     1,     1,     1,     1,     1,     4,
       1,     1,     2,     1,     1,     3,     1,     2,     1,     3,
       3,     3,     2,     1,     1,     1,     3,     1,     4,     4,
       4,     8,    10,     1,     4,     4,     3,     3,     3,     2,
       1,     3,     1,     1,     1,     1,     3,     4,     4,     4,
       1,     1,     3,     0,     1,     3,     0,     1,     1,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     1,
       4,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
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
#line 91 "tig.y" /* glr.c:788  */
    { tigC->encode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1333 "tigParse.cpp" /* glr.c:788  */
    break;

  case 3:
#line 92 "tig.y" /* glr.c:788  */
    { ;}
#line 1339 "tigParse.cpp" /* glr.c:788  */
    break;

  case 4:
#line 96 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1345 "tigParse.cpp" /* glr.c:788  */
    break;

  case 5:
#line 97 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1351 "tigParse.cpp" /* glr.c:788  */
    break;

  case 6:
#line 98 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1357 "tigParse.cpp" /* glr.c:788  */
    break;

  case 7:
#line 99 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1363 "tigParse.cpp" /* glr.c:788  */
    break;

  case 8:
#line 103 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opPrint,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1369 "tigParse.cpp" /* glr.c:788  */
    break;

  case 9:
#line 104 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr); }
#line 1375 "tigParse.cpp" /* glr.c:788  */
    break;

  case 10:
#line 105 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr); }
#line 1381 "tigParse.cpp" /* glr.c:788  */
    break;

  case 11:
#line 106 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opEnd);}
#line 1387 "tigParse.cpp" /* glr.c:788  */
    break;

  case 12:
#line 108 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CStrStatement((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr));}
#line 1393 "tigParse.cpp" /* glr.c:788  */
    break;

  case 13:
#line 109 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opStartTimer); }
#line 1399 "tigParse.cpp" /* glr.c:788  */
    break;

  case 14:
#line 110 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CTimedEventNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.iValue)); }
#line 1405 "tigParse.cpp" /* glr.c:788  */
    break;

  case 15:
#line 111 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CallDiscardNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1411 "tigParse.cpp" /* glr.c:788  */
    break;

  case 16:
#line 112 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CallDiscardNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1417 "tigParse.cpp" /* glr.c:788  */
    break;

  case 17:
#line 113 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CHotTextNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1423 "tigParse.cpp" /* glr.c:788  */
    break;

  case 18:
#line 114 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CHotTextNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1429 "tigParse.cpp" /* glr.c:788  */
    break;

  case 19:
#line 115 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opPurge,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1435 "tigParse.cpp" /* glr.c:788  */
    break;

  case 20:
#line 116 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opPurge,new CIntNode(0),new CIntNode(0)); }
#line 1441 "tigParse.cpp" /* glr.c:788  */
    break;

  case 21:
#line 117 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CReturnNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1447 "tigParse.cpp" /* glr.c:788  */
    break;

  case 22:
#line 118 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr), NULL); }
#line 1453 "tigParse.cpp" /* glr.c:788  */
    break;

  case 23:
#line 119 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1459 "tigParse.cpp" /* glr.c:788  */
    break;

  case 24:
#line 120 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CForEachNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1465 "tigParse.cpp" /* glr.c:788  */
    break;

  case 25:
#line 121 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CForEachElementNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1471 "tigParse.cpp" /* glr.c:788  */
    break;

  case 26:
#line 122 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpAssignNode(opAdd,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1477 "tigParse.cpp" /* glr.c:788  */
    break;

  case 27:
#line 123 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opBrk); }
#line 1483 "tigParse.cpp" /* glr.c:788  */
    break;

  case 28:
#line 124 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opMove,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1489 "tigParse.cpp" /* glr.c:788  */
    break;

  case 29:
#line 125 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CTronNode(true); }
#line 1495 "tigParse.cpp" /* glr.c:788  */
    break;

  case 30:
#line 126 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CTronNode(false); }
#line 1501 "tigParse.cpp" /* glr.c:788  */
    break;

  case 31:
#line 127 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opOpenWin,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1507 "tigParse.cpp" /* glr.c:788  */
    break;

  case 32:
#line 128 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opWin,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr)); }
#line 1513 "tigParse.cpp" /* glr.c:788  */
    break;

  case 33:
#line 129 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opClr); }
#line 1519 "tigParse.cpp" /* glr.c:788  */
    break;

  case 34:
#line 130 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opHotClr); }
#line 1525 "tigParse.cpp" /* glr.c:788  */
    break;

  case 35:
#line 131 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opArrayPush,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.nPtr)); }
#line 1531 "tigParse.cpp" /* glr.c:788  */
    break;

  case 36:
#line 132 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMsgNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1537 "tigParse.cpp" /* glr.c:788  */
    break;

  case 37:
#line 133 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CContinueNode(); }
#line 1543 "tigParse.cpp" /* glr.c:788  */
    break;

  case 38:
#line 134 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CLoopBreakNode(); }
#line 1549 "tigParse.cpp" /* glr.c:788  */
    break;

  case 39:
#line 135 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opNop);  }
#line 1555 "tigParse.cpp" /* glr.c:788  */
    break;

  case 40:
#line 139 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberIdNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1561 "tigParse.cpp" /* glr.c:788  */
    break;

  case 41:
#line 143 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1567 "tigParse.cpp" /* glr.c:788  */
    break;

  case 42:
#line 144 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = NULL; }
#line 1573 "tigParse.cpp" /* glr.c:788  */
    break;

  case 43:
#line 148 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opAssign,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr)); }
#line 1579 "tigParse.cpp" /* glr.c:788  */
    break;

  case 44:
#line 149 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opAssign,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr)); }
#line 1585 "tigParse.cpp" /* glr.c:788  */
    break;

  case 45:
#line 153 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1591 "tigParse.cpp" /* glr.c:788  */
    break;

  case 46:
#line 154 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1597 "tigParse.cpp" /* glr.c:788  */
    break;

  case 47:
#line 159 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CVarAssigneeNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1603 "tigParse.cpp" /* glr.c:788  */
    break;

  case 48:
#line 163 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjMemberAssigneeNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1609 "tigParse.cpp" /* glr.c:788  */
    break;

  case 49:
#line 167 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1615 "tigParse.cpp" /* glr.c:788  */
    break;

  case 50:
#line 168 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opPushSelf); }
#line 1621 "tigParse.cpp" /* glr.c:788  */
    break;

  case 51:
#line 172 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayAssignNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1627 "tigParse.cpp" /* glr.c:788  */
    break;

  case 52:
#line 176 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1633 "tigParse.cpp" /* glr.c:788  */
    break;

  case 53:
#line 177 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opAdd, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1639 "tigParse.cpp" /* glr.c:788  */
    break;

  case 54:
#line 183 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),NULL); }
#line 1645 "tigParse.cpp" /* glr.c:788  */
    break;

  case 55:
#line 184 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr)); }
#line 1651 "tigParse.cpp" /* glr.c:788  */
    break;

  case 56:
#line 185 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),NULL); }
#line 1657 "tigParse.cpp" /* glr.c:788  */
    break;

  case 57:
#line 186 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr)); }
#line 1663 "tigParse.cpp" /* glr.c:788  */
    break;

  case 58:
#line 187 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr); }
#line 1669 "tigParse.cpp" /* glr.c:788  */
    break;

  case 59:
#line 193 "tig.y" /* glr.c:788  */
    { CSyntaxNode::childLevel++; }
#line 1675 "tigParse.cpp" /* glr.c:788  */
    break;

  case 60:
#line 194 "tig.y" /* glr.c:788  */
    { CSyntaxNode::childLevel++; }
#line 1681 "tigParse.cpp" /* glr.c:788  */
    break;

  case 61:
#line 199 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1687 "tigParse.cpp" /* glr.c:788  */
    break;

  case 62:
#line 203 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new ClassIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1693 "tigParse.cpp" /* glr.c:788  */
    break;

  case 63:
#line 204 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),new ClassIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str))); }
#line 1699 "tigParse.cpp" /* glr.c:788  */
    break;

  case 64:
#line 208 "tig.y" /* glr.c:788  */
    { CSyntaxNode::funcMode(true); }
#line 1705 "tigParse.cpp" /* glr.c:788  */
    break;

  case 65:
#line 209 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1711 "tigParse.cpp" /* glr.c:788  */
    break;

  case 66:
#line 210 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = NULL; }
#line 1717 "tigParse.cpp" /* glr.c:788  */
    break;

  case 67:
#line 214 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1723 "tigParse.cpp" /* glr.c:788  */
    break;

  case 68:
#line 215 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1729 "tigParse.cpp" /* glr.c:788  */
    break;

  case 69:
#line 219 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr),NULL); }
#line 1735 "tigParse.cpp" /* glr.c:788  */
    break;

  case 70:
#line 220 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1741 "tigParse.cpp" /* glr.c:788  */
    break;

  case 71:
#line 221 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1747 "tigParse.cpp" /* glr.c:788  */
    break;

  case 72:
#line 225 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMembDeclIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1753 "tigParse.cpp" /* glr.c:788  */
    break;

  case 73:
#line 229 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CGlobalFuncDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1759 "tigParse.cpp" /* glr.c:788  */
    break;

  case 74:
#line 241 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CInitNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1765 "tigParse.cpp" /* glr.c:788  */
    break;

  case 75:
#line 242 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CInitNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.iValue)); }
#line 1771 "tigParse.cpp" /* glr.c:788  */
    break;

  case 76:
#line 243 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CInitNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1777 "tigParse.cpp" /* glr.c:788  */
    break;

  case 77:
#line 244 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CInitNode((CObjIdentNode*)(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1783 "tigParse.cpp" /* glr.c:788  */
    break;

  case 78:
#line 245 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CInitNode((CArrayInitListNode*)(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1789 "tigParse.cpp" /* glr.c:788  */
    break;

  case 79:
#line 249 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CFunctionDefNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1795 "tigParse.cpp" /* glr.c:788  */
    break;

  case 80:
#line 250 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CFunctionDefNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1801 "tigParse.cpp" /* glr.c:788  */
    break;

  case 81:
#line 254 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1807 "tigParse.cpp" /* glr.c:788  */
    break;

  case 82:
#line 255 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1813 "tigParse.cpp" /* glr.c:788  */
    break;

  case 83:
#line 259 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CStrNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1819 "tigParse.cpp" /* glr.c:788  */
    break;

  case 84:
#line 263 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CEventIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1825 "tigParse.cpp" /* glr.c:788  */
    break;

  case 85:
#line 276 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CodeBlockNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1831 "tigParse.cpp" /* glr.c:788  */
    break;

  case 86:
#line 280 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1837 "tigParse.cpp" /* glr.c:788  */
    break;

  case 87:
#line 281 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CVarIdNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1843 "tigParse.cpp" /* glr.c:788  */
    break;

  case 88:
#line 282 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opGetString); }
#line 1849 "tigParse.cpp" /* glr.c:788  */
    break;

  case 89:
#line 283 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opAdd, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1855 "tigParse.cpp" /* glr.c:788  */
    break;

  case 90:
#line 284 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opSub, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1861 "tigParse.cpp" /* glr.c:788  */
    break;

  case 91:
#line 285 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opMod, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1867 "tigParse.cpp" /* glr.c:788  */
    break;

  case 92:
#line 286 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opMinus, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1873 "tigParse.cpp" /* glr.c:788  */
    break;

  case 93:
#line 287 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1879 "tigParse.cpp" /* glr.c:788  */
    break;

  case 94:
#line 288 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1885 "tigParse.cpp" /* glr.c:788  */
    break;

  case 95:
#line 289 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1891 "tigParse.cpp" /* glr.c:788  */
    break;

  case 96:
#line 290 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr); }
#line 1897 "tigParse.cpp" /* glr.c:788  */
    break;

  case 97:
#line 291 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opPushSelf); }
#line 1903 "tigParse.cpp" /* glr.c:788  */
    break;

  case 98:
#line 293 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opIn,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1909 "tigParse.cpp" /* glr.c:788  */
    break;

  case 99:
#line 294 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opNotIn,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1915 "tigParse.cpp" /* glr.c:788  */
    break;

  case 100:
#line 295 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opChildren,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1921 "tigParse.cpp" /* glr.c:788  */
    break;

  case 101:
#line 297 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMakeHotNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),NULL);}
#line 1927 "tigParse.cpp" /* glr.c:788  */
    break;

  case 102:
#line 298 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMakeHotNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr));}
#line 1933 "tigParse.cpp" /* glr.c:788  */
    break;

  case 103:
#line 299 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CNothingNode(); }
#line 1939 "tigParse.cpp" /* glr.c:788  */
    break;

  case 104:
#line 300 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opStyle,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1945 "tigParse.cpp" /* glr.c:788  */
    break;

  case 105:
#line 301 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opCap,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1951 "tigParse.cpp" /* glr.c:788  */
    break;

  case 106:
#line 302 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opInherits,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1957 "tigParse.cpp" /* glr.c:788  */
    break;

  case 107:
#line 304 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opHas,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1963 "tigParse.cpp" /* glr.c:788  */
    break;

  case 108:
#line 305 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opHotCheck,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1969 "tigParse.cpp" /* glr.c:788  */
    break;

  case 109:
#line 306 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opNot,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1975 "tigParse.cpp" /* glr.c:788  */
    break;

  case 110:
#line 307 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1981 "tigParse.cpp" /* glr.c:788  */
    break;

  case 111:
#line 308 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opMatch, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1987 "tigParse.cpp" /* glr.c:788  */
    break;

  case 112:
#line 312 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CVarExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1993 "tigParse.cpp" /* glr.c:788  */
    break;

  case 113:
#line 313 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1999 "tigParse.cpp" /* glr.c:788  */
    break;

  case 114:
#line 314 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2005 "tigParse.cpp" /* glr.c:788  */
    break;

  case 115:
#line 315 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2011 "tigParse.cpp" /* glr.c:788  */
    break;

  case 116:
#line 320 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CDerefVarNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 2017 "tigParse.cpp" /* glr.c:788  */
    break;

  case 117:
#line 325 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberCallNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2023 "tigParse.cpp" /* glr.c:788  */
    break;

  case 118:
#line 326 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CSuperCallNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2029 "tigParse.cpp" /* glr.c:788  */
    break;

  case 119:
#line 331 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberCallNode(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 2035 "tigParse.cpp" /* glr.c:788  */
    break;

  case 120:
#line 335 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CFuncIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str),NULL); }
#line 2041 "tigParse.cpp" /* glr.c:788  */
    break;

  case 121:
#line 336 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CFuncIdentNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2047 "tigParse.cpp" /* glr.c:788  */
    break;

  case 122:
#line 341 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr); }
#line 2053 "tigParse.cpp" /* glr.c:788  */
    break;

  case 123:
#line 342 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = NULL; }
#line 2059 "tigParse.cpp" /* glr.c:788  */
    break;

  case 124:
#line 346 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CParamExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2065 "tigParse.cpp" /* glr.c:788  */
    break;

  case 125:
#line 347 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),new CParamExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr))); }
#line 2071 "tigParse.cpp" /* glr.c:788  */
    break;

  case 126:
#line 348 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = NULL; }
#line 2077 "tigParse.cpp" /* glr.c:788  */
    break;

  case 127:
#line 352 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2083 "tigParse.cpp" /* glr.c:788  */
    break;

  case 128:
#line 353 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CStrNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 2089 "tigParse.cpp" /* glr.c:788  */
    break;

  case 129:
#line 357 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CIntNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.iValue)); }
#line 2095 "tigParse.cpp" /* glr.c:788  */
    break;

  case 130:
#line 361 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayDynInitNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 2101 "tigParse.cpp" /* glr.c:788  */
    break;

  case 131:
#line 366 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2107 "tigParse.cpp" /* glr.c:788  */
    break;

  case 132:
#line 367 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2113 "tigParse.cpp" /* glr.c:788  */
    break;

  case 133:
#line 371 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayDynInitElem((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2119 "tigParse.cpp" /* glr.c:788  */
    break;

  case 134:
#line 375 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayInitListNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 2125 "tigParse.cpp" /* glr.c:788  */
    break;

  case 135:
#line 379 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2131 "tigParse.cpp" /* glr.c:788  */
    break;

  case 136:
#line 380 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2137 "tigParse.cpp" /* glr.c:788  */
    break;

  case 137:
#line 384 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayInitConstNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 2143 "tigParse.cpp" /* glr.c:788  */
    break;

  case 138:
#line 385 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayInitConstNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.iValue)); }
#line 2149 "tigParse.cpp" /* glr.c:788  */
    break;

  case 139:
#line 387 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayInitConstNode((CMemberIdNode*)(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2155 "tigParse.cpp" /* glr.c:788  */
    break;

  case 140:
#line 392 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayElementExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 2161 "tigParse.cpp" /* glr.c:788  */
    break;

  case 141:
#line 396 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2167 "tigParse.cpp" /* glr.c:788  */
    break;

  case 142:
#line 397 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2173 "tigParse.cpp" /* glr.c:788  */
    break;

  case 143:
#line 402 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opEq, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2179 "tigParse.cpp" /* glr.c:788  */
    break;

  case 144:
#line 403 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opLT, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2185 "tigParse.cpp" /* glr.c:788  */
    break;

  case 145:
#line 404 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opLE, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2191 "tigParse.cpp" /* glr.c:788  */
    break;

  case 146:
#line 405 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opGT, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2197 "tigParse.cpp" /* glr.c:788  */
    break;

  case 147:
#line 406 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opGE, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2203 "tigParse.cpp" /* glr.c:788  */
    break;

  case 148:
#line 407 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opNE, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2209 "tigParse.cpp" /* glr.c:788  */
    break;

  case 149:
#line 411 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opAnd, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2215 "tigParse.cpp" /* glr.c:788  */
    break;

  case 150:
#line 412 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opOr, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2221 "tigParse.cpp" /* glr.c:788  */
    break;


#line 2225 "tigParse.cpp" /* glr.c:788  */
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
  (!!((Yystate) == (-234)))

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



#line 415 "tig.y" /* glr.c:2549  */


void yyerror(const char *s) {
	int lineNum = lineRecs.back().currentLineNo;
	std::cerr << "\n" << s << ", unexpected " << yytext << " in file " << filenames[lineRecs.back().fileNo]
		<< ", line " << lineNum;
	rewind(yyin);
	char buf[500];
	for (int line=0; line < lineNum;line++)
		fgets(buf,500,yyin);
	fprintf(stdout, "\n%s", buf);
	exit(1);
}
