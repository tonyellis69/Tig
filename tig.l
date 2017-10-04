    /* Tig lexer */
%{	//Definitions section. Anything here is copied to the generated C file.
  
   // #include <stdlib.h>

   	#include "syntaxNode.h"

	#include <io.h>       // isatty
	 #pragma warning (push)
	#pragma warning (disable : 4005)
	#include <string>
	#pragma warning (pop)
	#define  isatty _isatty
	
	  #include "tigParse.hpp"

    void yyerror(char *);
	//extern "C" YYSTYPE yylval;
	
	int lineNo = 1; ///<Keeps track of line numbers for error messages.
	//char buf[10000]; //for temporarily storing string constants
	char* bufptr;
	std::string stringBuf;
%}

	/* Substitutions simplify pattern-matching rules, eg, letter [A-Za-z] or digit [0-9] */
	//TO DO: am I using these?
LETTER   [a-zA-Z_]
DIGIT    [0-9]
IDENT    {LETTER}({LETTER}|{DIGIT})*
EOL		'\n'


	//Excusive states are useful for sequences where the usual rules change.
%x	COMMENT STR

%%
	//Rules section. Here we tell the lexer what to look out for and what to do when it finds it.
	
"/*"					BEGIN(COMMENT);
<COMMENT>[^*\n]*        /* eat anything that's not a '*'  */
<COMMENT>"*"+[^*/\n]*   /* eat up '*'s not followed by '/'s */
<COMMENT>\n             ++lineNo;
<COMMENT>"*"+"/"        BEGIN(INITIAL);

"//"					{	char c;  /*eat //comments */
							while ((c = yyinput()) != '\n' && c != 0);
							lineNo++;
						}

[1-9][0-9]*				{
							yylval.iValue = atoi(yytext);
							 return INTEGER;
						 }
						
[-()<>=+*/%;{}.,] 		{	// Matches any one of these nonalphanumeric characters amd returns the Ascii code.
							return *yytext;    // yytext is a pointer to whatever string lex has matched.
						}
					
"print"         		return PRINT;
						
\"						{ 	BEGIN(STR); //We've started lexxing a string. 
							stringBuf.clear(); 
						}	

<STR>\"					{								//End of string. 
							//yylval.str = (char*)stringBuf.c_str(); /*Give the text to Yacc. */
							yylval.str = &stringBuf;
							BEGIN INITIAL;			/*The string ended normally with a quote, so no more to be done. */
							return STRING;
						}
<STR>.					{
								stringBuf.append( yytext,yyleng);
									
						}			



[ \t]   ;				/* skip whitespace */

\n						{ lineNo++;}   //keep track of line number

.						 yyerror("Unknown character");

%%

int yywrap(void) { //Called when input exhausted. Reset yyin and return 0 to process another file.
    return 1;
}
