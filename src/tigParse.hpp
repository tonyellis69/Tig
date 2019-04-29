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
    END = 262,
    RETURN = 263,
    EVENT = 264,
    OPTION = 265,
    OBJECT = 266,
    ARROW = 267,
    INHERITS = 268,
    SUPERCLASS = 269,
    FLAG = 270,
    DELETE = 271,
    GETSTRING = 272,
    HOT = 273,
    MAKE_HOT = 274,
    PURGE = 275,
    ALL = 276,
    CLEAR = 277,
    USED = 278,
    STYLE = 279,
    CAP = 280,
    NEXT = 281,
    MESSAGE = 282,
    PAUSE = 283,
    UNPAUSE = 284,
    START_TIMER = 285,
    START_EVENT = 286,
    AT = 287,
    INTEGER = 288,
    IDENTIFIER = 289,
    STRING = 290,
    ENDL = 291,
    IF = 292,
    WHILE = 293,
    FOR = 294,
    EACH = 295,
    CONTINUE = 296,
    NOT = 297,
    LOOP_BREAK = 298,
    FINAL_LOOP = 299,
    FIRST_LOOP = 300,
    FROM = 301,
    SELF = 302,
    CHILDREN = 303,
    ADD_ASSIGN = 304,
    SUB_ASSIGN = 305,
    BREAK = 306,
    TRON = 307,
    TROFF = 308,
    NOTHING = 309,
    MOVE = 310,
    TO = 311,
    UNFLAG = 312,
    ROLL = 313,
    RANDOM = 314,
    SORT_DESC = 315,
    BY = 316,
    LOG = 317,
    NEW = 318,
    ARRAY = 319,
    WITH = 320,
    OR = 321,
    AND = 322,
    NE = 323,
    GE = 324,
    LE = 325,
    EQ = 326,
    HAS = 327,
    MATCHES = 328,
    IS = 329,
    IN = 330,
    OF = 331,
    UMINUS = 332,
    IFX = 333,
    ELSE = 334
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

#line 141 "tigParse.hpp" /* glr.c:2553  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TIGPARSE_HPP_INCLUDED  */
