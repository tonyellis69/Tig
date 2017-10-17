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

	//extern int yylineno;
	extern int lineNo;
	extern char* yytext;
	extern fpos_t lastLinePos;
	extern FILE* yyin;
%}

	// Definition of YYSTYPE - the type used for symbols, which enables them to hold various values. 
	// Causes this definition to appear in y.tab.h as a C union with these members: 
%union {				 						
    int iValue;                 // integer value - for numeric constants etc 
	float fValue;				//float value - for floating-point constants
    CSyntaxNode *nPtr;          // node pointer - enables symbols to point to syntax nodes
	 char sIndex;                /* symbol table index */
	 std::string* str;
};	

%type <nPtr> program tigcode statement expression statement_list
%type <nPtr> event option_list option string_literal event_identifier optional_option_list 
%type <nPtr> optional_code_block code_block
%type <nPtr> variable

%token PRINT END
%token EVENT OPTION
%token <iValue> INTEGER
%token <str> IDENTIFIER STRING
%token ENDL
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
        | variable '=' expression ';'	{ $$ = new COpNode(opAssign,$1,$3); }
		| event	';'						{ $$ = $1; }  //TO DO: maybe move to 'declaritive statements'
		| '{' statement_list '}'		{ $$ = $2; }
		| END ';'						{ $$ = new COpNode(opEnd);}
        ;

variable:
		IDENTIFIER						{ $$ = new CGlobalVarNode($1); }
	;

statement_list:
		statement						{ $$ = $1; }
		| statement_list statement		{ $$ = new CJointNode($1,$2); }
		;

event:
		EVENT event_identifier string_literal optional_code_block optional_option_list 	{ $$ = new CEventNode($2,$3,$5); }
		;

string_literal:
		STRING							{ $$ = new CStrNode($1); } 
		;

event_identifier:
		IDENTIFIER					   { $$ = new CEventIdentNode($1); }
		;

optional_option_list:
		option_list						{$$ = $1; }
		|								{ $$ = NULL; }
		;

option_list:
		',' option							{ $$ = $2; }
		| option_list ',' option		{ $$ = new CJointNode($1,$3); }
		;

option:								
		OPTION string_literal event_identifier				{ $$ = new COptionNode($2,$3); }
		;

optional_code_block:
		code_block						{ $$ = $1; }
		|								{ $$ = NULL; }
		;

code_block:
		statement_list					{ $$ = $1; }
		;

expression:
      STRING 							{ $$ = new CStrNode($1); } 
	  | variable						{ $$ = $1; }
      | INTEGER							{ printf("%d\n", $1); }
        ;

%%

void yyerror(char *s) {
	fprintf(stdout, "\n%s, '%s' on line %d:", s, yytext,lineNo);
	fsetpos(yyin,&lastLinePos);
	char buf[500];
	fgets(buf,500,yyin);
	fgets(buf,500,yyin);
	fprintf(stdout, "\n%s", buf);
}
