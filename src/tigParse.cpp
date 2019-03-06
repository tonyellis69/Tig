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
#define YYFINAL  110
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1067

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  159
/* YYNRULES -- Number of states.  */
#define YYNSTATES  327
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 10
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,     2,    66,     2,    65,    85,     2,
      79,    80,    63,    61,    78,    62,    82,    64,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    75,
      57,    81,    55,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    83,     2,    84,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    76,     2,    77,     2,     2,     2,     2,
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
      56,    58,    59,    60,    67,    68,    69,    70,    72,    73,
      74
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,    93,    93,    94,    98,    99,   100,   101,   105,   106,
     107,   108,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   143,   147,   148,   152,   153,   157,   158,   163,   167,
     171,   172,   176,   180,   181,   187,   188,   189,   190,   191,
     197,   198,   203,   207,   208,   212,   212,   214,   218,   219,
     223,   224,   225,   226,   230,   234,   238,   239,   244,   256,
     257,   258,   259,   260,   264,   265,   269,   270,   274,   278,
     291,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   318,   319,   320,   321,   322,   323,   324,   325,
     329,   330,   331,   332,   337,   341,   345,   346,   351,   355,
     356,   361,   362,   366,   367,   368,   372,   373,   377,   381,
     386,   387,   391,   395,   399,   400,   404,   405,   407,   412,
     416,   417,   422,   423,   424,   425,   426,   427,   431,   432
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRINT", "SET_WINDOW", "CLEAR_WINDOW",
  "OPEN_WINDOW", "END", "RETURN", "EVENT", "OPTION", "OBJECT", "ARROW",
  "INHERITS", "SUPERCLASS", "FLAG", "NEW", "GETSTRING", "HOT", "MAKE_HOT",
  "PURGE", "ALL", "CLEAR", "USED", "STYLE", "CAP", "ARRAY", "MESSAGE",
  "START_TIMER", "START_EVENT", "AT", "INTEGER", "IDENTIFIER", "STRING",
  "ENDL", "IF", "FOR", "EACH", "CONTINUE", "NOT", "LOOP_BREAK", "SELF",
  "CHILDREN", "ADD_ASSIGN", "BREAK", "TRON", "TROFF", "NOTHING", "MOVE",
  "TO", "SET", "UNSET", "EQ", "NE", "GE", "'>'", "LE", "'<'", "OR", "AND",
  "HAS", "'+'", "'-'", "'*'", "'/'", "'%'", "'#'", "MATCHES", "IS", "IN",
  "OF", "'!'", "UMINUS", "IFX", "ELSE", "';'", "'{'", "'}'", "','", "'('",
  "')'", "'='", "'.'", "'['", "']'", "'&'", "$accept", "program",
  "tigcode", "statement", "memberId", "return_expr", "assignment",
  "var_or_obj_memb", "variable_assignee", "obj_member_assignee",
  "obj_expr", "element_assignee", "string_statement", "dec_statement",
  "level", "obj_identifier", "class_identifier", "optional_member_list",
  "$@1", "member_decl_list", "member_decl", "memb_decl_identifier",
  "flag_decl", "flag_decl_list", "global_func_decl", "init_expr",
  "memb_function_def", "statement_list", "string_literal",
  "event_identifier", "code_block", "expression", "variable_expr",
  "deref_variable_expr", "flag_expr", "member_call", "func_call",
  "func_ident", "optional_param_list", "param_list", "constant_expr",
  "integer_constant", "array_init_expr", "expr_seq", "array_dyn_init_elem",
  "array_init_list", "constant_seq", "array_init_const",
  "array_element_expr", "array_index_expr", "comparison_expr",
  "logic_expression", YY_NULL
};
#endif

