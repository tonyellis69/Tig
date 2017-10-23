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
	extern fpos_t linePos;
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

%type <nPtr> program tigcode statement expression statement_list dec_statement
%type <nPtr> event option string_literal event_identifier 
%type <nPtr> code_block optional_code_block
%type <nPtr> variable_assign variable_expr


%token PRINT END
%token EVENT OPTION
%token GETSTRING
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
		| dec_statement					{ $$ = $1; }
		| tigcode dec_statement				{ $$ = new CJointNode($1,$2); }
        ;

statement:
        PRINT expression ';'			{ $$ = new COpNode(opPrint,$2); }   	
        | variable_assign '=' expression ';'	{ $$ = new COpNode(opAssign,$1,$3); }
		//| event	';'						{ $$ = $1; }  //TO DO: maybe move to 'declaritive statements'
		| '{' statement_list '}'		{ $$ = $2; }
		| END ';'						{ $$ = new COpNode(opEnd);}
		|  option ';'					{ $$ = $1; }
        ;

dec_statement:
		event	';'						{ $$ = $1; }  //TO DO: maybe move to 'declaritive statements'
		;

variable_assign:
		IDENTIFIER						{ $$ = new CGlobalVarAssignNode($1); }
	;

statement_list:
		statement						{ $$ = $1; }
		| statement_list statement		{ $$ = new CJointNode($1,$2); }
		;

event:
		EVENT event_identifier code_block 	{ $$ = new CEventNode($2,$3); }
		;

string_literal:
		STRING							{ $$ = new CStrNode($1); } 
		;

event_identifier:
		IDENTIFIER					   { $$ = new CEventIdentNode($1); }
		;

option:								
		OPTION string_literal optional_code_block event_identifier	{ $$ = new COptionNode($2,$3,$4); }
		;

optional_code_block:
		code_block						{ $$ = $1; }
		|								{ $$ = NULL; }
		;

code_block:
		'{' statement_list	'}'			{ $$ = $2; }
		;

expression:
      STRING 							{ $$ = new CStrNode($1); } 
	  | variable_expr					{ $$ = $1; }
      | INTEGER							{ printf("%d\n", $1); }
	  | GETSTRING						{ $$ = new COpNode(opGetString); }
	  | expression '+' expression		{ $$ = new COpNode(opAdd, $1, $3); }
      ;

variable_expr:
	IDENTIFIER							{ $$ = new CGlobalVarExprNode($1); }
	;

%%

void yyerror(char *s) {
	fprintf(stdout, "\n%s, '%s' on line %d:", s, yytext,lineNo);
	rewind(yyin);
	char buf[500];
	for (int line=0; line < lineNo;line++)
		fgets(buf,500,yyin);
	fprintf(stdout, "\n%s", buf);
}
