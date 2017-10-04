%{
	#define YYDEBUG 1
    #include <cstdio>
	#include <string>

	#include "compiler.h"
	#include "syntaxNode.h"


    void yyerror(char *);
    int yylex(void);

    int sym[26];

	CTigCompiler* tigC;

%}

	// Definition of YYSTYPE - the type used for symbols, which enables them to hold various values. 
	// Causes this definition to appear in y.tab.h as a C union with these members: 
%union {				 						
    int iValue;                 // integer value - for numeric constants etc 
	float fValue;				//float value - for floating-point constants
    CSyntaxNode *nPtr;          // node pointer - enables symbols to point to syntax nodes
	int iValue2;				//dual integer value, needed for second digit in the random number generator, eg, 1d20
	 char sIndex;                /* symbol table index */
	 std::string* str;
};	

%type <nPtr> program tigcode statement expression 

%token PRINT

%token <iValue> INTEGER
%token <sIndex> VARIABLE
%token <str> STRING
%token END ENDL
%left '+' '-'
%left '*' '/'

%%

program:
		tigcode						{ tigC->encode($1); }
		|							{ ;}
		;

tigcode:
		statement						{ $$ = $1; }
		| tigcode statement				{ $$ = tigC->branchNode($1,$2); }
        ;

statement:
        PRINT expression ';'			{ $$ = new COpNode(opPrint,$2); }   //         printf("%s\n", tigC->getString($2->getStrIndex())); }	
        //| VARIABLE '=' expression		{ sym[$1] = $3; }
        ;

expression:
      STRING 							{ $$ = tigC->stringNode($1); } 
      | INTEGER							{ printf("%d\n", $1); }
        ;

%%

void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}
