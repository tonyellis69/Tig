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
    HAS = 267,
    ARROW = 268,
    INHERITS = 269,
    SUPERCLASS = 270,
    GETSTRING = 271,
    HOT = 272,
    MAKE_HOT = 273,
    PURGE = 274,
    ALL = 275,
    CLEAR = 276,
    USED = 277,
    STYLE = 278,
    CAP = 279,
    ARRAY = 280,
    MESSAGE = 281,
    START_TIMER = 282,
    START_EVENT = 283,
    AT = 284,
    INTEGER = 285,
    IDENTIFIER = 286,
    STRING = 287,
    ENDL = 288,
    IF = 289,
    FOR = 290,
    EACH = 291,
    IN = 292,
    OF = 293,
    SELF = 294,
    CHILDREN = 295,
    ADD_ASSIGN = 296,
    BREAK = 297,
    TRON = 298,
    TROFF = 299,
    NOTHING = 300,
    MOVE = 301,
    TO = 302,
    EQ = 303,
    NE = 304,
    GE = 305,
    LE = 306,
    OR = 307,
    AND = 308,
    UMINUS = 309,
    IFX = 310,
    ELSE = 311
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 26 "tig.y" /* glr.c:2553  */
				 						
    int iValue;                 // integer value - for numeric constants etc 
	float fValue;				//float value - for floating-point constants
    CSyntaxNode *nPtr;          // node pointer - enables symbols to point to syntax nodes
	 std::string* str;

#line 118 "tigParse.hpp" /* glr.c:2553  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TIGPARSE_HPP_INCLUDED  */
