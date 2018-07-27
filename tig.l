    /* Tig lexer */
%{	//Definitions section. Anything here is copied to the generated C file.
   	#include "syntaxNode.h"

	#include <iostream>

	#include <io.h>       // isatty
	 #pragma warning (push)
	#pragma warning (disable : 4005)
	#include <string>
	#pragma warning (pop)
	#define  isatty _isatty
	
	#include "tigParse.hpp"

    void yyerror(const char *);
	void trackLine();
	
	int lineNo = 1; ///<Keeps track of line numbers for error messages.
	std::string stringBuf;
	const int maxIdentBufs = 10;
	std::string identBufs[maxIdentBufs];
	int currentIdentBuf = 0;
%}

	/* Substitutions simplify pattern-matching rules, eg, letter [A-Za-z] or digit [0-9] */
LETTER   [a-zA-Z_]
DIGIT    [0-9]
IDENT    {LETTER}({LETTER}|{DIGIT})*


	//Excusive states are useful for sequences where the usual rules change.
%x	COMMENT STR

	//supposedly hits performance: %option yylineno 
 

%%
	//Rules section. Here we tell the lexer what to look out for and what to do when it finds it.
	
"/*"					BEGIN(COMMENT);
<COMMENT>[^*\n]*        /* eat anything that's not a '*'  */
<COMMENT>"*"+[^*/\n]*   /* eat up '*'s not followed by '/'s */
<COMMENT>\n             trackLine();
<COMMENT>"*"+"/"        BEGIN(INITIAL);

"//"					{	char c;  /*eat //comments */
							while ((c = yyinput()) != '\n' && c != 0);
							trackLine();
						}

[0-9]+					{	yylval.iValue = atoi(yytext);
							return INTEGER;
						}
						
[-()<>=+*/%;{}.,\[\]!&#] 		return *yytext;    // Match any one of these nonalphanumeric characters amd returns the Ascii code.
	
">="					return GE;    /* Matches the literal string inside " " */
"<="					return LE;
"=="					return EQ;
"!="					return NE;
"&&"					return AND;
"||"					return OR;
"+="					return ADD_ASSIGN;
"brk"					return BREAK;
"tron"					return TRON;
"troff"					return TROFF;
"print"         		return PRINT;
"end"					return END;
"event"					return EVENT;
"option"				return OPTION;
"getString"				return GETSTRING;
"startTimer"			return START_TIMER;
"start"					return START_EVENT;
"at"					return AT;
"object"				return OBJECT;
"has"					return HAS;
"hot"					return HOT;
"purge"					return PURGE;
"clear"					return CLEAR;
"used"					return USED;
"->"					return ARROW;
"return"				return RETURN;
"if"					return IF;
"else"					return ELSE;
"for"					return FOR;
"each"					return EACH;
"in"					return IN;
"of"					return OF;
"self"					return SELF;
"children"				return CHILDREN;
"makeHot"				return MAKE_HOT;
"true"					{	yylval.iValue = 1; return INTEGER; }
"false"					{	yylval.iValue = 0; return INTEGER; }
"nothing"				return NOTHING;
"move"					return MOVE;
"to"					return TO;
"setWindow"				return SET_WINDOW;
"clearWindow"			return CLEAR_WINDOW;
"style"					return STYLE;
"cap"					return CAP;
"inherits"				return INHERITS;
"::"					return SUPERCLASS;
"[]"					return ARRAY;
{IDENT}					{	identBufs[currentIdentBuf].clear(); 
							identBufs[currentIdentBuf].assign(yytext,yyleng);
							yylval.str = &identBufs[currentIdentBuf];
							currentIdentBuf++;
							//std::cerr << "\ncurrentIdentBuf at " << currentIdentBuf << " with " << identBufs[currentIdentBuf-1] ;
							if (currentIdentBuf == maxIdentBufs)
								currentIdentBuf = 0;
							return IDENTIFIER;
						}
						
\"						{ 	BEGIN(STR); //We've started lexxing a string. 
							stringBuf.clear(); 
						}	
<STR>\"\"				stringBuf.append("\"");	//Two double quotes, replace with one.
<STR>\"					{	//End of string. 
							yylval.str = &stringBuf;
							BEGIN INITIAL;			/*The string ended normally with a quote, so no more to be done. */
							return STRING;
						}
<STR>\\n				stringBuf.append("\n"); /* user-supplied line break. */ 
<STR>[ ]*\n[ ]*			stringBuf.append(" "); trackLine(); //An actual line break
<STR>[ \t]+				stringBuf.append(" ");
<STR>.					stringBuf.append( yytext,yyleng);		
									
[ \t]					;	/* skip whitespace */
\n						trackLine();    //keep track of line number
.						yyerror("Unknown character");

%%

int yywrap(void) { //Called when input exhausted. Reset yyin and return 0 to process another file.
    return 1;
}

void trackLine() {
	lineNo++; 
}
