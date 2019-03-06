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
    GETSTRING = 272,
    HOT = 273,
    MAKE_HOT = 274,
    PURGE = 275,
    ALL = 276,
    CLEAR = 277,
    USED = 278,
    STYLE = 279,
    CAP = 280,
    ARRAY = 281,
    MESSAGE = 282,
    START_TIMER = 283,
    START_EVENT = 284,
    AT = 285,
    INTEGER = 286,
    IDENTIFIER = 287,
    STRING = 288,
    ENDL = 289,
    IF = 290,
    FOR = 291,
    EACH = 292,
    CONTINUE = 293,
    NOT = 294,
    LOOP_BREAK = 295,
    SELF = 296,
    CHILDREN = 297,
    ADD_ASSIGN = 298,
    BREAK = 299,
    TRON = 300,
    TROFF = 301,
    NOTHING = 302,
    MOVE = 303,
    TO = 304,
    SET = 305,
    UNSET = 306,
    EQ = 307,
    NE = 308,
    GE = 309,
    LE = 310,
    OR = 311,
    AND = 312,
    HAS = 313,
    MATCHES = 314,
    IS = 315,
    IN = 316,
    OF = 317,
    UMINUS = 318,
    IFX = 319,
    ELSE = 320
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

#line 127 "tigParse.hpp" /* glr.c:2553  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TIGPARSE_HPP_INCLUDED  */
