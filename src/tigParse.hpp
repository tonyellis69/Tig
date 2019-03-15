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
    ARRAY = 282,
    MESSAGE = 283,
    START_TIMER = 284,
    START_EVENT = 285,
    AT = 286,
    INTEGER = 287,
    IDENTIFIER = 288,
    STRING = 289,
    ENDL = 290,
    IF = 291,
    FOR = 292,
    EACH = 293,
    CONTINUE = 294,
    NOT = 295,
    LOOP_BREAK = 296,
    FINAL_LOOP = 297,
    SELF = 298,
    CHILDREN = 299,
    ADD_ASSIGN = 300,
    SUB_ASSIGN = 301,
    BREAK = 302,
    TRON = 303,
    TROFF = 304,
    NOTHING = 305,
    MOVE = 306,
    TO = 307,
    UNFLAG = 308,
    ROLL = 309,
    SORT_DESC = 310,
    BY = 311,
    LOG = 312,
    EQ = 313,
    NE = 314,
    GE = 315,
    LE = 316,
    OR = 317,
    AND = 318,
    HAS = 319,
    MATCHES = 320,
    IS = 321,
    IN = 322,
    OF = 323,
    UMINUS = 324,
    IFX = 325,
    ELSE = 326
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

#line 133 "tigParse.hpp" /* glr.c:2553  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TIGPARSE_HPP_INCLUDED  */
