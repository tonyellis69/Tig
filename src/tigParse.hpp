/* A Bison parser, made by GNU Bison 3.0.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
    END = 261,
    RETURN = 262,
    EVENT = 263,
    OPTION = 264,
    OBJECT = 265,
    HAS = 266,
    ARROW = 267,
    INHERITS = 268,
    SUPERCLASS = 269,
    GETSTRING = 270,
    HOT = 271,
    MAKE_HOT = 272,
    PURGE = 273,
    CLEAR = 274,
    USED = 275,
    STYLE = 276,
    CAP = 277,
    ARRAY = 278,
    START_TIMER = 279,
    START_EVENT = 280,
    AT = 281,
    INTEGER = 282,
    IDENTIFIER = 283,
    STRING = 284,
    ENDL = 285,
    IF = 286,
    FOR = 287,
    EACH = 288,
    IN = 289,
    OF = 290,
    SELF = 291,
    CHILDREN = 292,
    ADD_ASSIGN = 293,
    BREAK = 294,
    TRON = 295,
    TROFF = 296,
    NOTHING = 297,
    MOVE = 298,
    TO = 299,
    EQ = 300,
    NE = 301,
    GE = 302,
    LE = 303,
    OR = 304,
    AND = 305,
    UMINUS = 306,
    IFX = 307,
    ELSE = 308
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 26 "tig.y" /* yacc.c:1909  */
				 						
    int iValue;                 // integer value - for numeric constants etc 
	float fValue;				//float value - for floating-point constants
    CSyntaxNode *nPtr;          // node pointer - enables symbols to point to syntax nodes
	 std::string* str;

#line 115 "tigParse.hpp" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TIGPARSE_HPP_INCLUDED  */
