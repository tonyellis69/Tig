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
    GETSTRING = 268,
    HOT = 269,
    MAKE_HOT = 270,
    PURGE = 271,
    START_TIMER = 272,
    START_EVENT = 273,
    AT = 274,
    INTEGER = 275,
    IDENTIFIER = 276,
    STRING = 277,
    ENDL = 278,
    IF = 279,
    FOR = 280,
    EACH = 281,
    IN = 282,
    SELF = 283,
    CHILDREN = 284,
    ADD_ASSIGN = 285,
    BREAK = 286,
    TRON = 287,
    TROFF = 288,
    NOTHING = 289,
    MOVE = 290,
    TO = 291,
    EQ = 292,
    NE = 293,
    GE = 294,
    LE = 295,
    OR = 296,
    AND = 297,
    UMINUS = 298,
    IFX = 299,
    ELSE = 300
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

#line 107 "tigParse.hpp" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TIGPARSE_HPP_INCLUDED  */
