/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Skeleton interface for Bison GLR parsers in C

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
    OPEN_WINDOW = 261,
    CLEAR_MARKED = 262,
    END = 263,
    RETURN = 264,
    EVENT = 265,
    OPTION = 266,
    OBJECT = 267,
    ARROW = 268,
    INHERITS = 269,
    SUPERCLASS = 270,
    FLAG = 271,
    DELETE = 272,
    GETSTRING = 273,
    HOT = 274,
    MAKE_HOT = 275,
    MAKE_HOT_ALT = 276,
    PURGE = 277,
    ALL = 278,
    CLEAR = 279,
    USED = 280,
    STYLE = 281,
    CAP = 282,
    NEXT = 283,
    MESSAGE = 284,
    PAUSE = 285,
    UNPAUSE = 286,
    START_TIMER = 287,
    START_EVENT = 288,
    AT = 289,
    INTEGER = 290,
    IDENTIFIER = 291,
    STRING = 292,
    ENDL = 293,
    IF = 294,
    WHILE = 295,
    FOR = 296,
    EACH = 297,
    CONTINUE = 298,
    NOT = 299,
    LOOP_BREAK = 300,
    FINAL_LOOP = 301,
    FIRST_LOOP = 302,
    FROM = 303,
    SELF = 304,
    CHILDREN = 305,
    ADD_ASSIGN = 306,
    SUB_ASSIGN = 307,
    BREAK = 308,
    TRON = 309,
    TROFF = 310,
    NOTHING = 311,
    MOVE = 312,
    TO = 313,
    UNFLAG = 314,
    ROLL = 315,
    RANDOM = 316,
    SORT_DESC = 317,
    BY = 318,
    LOG = 319,
    NEW = 320,
    ARRAY = 321,
    WITH = 322,
    CONST = 323,
    OR = 324,
    AND = 325,
    NE = 326,
    GE = 327,
    LE = 328,
    EQ = 329,
    HAS = 330,
    MATCHES = 331,
    IS = 332,
    IN = 333,
    OF = 334,
    UMINUS = 335,
    IFX = 336,
    ELSE = 337
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 33 "tig.y" /* glr.c:2553  */
				 						
    int iValue;                 // integer value - for numeric constants etc 
	float fValue;				//float value - for floating-point constants
    CSyntaxNode *nPtr;          // node pointer - enables symbols to point to syntax nodes
	 std::string* str;

#line 144 "tigParse.hpp" /* glr.c:2553  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TIGPARSE_HPP_INCLUDED  */
