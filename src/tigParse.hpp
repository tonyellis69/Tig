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
    MODAL = 262,
    CLEAR_MARKED = 263,
    END = 264,
    RETURN = 265,
    EVENT = 266,
    OPTION = 267,
    OBJECT = 268,
    ARROW = 269,
    INHERITS = 270,
    SUPERCLASS = 271,
    FLAG = 272,
    DELETE = 273,
    GETSTRING = 274,
    HOT = 275,
    MAKE_HOT = 276,
    MAKE_HOT_ALT = 277,
    PURGE = 278,
    ALL = 279,
    CLEAR = 280,
    USED = 281,
    STYLE = 282,
    CAP = 283,
    NEXT = 284,
    MESSAGE = 285,
    PAUSE = 286,
    UNPAUSE = 287,
    START_TIMER = 288,
    START_EVENT = 289,
    AT = 290,
    INTEGER = 291,
    IDENTIFIER = 292,
    STRING = 293,
    ENDL = 294,
    IF = 295,
    WHILE = 296,
    FOR = 297,
    EACH = 298,
    CONTINUE = 299,
    NOT = 300,
    LOOP_BREAK = 301,
    FINAL_LOOP = 302,
    FIRST_LOOP = 303,
    FROM = 304,
    SELF = 305,
    CHILDREN = 306,
    ADD_ASSIGN = 307,
    SUB_ASSIGN = 308,
    BREAK = 309,
    TRON = 310,
    TROFF = 311,
    NOTHING = 312,
    MOVE = 313,
    TO = 314,
    UNFLAG = 315,
    ROLL = 316,
    RANDOM = 317,
    SORT_DESC = 318,
    BY = 319,
    LOG = 320,
    NEW = 321,
    ARRAY = 322,
    WITH = 323,
    CONST = 324,
    OR = 325,
    AND = 326,
    NE = 327,
    GE = 328,
    LE = 329,
    EQ = 330,
    HAS = 331,
    MATCHES = 332,
    IS = 333,
    IN = 334,
    OF = 335,
    UMINUS = 336,
    IFX = 337,
    ELSE = 338
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

#line 145 "tigParse.hpp" /* glr.c:2553  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TIGPARSE_HPP_INCLUDED  */
