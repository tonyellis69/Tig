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

	extern int yylineno;
	extern int lineNo;

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
%type <nPtr> event option_list option string_literal event_identifier

%token PRINT 
%token EVENT OPTION
%token <iValue> INTEGER
%token <sIndex> VARIABLE
%token <str> IDENTIFIER STRING
%token END ENDL
%left '+' '-'
%left '*' '/'

//%verbose


%%

program:
		tigcode						{ tigC->encode($1); }
		|							{ ;}
		;

tigcode:
		statement						{ $$ = $1; }
		| tigcode statement				{ $$ = new CJointNode($1,$2); }
        ;

statement:
        PRINT expression ';'			{ $$ = new COpNode(opPrint,$2); }   	
        //| VARIABLE '=' expression		{ sym[$1] = $3; }
		| event	';'					{ $$ = $1; }
        ;

event:
		EVENT event_identifier string_literal	',' option_list 	{ $$ = new CEventNode($2,$3,$5); }
		;

string_literal:
		STRING							{ $$ = new CStrNode($1); } 
		;

event_identifier:
		IDENTIFIER					   { $$ = new CEventIdentNode($1); }
		;

option_list:
		option							{ $$ = $1; }
		| option_list ',' option		{ $$ = new CJointNode($1,$3); }
		;

option:								
		OPTION string_literal event_identifier				{ $$ = new COptionNode($2,$3); }
		;


expression:
      STRING 							{ $$ = new CStrNode($1); } 
      | INTEGER							{ printf("%d\n", $1); }
        ;

%%

void yyerror(char *s) {
   // fprintf(stderr, "%s\n", s);
	fprintf(stdout, "line %d: %s\n", lineNo, s);
}
