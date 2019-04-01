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
    NEW = 271,
    DELETE = 272,
    GETSTRING = 273,
    HOT = 274,
    MAKE_HOT = 275,
    PURGE = 276,
    ALL = 277,
    CLEAR = 278,
    USED = 279,
    STYLE = 280,
    CAP = 281,
    NEXT = 282,
    ARRAY = 283,
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
    FOR = 295,
    EACH = 296,
    CONTINUE = 297,
    NOT = 298,
    LOOP_BREAK = 299,
    FINAL_LOOP = 300,
    FIRST_LOOP = 301,
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
    SORT_DESC = 314,
    BY = 315,
    LOG = 316,
    OR = 317,
    AND = 318,
    NE = 319,
    GE = 320,
    LE = 321,
    EQ = 322,
    HAS = 323,
    MATCHES = 324,
    IS = 325,
    IN = 326,
    OF = 327,
    UMINUS = 328,
    IFX = 329,
    ELSE = 330
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

#line 137 "tigParse.hpp" /* glr.c:2553  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TIGPARSE_HPP_INCLUDED  */