#define YYPACT_NINF -242
#define YYTABLE_NINF -151

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const short int yypact[] =
{
     462,   576,   -37,   -16,   576,    23,   576,  -242,   557,   110,
     576,    26,    19,    -5,  -242,     5,    54,    41,    74,  -242,
     100,   114,   122,    46,    46,    46,    46,  -242,   521,    83,
     462,  -242,   126,    -8,  -242,  -242,    39,   104,   129,  -242,
       9,     6,   177,   171,   151,  -242,  -242,   176,   178,   134,
    -242,   205,  -242,   576,   173,   179,   180,  -242,   253,  -242,
     -11,   182,  -242,   576,   576,   576,   576,   222,   183,    40,
     242,   830,   175,  -242,  -242,   189,  -242,  -242,  -242,  -242,
    -242,   576,  -242,   854,  -242,   194,   998,   197,   758,   199,
    -242,   198,   998,   -45,  -242,  -242,   245,   576,    46,  -242,
    -242,  -242,  -242,  -242,   -43,   -10,   -10,   223,  -242,   188,
    -242,  -242,  -242,  -242,   207,   576,   576,    88,    -9,   576,
    -242,  -242,   254,   229,   177,    -7,  -242,   217,   261,   229,
    -242,   576,  -242,  -242,   576,  -242,  -242,   611,   576,   576,
     576,    46,  -242,  -242,   658,   998,   -24,  -242,  -242,    88,
      46,   226,   576,    50,   576,   576,   576,   576,   576,   576,
     576,   576,   576,   576,   576,   576,   576,  -242,   576,   678,
    -242,  -242,  -242,   576,  -242,   576,  -242,   576,   267,   698,
     -46,    46,  -242,   224,   227,  -242,  -242,  -242,   576,   878,
     998,   231,  -242,   232,    42,   234,   998,   243,   229,  -242,
     234,    11,  -242,   249,   998,    72,  -242,   776,   718,   738,
      91,  -242,   576,  -242,   233,    39,    46,   138,   269,  -242,
     138,   138,   138,   138,   138,   138,   138,   138,    79,    79,
      21,  -242,  -242,   103,   252,   794,   228,   902,   998,   255,
     521,    46,    61,  -242,  -242,   926,  -242,   238,   576,  -242,
    -242,   256,  -242,   293,  -242,   257,  -242,   101,  -242,  -242,
     262,   576,  -242,  -242,  -242,  -242,  -242,    39,  -242,  -242,
    -242,   576,   576,  -242,  -242,   263,   343,  -242,  -242,   147,
    -242,  -242,   296,    11,  -242,  -242,   521,   576,   250,   137,
    -242,  -242,  -242,  -242,  -242,  -242,   812,   950,   974,   521,
    -242,  -242,  -242,  -242,   402,   162,  -242,  -242,  -242,  -242,
      63,  -242,   576,  -242,  -242,  -242,  -242,   262,   137,  -242,
     629,  -242,  -242,   576,  -242,   169,  -242
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const unsigned char yydefact[] =
{
       3,     0,     0,     0,     0,     0,    43,    60,     0,     0,
     135,     0,     0,    48,    88,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
       2,     4,     0,     0,    46,    47,     0,     0,     0,     6,
       0,    67,     0,     0,    53,    50,   130,   122,   123,     0,
     121,     0,    93,     0,     0,     0,     0,   138,   120,   137,
     102,     0,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,   122,   123,     0,    98,   136,    99,   100,
     115,     0,    32,     0,    11,     0,    42,     0,     0,     0,
      41,     0,   133,     0,    13,    89,     0,     0,     0,    36,
      37,    26,    28,    29,     0,     0,     0,    50,    86,     0,
       1,     5,     7,     9,     0,     0,     0,     0,     0,     0,
      12,    61,    62,    67,     0,     0,    65,     0,    62,    67,
      59,     0,    15,    16,   135,    62,   119,     0,     0,     0,
       0,     0,    97,   114,     0,   142,     0,   140,    92,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     8,   135,     0,
      30,    21,    33,     0,    20,     0,    35,     0,     0,     0,
       0,     0,   125,     0,     0,   124,    10,    87,     0,     0,
      44,    50,   151,     0,   129,   132,    45,     0,    67,   129,
     132,     0,    55,     0,    54,     0,   113,     0,     0,     0,
       0,   101,     0,   139,     0,   111,     0,   112,     0,   117,
     152,   157,   156,   155,   154,   153,   159,   158,    94,    95,
      96,   116,   103,     0,     0,     0,   130,     0,   134,     0,
       0,     0,     0,    39,    40,     0,    25,    52,   135,   126,
      57,     0,   127,     0,    74,    66,    68,    70,    73,    56,
     128,     0,   109,   110,   105,   141,   149,   104,   118,   128,
      31,     0,     0,    19,    14,    22,     0,    27,    34,     0,
      58,    76,    75,     0,    80,    79,     0,   135,     0,     0,
      82,    72,    81,    85,    83,    78,     0,     0,     0,     0,
      24,   131,    77,    69,     0,     0,    71,   147,   146,   148,
       0,   144,     0,    18,    17,    23,    90,     0,     0,   143,
       0,    84,   145,   135,   106,     0,   107
};

  /* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -242,  -242,  -242,    15,   330,  -242,  -242,     4,  -242,  -242,
      69,  -242,  -242,   310,  -242,    16,   301,  -112,  -242,  -242,
      59,  -242,  -242,  -242,  -242,    55,  -242,    58,  -242,  -242,
    -241,    -1,    81,   181,   -92,     1,     8,    10,   152,  -121,
    -242,  -105,  -242,  -242,   141,  -242,  -242,    38,  -242,   209,
    -242,  -242
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,    29,    30,   108,   309,    85,    32,    68,    34,    35,
      69,    37,    38,    39,    40,    70,    42,   127,   201,   255,
     256,   257,   258,   282,    43,   291,   292,   109,    44,    96,
     293,    92,    72,    46,   183,    73,    74,    75,   249,    93,
      76,    77,    78,   146,   147,   294,   310,   311,    50,   193,
      79,    80
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const short int yytable[] =
{
      71,    47,   -51,    83,    33,    86,   181,    88,    48,   -62,
      49,   197,   192,   205,   184,    31,    41,   203,   114,   295,
     125,   121,   182,   194,   241,   199,   253,   -63,   -51,    47,
     176,    47,    33,   177,    33,   115,    48,   149,    48,   118,
      49,   122,    81,   254,   192,   111,    41,   233,    26,   -51,
      26,    95,   137,   150,   212,   -62,   123,   -51,   129,    82,
     213,   219,   142,   143,   144,   145,   126,   136,   -49,    36,
     -62,   -51,   118,   116,  -129,   117,   321,  -120,    58,   151,
     169,    45,   182,   110,    97,   -49,   251,    19,   165,   218,
     166,    98,   104,   105,   106,    36,   179,    36,    84,    36,
     152,    94,   180,    26,    45,    45,    45,   107,   153,    45,
      47,    45,   -49,    33,   189,   190,    99,    48,   196,    57,
      58,   118,   118,   -49,   187,   -49,   268,   279,   195,    19,
     204,    89,   284,   135,   285,   200,   277,   207,   208,   209,
     198,   318,    90,   118,   164,    26,   165,   319,   166,   100,
     177,   217,   260,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   305,    36,   307,    90,
     308,   264,   235,   118,   237,   101,   238,   286,    36,    45,
     287,   177,   288,   269,   289,   119,    36,   245,   -50,   102,
      45,     1,     2,     3,     4,     5,     6,   103,   191,   162,
     163,   113,   325,   164,   120,   165,     8,   166,     9,   128,
     210,   145,   131,   134,   -50,    10,    11,    12,    36,   215,
      58,    14,    45,    15,    16,   177,    17,   301,    18,    19,
     191,    45,    20,    21,    22,   -50,    23,   135,    24,    25,
     177,    47,   317,   -50,    33,    26,   130,   177,    48,   326,
     242,   132,   138,   133,   148,   275,   125,   -50,   139,   140,
     296,   141,    45,    27,    28,   186,   149,   -62,   168,   171,
     297,   298,   172,   290,   174,   178,   175,    47,   185,   -48,
      33,   284,   135,   285,    48,   267,   -63,    47,   188,   126,
      33,   300,   202,   -64,    48,   216,   -48,    45,   239,   243,
      47,   182,   244,    33,   290,    47,   272,    48,    33,    36,
     276,   320,    48,   248,   315,  -150,   247,   266,   250,   187,
    -149,    45,    45,   -48,   259,   281,   286,   270,   302,   287,
     274,   280,  -129,   289,   -48,   283,   -48,   299,   286,    91,
     112,   124,   303,   306,   304,    36,     1,     2,     3,     4,
       5,     6,   252,   265,   236,    36,   322,    45,   214,     0,
       0,     8,     0,     9,     0,     0,     0,    45,    36,     0,
      10,    11,    12,    36,     0,    58,    14,     0,    15,    16,
      45,    17,     0,    18,    19,    45,     0,    20,    21,    22,
       0,    23,     0,    24,    25,     0,     0,     0,     0,     0,
      26,     0,     0,     0,     0,     1,     2,     3,     4,     5,
       6,     0,     0,     0,     0,     0,     0,     0,    27,    28,
       8,     0,     9,     0,     0,   118,     0,     0,     0,    10,
      11,    12,     0,     0,    58,    14,     0,    15,    16,     0,
      17,     0,    18,    19,     0,     0,    20,    21,    22,     0,
      23,     0,    24,    25,     0,     0,     0,     0,     0,    26,
       0,     0,     0,     0,     0,     1,     2,     3,     4,     5,
       6,     0,     0,     0,     7,     0,     0,    27,    28,   316,
       8,     0,     9,     0,     0,     0,     0,     0,     0,    10,
      11,    12,     0,     0,    13,    14,     0,    15,    16,     0,
      17,     0,    18,    19,     0,     0,    20,    21,    22,     0,
      23,     0,    24,    25,     0,     0,     0,     0,     0,    26,
       0,     0,     0,     0,     1,     2,     3,     4,     5,     6,
       0,     0,     0,     0,     0,     0,     0,    27,    28,     8,
       0,     9,     0,     0,     0,     0,     0,     0,    10,    11,
      12,     0,     0,    58,    14,     0,    15,    16,     0,    17,
       0,    18,    19,     0,     0,    20,    21,    22,     0,    23,
       0,    24,    25,    51,    52,    53,    54,     0,    26,    87,
       0,    55,    56,     0,     0,     0,     0,     0,    57,    58,
      59,     0,    51,    52,    53,    54,    27,    28,    60,    61,
      55,    56,     0,     0,    62,     0,     0,    57,    58,    59,
       0,     0,     0,     0,    26,     0,     0,    60,    61,    63,
       0,     0,     0,    62,     0,     0,     0,     0,    64,     0,
       0,     0,     0,    26,   206,     0,    65,     0,    63,     0,
      66,     0,    67,     0,     0,     0,     0,    64,     0,     0,
       0,     0,     0,     0,     0,    65,     0,     0,     0,    66,
       0,    67,     0,   154,   155,   156,   157,   158,   159,   160,
     161,     0,   162,   163,     0,     0,   164,     0,   165,     0,
     166,   154,   155,   156,   157,   158,   159,   160,   161,     0,
     162,   163,     0,     0,   164,     0,   165,     0,   166,     0,
       0,     0,     0,     0,     0,     0,     0,   323,     0,   324,
     154,   155,   156,   157,   158,   159,   160,   161,     0,   162,
     163,     0,     0,   164,     0,   165,     0,   166,     0,     0,
     154,   155,   156,   157,   158,   159,   160,   161,   211,   162,
     163,     0,     0,   164,     0,   165,     0,   166,     0,     0,
     154,   155,   156,   157,   158,   159,   160,   161,   234,   162,
     163,     0,     0,   164,     0,   165,     0,   166,     0,     0,
     154,   155,   156,   157,   158,   159,   160,   161,   240,   162,
     163,     0,     0,   164,     0,   165,     0,   166,     0,     0,
     154,   155,   156,   157,   158,   159,   160,   161,   262,   162,
     163,     0,     0,   164,     0,   165,     0,   166,     0,     0,
     154,   155,   156,   157,   158,   159,   160,   161,   263,   162,
     163,     0,     0,   164,     0,   165,     0,   166,   154,   155,
     156,   157,   158,   159,   160,   161,   173,   162,   163,     0,
       0,   164,     0,   165,     0,   166,   154,   155,   156,   157,
     158,   159,   160,   161,   261,   162,   163,     0,     0,   164,
       0,   165,     0,   166,   154,   155,   156,   157,   158,   159,
     160,   161,   271,   162,   163,     0,     0,   164,     0,   165,
       0,   166,   154,   155,   156,   157,   158,   159,   160,   161,
     312,   162,   163,     0,     0,   164,     0,   165,     0,   166,
       0,     0,     0,     0,     0,   167,   154,   155,   156,   157,
     158,   159,   160,   161,     0,   162,   163,     0,     0,   164,
       0,   165,     0,   166,     0,     0,     0,     0,     0,   170,
     154,   155,   156,   157,   158,   159,   160,   161,     0,   162,
     163,     0,     0,   164,     0,   165,     0,   166,     0,     0,
       0,     0,     0,   246,   154,   155,   156,   157,   158,   159,
     160,   161,     0,   162,   163,     0,     0,   164,     0,   165,
       0,   166,     0,     0,     0,     0,     0,   273,   154,   155,
     156,   157,   158,   159,   160,   161,     0,   162,   163,     0,
       0,   164,     0,   165,     0,   166,     0,     0,     0,     0,
       0,   278,   154,   155,   156,   157,   158,   159,   160,   161,
       0,   162,   163,     0,     0,   164,     0,   165,     0,   166,
       0,     0,     0,     0,     0,   313,   154,   155,   156,   157,
     158,   159,   160,   161,     0,   162,   163,     0,     0,   164,
       0,   165,     0,   166,     0,     0,     0,     0,     0,   314,
     154,   155,   156,   157,   158,   159,   160,   161,     0,   162,
     163,     0,     0,   164,     0,   165,     0,   166
};

static const short int yycheck[] =
{
       1,     0,    13,     4,     0,     6,    49,     8,     0,    14,
       0,   123,   117,   134,   106,     0,     0,   129,    26,   260,
      14,    12,    32,    32,    70,    32,    15,    32,    39,    28,
      75,    30,    28,    78,    30,    43,    28,    83,    30,    82,
      30,    32,    79,    32,   149,    30,    30,   168,    57,    60,
      57,    32,    53,    13,    78,    60,    40,    68,    42,    75,
      84,   153,    63,    64,    65,    66,    60,    51,    26,     0,
      75,    82,    82,    81,    79,    83,   317,    82,    32,    39,
      81,     0,    32,     0,    79,    43,   198,    41,    67,    39,
      69,    37,    23,    24,    25,    26,    97,    28,    75,    30,
      60,    75,    98,    57,    23,    24,    25,    26,    68,    28,
     109,    30,    70,   109,   115,   116,    75,   109,   119,    31,
      32,    82,    82,    81,   109,    83,   218,   248,   118,    41,
     131,    21,    31,    32,    33,   125,    75,   138,   139,   140,
     124,    78,    32,    82,    65,    57,    67,    84,    69,    75,
      78,   152,    80,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   287,    98,    31,    32,
      33,    80,   173,    82,   175,    75,   177,    76,   109,    98,
      79,    78,    81,    80,    83,    81,   117,   188,    13,    75,
     109,     3,     4,     5,     6,     7,     8,    75,   117,    61,
      62,    75,   323,    65,    75,    67,    18,    69,    20,    32,
     141,   212,    61,    79,    39,    27,    28,    29,   149,   150,
      32,    33,   141,    35,    36,    78,    38,    80,    40,    41,
     149,   150,    44,    45,    46,    60,    48,    32,    50,    51,
      78,   240,    80,    68,   240,    57,    75,    78,   240,    80,
     181,    75,    79,    75,    32,   240,    14,    82,    79,    79,
     261,    79,   181,    75,    76,    77,    83,    14,    79,    75,
     271,   272,    75,   257,    75,    30,    78,   276,    55,    26,
     276,    31,    32,    33,   276,   216,    32,   286,    81,    60,
     286,   276,    75,    32,   286,    69,    43,   216,    31,    75,
     299,    32,    75,   299,   288,   304,    78,   299,   304,   240,
     241,   312,   304,    79,   299,    84,    84,    84,    75,   304,
      82,   240,   241,    70,    75,    32,    76,    75,    32,    79,
      75,    75,    79,    83,    81,    78,    83,    74,    76,     9,
      30,    40,   283,   288,   286,   276,     3,     4,     5,     6,
       7,     8,   200,   212,   173,   286,   318,   276,   149,    -1,
      -1,    18,    -1,    20,    -1,    -1,    -1,   286,   299,    -1,
      27,    28,    29,   304,    -1,    32,    33,    -1,    35,    36,
     299,    38,    -1,    40,    41,   304,    -1,    44,    45,    46,
      -1,    48,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      18,    -1,    20,    -1,    -1,    82,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    32,    33,    -1,    35,    36,    -1,
      38,    -1,    40,    41,    -1,    -1,    44,    45,    46,    -1,
      48,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    -1,    -1,    75,    76,    77,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    32,    33,    -1,    35,    36,    -1,
      38,    -1,    40,    41,    -1,    -1,    44,    45,    46,    -1,
      48,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    18,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    -1,    -1,    32,    33,    -1,    35,    36,    -1,    38,
      -1,    40,    41,    -1,    -1,    44,    45,    46,    -1,    48,
      -1,    50,    51,    16,    17,    18,    19,    -1,    57,    22,
      -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    -1,    16,    17,    18,    19,    75,    76,    41,    42,
      24,    25,    -1,    -1,    47,    -1,    -1,    31,    32,    33,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    41,    42,    62,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    -1,    57,    23,    -1,    79,    -1,    62,    -1,
      83,    -1,    85,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    83,
      -1,    85,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    -1,    -1,    65,    -1,    67,    -1,
      69,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      61,    62,    -1,    -1,    65,    -1,    67,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    61,
      62,    -1,    -1,    65,    -1,    67,    -1,    69,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    80,    61,
      62,    -1,    -1,    65,    -1,    67,    -1,    69,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    80,    61,
      62,    -1,    -1,    65,    -1,    67,    -1,    69,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    80,    61,
      62,    -1,    -1,    65,    -1,    67,    -1,    69,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    80,    61,
      62,    -1,    -1,    65,    -1,    67,    -1,    69,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    80,    61,
      62,    -1,    -1,    65,    -1,    67,    -1,    69,    52,    53,
      54,    55,    56,    57,    58,    59,    78,    61,    62,    -1,
      -1,    65,    -1,    67,    -1,    69,    52,    53,    54,    55,
      56,    57,    58,    59,    78,    61,    62,    -1,    -1,    65,
      -1,    67,    -1,    69,    52,    53,    54,    55,    56,    57,
      58,    59,    78,    61,    62,    -1,    -1,    65,    -1,    67,
      -1,    69,    52,    53,    54,    55,    56,    57,    58,    59,
      78,    61,    62,    -1,    -1,    65,    -1,    67,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    75,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    -1,    65,
      -1,    67,    -1,    69,    -1,    -1,    -1,    -1,    -1,    75,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    61,
      62,    -1,    -1,    65,    -1,    67,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    75,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    -1,    65,    -1,    67,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    75,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    62,    -1,
      -1,    65,    -1,    67,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    75,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    61,    62,    -1,    -1,    65,    -1,    67,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    75,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    -1,    65,
      -1,    67,    -1,    69,    -1,    -1,    -1,    -1,    -1,    75,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    61,
      62,    -1,    -1,    65,    -1,    67,    -1,    69
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    12,    18,    20,
      27,    28,    29,    32,    33,    35,    36,    38,    40,    41,
      44,    45,    46,    48,    50,    51,    57,    75,    76,    87,
      88,    89,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   110,   114,   118,   119,   121,   122,   123,
     134,    16,    17,    18,    19,    24,    25,    31,    32,    33,
      41,    42,    47,    62,    71,    79,    83,    85,    93,    96,
     101,   117,   118,   121,   122,   123,   126,   127,   128,   136,
     137,    79,    75,   117,    75,    91,   117,    22,   117,    21,
      32,    90,   117,   125,    75,    32,   115,    79,    37,    75,
      75,    75,    75,    75,    96,    96,    96,   118,    89,   113,
       0,    89,    99,    75,    26,    43,    81,    83,    82,    81,
      75,    12,    32,   101,   102,    14,    60,   103,    32,   101,
      75,    61,    75,    75,    79,    32,   101,   117,    79,    79,
      79,    79,   117,   117,   117,   117,   129,   130,    32,    83,
      13,    39,    60,    68,    52,    53,    54,    55,    56,    57,
      58,    59,    61,    62,    65,    67,    69,    75,    79,   117,
      75,    75,    75,    78,    75,    78,    75,    78,    30,   117,
      93,    49,    32,   120,   120,    55,    77,    89,    81,   117,
     117,   118,   127,   135,    32,   123,   117,   103,   101,    32,
     123,   104,    75,   103,   117,   125,    23,   117,   117,   117,
      96,    80,    78,    84,   135,    96,    69,   117,    39,   120,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   125,    80,   117,   119,   117,   117,    31,
      80,    70,    96,    75,    75,   117,    75,    84,    79,   124,
      75,   103,   124,    15,    32,   105,   106,   107,   108,    75,
      80,    78,    80,    80,    80,   130,    84,    96,   120,    80,
      75,    78,    78,    75,    75,    89,    96,    75,    75,   125,
      75,    32,   109,    78,    31,    33,    76,    79,    81,    83,
     101,   111,   112,   116,   131,   116,   117,   117,   117,    74,
      89,    80,    32,   106,   113,   125,   111,    31,    33,    90,
     132,   133,    78,    75,    75,    89,    77,    80,    78,    84,
     117,   116,   133,    78,    80,   125,    80
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    86,    87,    87,    88,    88,    88,    88,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    90,    91,    91,    92,    92,    93,    93,    94,    95,
      96,    96,    97,    98,    98,    99,    99,    99,    99,    99,
     100,   100,   101,   102,   102,   104,   103,   103,   105,   105,
     106,   106,   106,   106,   107,   108,   109,   109,   110,   111,
     111,   111,   111,   111,   112,   112,   113,   113,   114,   115,
     116,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     118,   118,   118,   118,   119,   120,   121,   121,   122,   123,
     123,   124,   124,   125,   125,   125,   126,   126,   127,   128,
     129,   129,   130,   131,   132,   132,   133,   133,   133,   134,
     135,   135,   136,   136,   136,   136,   136,   136,   137,   137
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     2,     3,     2,
       3,     2,     2,     2,     5,     2,     2,     7,     7,     5,
       3,     3,     5,     7,     6,     4,     2,     5,     2,     2,
       3,     5,     2,     3,     5,     3,     2,     2,     1,     4,
       4,     1,     1,     0,     3,     3,     1,     1,     1,     3,
       1,     1,     4,     1,     3,     3,     4,     4,     5,     2,
       1,     2,     1,     1,     2,     0,     3,     0,     1,     3,
       1,     3,     2,     1,     1,     2,     1,     2,     5,     1,
       1,     1,     1,     1,     4,     1,     1,     2,     1,     1,
       3,     1,     2,     1,     3,     3,     3,     2,     1,     1,
       1,     3,     1,     3,     4,     4,     8,    10,     1,     4,
       4,     3,     3,     3,     2,     1,     3,     3,     4,     2,
       1,     1,     1,     1,     3,     1,     4,     4,     4,     1,
       1,     3,     0,     1,     3,     0,     1,     1,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     1,     1,     4,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0
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
#line 93 "tig.y" /* glr.c:788  */
    { tigC->encode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1329 "tigParse.cpp" /* glr.c:788  */
    break;

  case 3:
#line 94 "tig.y" /* glr.c:788  */
    { ;}
#line 1335 "tigParse.cpp" /* glr.c:788  */
    break;

  case 4:
#line 98 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1341 "tigParse.cpp" /* glr.c:788  */
    break;

  case 5:
#line 99 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1347 "tigParse.cpp" /* glr.c:788  */
    break;

  case 6:
#line 100 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1353 "tigParse.cpp" /* glr.c:788  */
    break;

  case 7:
#line 101 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1359 "tigParse.cpp" /* glr.c:788  */
    break;

  case 8:
#line 105 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opPrint,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1365 "tigParse.cpp" /* glr.c:788  */
    break;

  case 9:
#line 106 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr); }
#line 1371 "tigParse.cpp" /* glr.c:788  */
    break;

  case 10:
#line 107 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr); }
#line 1377 "tigParse.cpp" /* glr.c:788  */
    break;

  case 11:
#line 108 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opEnd);}
#line 1383 "tigParse.cpp" /* glr.c:788  */
    break;

  case 12:
#line 110 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CStrStatement((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr));}
#line 1389 "tigParse.cpp" /* glr.c:788  */
    break;

  case 13:
#line 111 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opStartTimer); }
#line 1395 "tigParse.cpp" /* glr.c:788  */
    break;

  case 14:
#line 112 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CTimedEventNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.iValue)); }
#line 1401 "tigParse.cpp" /* glr.c:788  */
    break;

  case 15:
#line 113 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CallDiscardNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1407 "tigParse.cpp" /* glr.c:788  */
    break;

  case 16:
#line 114 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CallDiscardNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1413 "tigParse.cpp" /* glr.c:788  */
    break;

  case 17:
#line 115 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CHotTextNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1419 "tigParse.cpp" /* glr.c:788  */
    break;

  case 18:
#line 116 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CHotTextNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1425 "tigParse.cpp" /* glr.c:788  */
    break;

  case 19:
#line 117 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opPurge,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1431 "tigParse.cpp" /* glr.c:788  */
    break;

  case 20:
#line 118 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opPurge,new CIntNode(0),new CIntNode(0)); }
#line 1437 "tigParse.cpp" /* glr.c:788  */
    break;

  case 21:
#line 119 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CReturnNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1443 "tigParse.cpp" /* glr.c:788  */
    break;

  case 22:
#line 120 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr), NULL); }
#line 1449 "tigParse.cpp" /* glr.c:788  */
    break;

  case 23:
#line 121 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1455 "tigParse.cpp" /* glr.c:788  */
    break;

  case 24:
#line 123 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CForEachElementNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1461 "tigParse.cpp" /* glr.c:788  */
    break;

  case 25:
#line 124 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpAssignNode(opAdd,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1467 "tigParse.cpp" /* glr.c:788  */
    break;

  case 26:
#line 125 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opBrk); }
#line 1473 "tigParse.cpp" /* glr.c:788  */
    break;

  case 27:
#line 126 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opMove,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1479 "tigParse.cpp" /* glr.c:788  */
    break;

  case 28:
#line 127 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CTronNode(true); }
#line 1485 "tigParse.cpp" /* glr.c:788  */
    break;

  case 29:
#line 128 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CTronNode(false); }
#line 1491 "tigParse.cpp" /* glr.c:788  */
    break;

  case 30:
#line 129 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opOpenWin,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1497 "tigParse.cpp" /* glr.c:788  */
    break;

  case 31:
#line 130 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opWin,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr)); }
#line 1503 "tigParse.cpp" /* glr.c:788  */
    break;

  case 32:
#line 131 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opClr); }
#line 1509 "tigParse.cpp" /* glr.c:788  */
    break;

  case 33:
#line 132 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opHotClr); }
#line 1515 "tigParse.cpp" /* glr.c:788  */
    break;

  case 34:
#line 133 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opArrayPush,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.nPtr)); }
#line 1521 "tigParse.cpp" /* glr.c:788  */
    break;

  case 35:
#line 134 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMsgNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1527 "tigParse.cpp" /* glr.c:788  */
    break;

  case 36:
#line 135 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CContinueNode(); }
#line 1533 "tigParse.cpp" /* glr.c:788  */
    break;

  case 37:
#line 136 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CLoopBreakNode(); }
#line 1539 "tigParse.cpp" /* glr.c:788  */
    break;

  case 38:
#line 137 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opNop);  }
#line 1545 "tigParse.cpp" /* glr.c:788  */
    break;

  case 39:
#line 138 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opSet,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr));  }
#line 1551 "tigParse.cpp" /* glr.c:788  */
    break;

  case 40:
#line 139 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opUnset,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr));  }
#line 1557 "tigParse.cpp" /* glr.c:788  */
    break;

  case 41:
#line 143 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberIdNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1563 "tigParse.cpp" /* glr.c:788  */
    break;

  case 42:
#line 147 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1569 "tigParse.cpp" /* glr.c:788  */
    break;

  case 43:
#line 148 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = NULL; }
#line 1575 "tigParse.cpp" /* glr.c:788  */
    break;

  case 44:
#line 152 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opAssign,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr)); }
#line 1581 "tigParse.cpp" /* glr.c:788  */
    break;

  case 45:
#line 153 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opAssign,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr)); }
#line 1587 "tigParse.cpp" /* glr.c:788  */
    break;

  case 46:
#line 157 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1593 "tigParse.cpp" /* glr.c:788  */
    break;

  case 47:
#line 158 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1599 "tigParse.cpp" /* glr.c:788  */
    break;

  case 48:
#line 163 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CVarAssigneeNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1605 "tigParse.cpp" /* glr.c:788  */
    break;

  case 49:
#line 167 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjMemberAssigneeNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1611 "tigParse.cpp" /* glr.c:788  */
    break;

  case 50:
#line 171 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1617 "tigParse.cpp" /* glr.c:788  */
    break;

  case 51:
#line 172 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opPushSelf); }
#line 1623 "tigParse.cpp" /* glr.c:788  */
    break;

  case 52:
#line 176 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayAssignNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1629 "tigParse.cpp" /* glr.c:788  */
    break;

  case 53:
#line 180 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1635 "tigParse.cpp" /* glr.c:788  */
    break;

  case 54:
#line 181 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opAdd, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1641 "tigParse.cpp" /* glr.c:788  */
    break;

  case 55:
#line 187 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),NULL); }
#line 1647 "tigParse.cpp" /* glr.c:788  */
    break;

  case 56:
#line 188 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr)); }
#line 1653 "tigParse.cpp" /* glr.c:788  */
    break;

  case 57:
#line 189 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),NULL); }
#line 1659 "tigParse.cpp" /* glr.c:788  */
    break;

  case 58:
#line 190 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr)); }
#line 1665 "tigParse.cpp" /* glr.c:788  */
    break;

  case 59:
#line 191 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr); }
#line 1671 "tigParse.cpp" /* glr.c:788  */
    break;

  case 60:
#line 197 "tig.y" /* glr.c:788  */
    { CSyntaxNode::childLevel++; }
#line 1677 "tigParse.cpp" /* glr.c:788  */
    break;

  case 61:
#line 198 "tig.y" /* glr.c:788  */
    { CSyntaxNode::childLevel++; }
#line 1683 "tigParse.cpp" /* glr.c:788  */
    break;

  case 62:
#line 203 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1689 "tigParse.cpp" /* glr.c:788  */
    break;

  case 63:
#line 207 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new ClassIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1695 "tigParse.cpp" /* glr.c:788  */
    break;

  case 64:
#line 208 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),new ClassIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str))); }
#line 1701 "tigParse.cpp" /* glr.c:788  */
    break;

  case 65:
#line 212 "tig.y" /* glr.c:788  */
    { CSyntaxNode::funcMode(true); }
#line 1707 "tigParse.cpp" /* glr.c:788  */
    break;

  case 66:
#line 213 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1713 "tigParse.cpp" /* glr.c:788  */
    break;

  case 67:
#line 214 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = NULL; }
#line 1719 "tigParse.cpp" /* glr.c:788  */
    break;

  case 68:
#line 218 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1725 "tigParse.cpp" /* glr.c:788  */
    break;

  case 69:
#line 219 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1731 "tigParse.cpp" /* glr.c:788  */
    break;

  case 70:
#line 223 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr),NULL); }
#line 1737 "tigParse.cpp" /* glr.c:788  */
    break;

  case 71:
#line 224 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1743 "tigParse.cpp" /* glr.c:788  */
    break;

  case 72:
#line 225 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1749 "tigParse.cpp" /* glr.c:788  */
    break;

  case 73:
#line 226 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CFlagDeclNode(); }
#line 1755 "tigParse.cpp" /* glr.c:788  */
    break;

  case 74:
#line 230 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMembDeclIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1761 "tigParse.cpp" /* glr.c:788  */
    break;

  case 75:
#line 234 "tig.y" /* glr.c:788  */
    { ; }
#line 1767 "tigParse.cpp" /* glr.c:788  */
    break;

  case 76:
#line 238 "tig.y" /* glr.c:788  */
    { CSyntaxNode::flagNamesTmp.push_back(std::string(*(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str))); }
#line 1773 "tigParse.cpp" /* glr.c:788  */
    break;

  case 77:
#line 239 "tig.y" /* glr.c:788  */
    { CSyntaxNode::flagNamesTmp.push_back(std::string(*(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str))); }
#line 1779 "tigParse.cpp" /* glr.c:788  */
    break;

  case 78:
#line 244 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CGlobalFuncDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1785 "tigParse.cpp" /* glr.c:788  */
    break;

  case 79:
#line 256 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CInitNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1791 "tigParse.cpp" /* glr.c:788  */
    break;

  case 80:
#line 257 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CInitNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.iValue)); }
#line 1797 "tigParse.cpp" /* glr.c:788  */
    break;

  case 81:
#line 258 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CInitNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1803 "tigParse.cpp" /* glr.c:788  */
    break;

  case 82:
#line 259 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CInitNode((CObjIdentNode*)(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1809 "tigParse.cpp" /* glr.c:788  */
    break;

  case 83:
#line 260 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CInitNode((CArrayInitListNode*)(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1815 "tigParse.cpp" /* glr.c:788  */
    break;

  case 84:
#line 264 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CFunctionDefNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1821 "tigParse.cpp" /* glr.c:788  */
    break;

  case 85:
#line 265 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CFunctionDefNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1827 "tigParse.cpp" /* glr.c:788  */
    break;

  case 86:
#line 269 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1833 "tigParse.cpp" /* glr.c:788  */
    break;

  case 87:
#line 270 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1839 "tigParse.cpp" /* glr.c:788  */
    break;

  case 88:
#line 274 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CStrNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1845 "tigParse.cpp" /* glr.c:788  */
    break;

  case 89:
#line 278 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CEventIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1851 "tigParse.cpp" /* glr.c:788  */
    break;

  case 90:
#line 291 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CodeBlockNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1857 "tigParse.cpp" /* glr.c:788  */
    break;

  case 91:
#line 295 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1863 "tigParse.cpp" /* glr.c:788  */
    break;

  case 92:
#line 296 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CVarIdNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1869 "tigParse.cpp" /* glr.c:788  */
    break;

  case 93:
#line 297 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opGetString); }
#line 1875 "tigParse.cpp" /* glr.c:788  */
    break;

  case 94:
#line 298 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opAdd, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1881 "tigParse.cpp" /* glr.c:788  */
    break;

  case 95:
#line 299 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opSub, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1887 "tigParse.cpp" /* glr.c:788  */
    break;

  case 96:
#line 300 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opMod, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1893 "tigParse.cpp" /* glr.c:788  */
    break;

  case 97:
#line 301 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opMinus, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1899 "tigParse.cpp" /* glr.c:788  */
    break;

  case 98:
#line 302 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1905 "tigParse.cpp" /* glr.c:788  */
    break;

  case 99:
#line 303 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1911 "tigParse.cpp" /* glr.c:788  */
    break;

  case 100:
#line 304 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1917 "tigParse.cpp" /* glr.c:788  */
    break;

  case 101:
#line 305 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr); }
#line 1923 "tigParse.cpp" /* glr.c:788  */
    break;

  case 102:
#line 306 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opPushSelf); }
#line 1929 "tigParse.cpp" /* glr.c:788  */
    break;

  case 103:
#line 308 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opIn,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1935 "tigParse.cpp" /* glr.c:788  */
    break;

  case 104:
#line 309 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opNotIn,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1941 "tigParse.cpp" /* glr.c:788  */
    break;

  case 105:
#line 310 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opChildren,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1947 "tigParse.cpp" /* glr.c:788  */
    break;

  case 106:
#line 311 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMakeHotNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),NULL);}
#line 1953 "tigParse.cpp" /* glr.c:788  */
    break;

  case 107:
#line 312 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMakeHotNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr));}
#line 1959 "tigParse.cpp" /* glr.c:788  */
    break;

  case 108:
#line 313 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CNothingNode(); }
#line 1965 "tigParse.cpp" /* glr.c:788  */
    break;

  case 109:
#line 314 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opStyle,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1971 "tigParse.cpp" /* glr.c:788  */
    break;

  case 110:
#line 315 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opCap,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1977 "tigParse.cpp" /* glr.c:788  */
    break;

  case 111:
#line 316 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opInherits,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1983 "tigParse.cpp" /* glr.c:788  */
    break;

  case 112:
#line 318 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opHas,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1989 "tigParse.cpp" /* glr.c:788  */
    break;

  case 113:
#line 319 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opHotCheck,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1995 "tigParse.cpp" /* glr.c:788  */
    break;

  case 114:
#line 320 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opNot,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2001 "tigParse.cpp" /* glr.c:788  */
    break;

  case 115:
#line 321 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2007 "tigParse.cpp" /* glr.c:788  */
    break;

  case 116:
#line 322 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opMatch, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2013 "tigParse.cpp" /* glr.c:788  */
    break;

  case 117:
#line 323 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opIs, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2019 "tigParse.cpp" /* glr.c:788  */
    break;

  case 118:
#line 324 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opIsNot, (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2025 "tigParse.cpp" /* glr.c:788  */
    break;

  case 119:
#line 325 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CNewNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr),NULL); }
#line 2031 "tigParse.cpp" /* glr.c:788  */
    break;

  case 120:
#line 329 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CVarExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 2037 "tigParse.cpp" /* glr.c:788  */
    break;

  case 121:
#line 330 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2043 "tigParse.cpp" /* glr.c:788  */
    break;

  case 122:
#line 331 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2049 "tigParse.cpp" /* glr.c:788  */
    break;

  case 123:
#line 332 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2055 "tigParse.cpp" /* glr.c:788  */
    break;

  case 124:
#line 337 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CDerefVarNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 2061 "tigParse.cpp" /* glr.c:788  */
    break;

  case 125:
#line 341 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CFlagExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 2067 "tigParse.cpp" /* glr.c:788  */
    break;

  case 126:
#line 345 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberCallNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2073 "tigParse.cpp" /* glr.c:788  */
    break;

  case 127:
#line 346 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CSuperCallNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2079 "tigParse.cpp" /* glr.c:788  */
    break;

  case 128:
#line 351 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberCallNode(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 2085 "tigParse.cpp" /* glr.c:788  */
    break;

  case 129:
#line 355 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CFuncIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str),NULL); }
#line 2091 "tigParse.cpp" /* glr.c:788  */
    break;

  case 130:
#line 356 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CFuncIdentNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2097 "tigParse.cpp" /* glr.c:788  */
    break;

  case 131:
#line 361 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr); }
#line 2103 "tigParse.cpp" /* glr.c:788  */
    break;

  case 132:
#line 362 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = NULL; }
#line 2109 "tigParse.cpp" /* glr.c:788  */
    break;

  case 133:
#line 366 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CParamExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2115 "tigParse.cpp" /* glr.c:788  */
    break;

  case 134:
#line 367 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),new CParamExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr))); }
#line 2121 "tigParse.cpp" /* glr.c:788  */
    break;

  case 135:
#line 368 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = NULL; }
#line 2127 "tigParse.cpp" /* glr.c:788  */
    break;

  case 136:
#line 372 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2133 "tigParse.cpp" /* glr.c:788  */
    break;

  case 137:
#line 373 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CStrNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 2139 "tigParse.cpp" /* glr.c:788  */
    break;

  case 138:
#line 377 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CIntNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.iValue)); }
#line 2145 "tigParse.cpp" /* glr.c:788  */
    break;

  case 139:
#line 381 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayDynInitNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 2151 "tigParse.cpp" /* glr.c:788  */
    break;

  case 140:
#line 386 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2157 "tigParse.cpp" /* glr.c:788  */
    break;

  case 141:
#line 387 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2163 "tigParse.cpp" /* glr.c:788  */
    break;

  case 142:
#line 391 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayDynInitElem((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2169 "tigParse.cpp" /* glr.c:788  */
    break;

  case 143:
#line 395 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayInitListNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 2175 "tigParse.cpp" /* glr.c:788  */
    break;

  case 144:
#line 399 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2181 "tigParse.cpp" /* glr.c:788  */
    break;

  case 145:
#line 400 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2187 "tigParse.cpp" /* glr.c:788  */
    break;

  case 146:
#line 404 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayInitConstNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 2193 "tigParse.cpp" /* glr.c:788  */
    break;

  case 147:
#line 405 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayInitConstNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.iValue)); }
#line 2199 "tigParse.cpp" /* glr.c:788  */
    break;

  case 148:
#line 407 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayInitConstNode((CMemberIdNode*)(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2205 "tigParse.cpp" /* glr.c:788  */
    break;

  case 149:
#line 412 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayElementExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 2211 "tigParse.cpp" /* glr.c:788  */
    break;

  case 150:
#line 416 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2217 "tigParse.cpp" /* glr.c:788  */
    break;

  case 151:
#line 417 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2223 "tigParse.cpp" /* glr.c:788  */
    break;

  case 152:
#line 422 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opEq, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2229 "tigParse.cpp" /* glr.c:788  */
    break;

  case 153:
#line 423 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opLT, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2235 "tigParse.cpp" /* glr.c:788  */
    break;

  case 154:
#line 424 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opLE, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2241 "tigParse.cpp" /* glr.c:788  */
    break;

  case 155:
#line 425 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opGT, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2247 "tigParse.cpp" /* glr.c:788  */
    break;

  case 156:
#line 426 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opGE, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2253 "tigParse.cpp" /* glr.c:788  */
    break;

  case 157:
#line 427 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opNE, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2259 "tigParse.cpp" /* glr.c:788  */
    break;

  case 158:
#line 431 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opAnd, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2265 "tigParse.cpp" /* glr.c:788  */
    break;

  case 159:
#line 432 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opOr, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2271 "tigParse.cpp" /* glr.c:788  */
    break;


#line 2275 "tigParse.cpp" /* glr.c:788  */
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
  (!!((Yystate) == (-242)))

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



#line 435 "tig.y" /* glr.c:2549  */


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
