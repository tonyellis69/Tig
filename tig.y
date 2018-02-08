%{
	#define YYDEBUG 1
    #include <cstdio>
	#include <string>

	#include "compiler.h"
	#include "syntaxNode.h"


    void yyerror(char *);
    int yylex(void);

    //int sym[26];

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
	 std::string* str;
};	

%type <nPtr> program tigcode statement expression constant_expr statement_list dec_statement
%type <nPtr> integer_constant
%type <nPtr> option string_literal event_identifier 
%type <nPtr> code_block optional_code_block
%type <nPtr> variable_assign variable_expr
%type <nPtr> string_statement
%type <nPtr> obj_identifier class_identifier optional_member_list member_decl_list member_decl member_identifier object_ref init_expr member_expr

%token PRINT END
%token EVENT OPTION
%token OBJECT HAS
%token GETSTRING
%token START_TIMER START_EVENT AT
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
		| tigcode dec_statement			{ $$ = new CJointNode($1,$2); }
        ;

statement:
        PRINT expression ';'							{ $$ = new COpNode(opPrint,$2); }   	
        | variable_assign '=' expression ';'			{ $$ = new COpNode(opAssign,$1,$3); }
		| '{' statement_list '}'						{ $$ = $2; }
		| END ';'										{ $$ = new COpNode(opEnd);}
		| option ';'									{ $$ = $1; }
		| string_statement	';'							{ $$ = new CStrStatement($1);}
		| START_TIMER	';'								{ $$ = new COpNode(opStartTimer); }
		| START_EVENT event_identifier AT INTEGER ';'	{ $$ = new CTimedEventNode($2,$4); }
		| member_expr ';'								{ $$ = new COpNode(opCall,$1); }
        ;

string_statement:
		string_literal							{ $$ = $1; }
		| string_literal '+' expression			{ $$ = new COpNode(opAdd, $1, $3); }
		;

dec_statement:
		EVENT event_identifier code_block ';'				{ $$ = new CEventNode($2,$3); }	
		| OBJECT obj_identifier optional_member_list ';'	{ $$ = new CObjDeclNode($2,$3,NULL); }
		//| OBJECT obj_identifier HAS member_decl_list ';'	{ $$ = new CObjDeclNode($2,$4); }
		| class_identifier obj_identifier optional_member_list ';'	{ $$ = new CObjDeclNode($2,$3,$1); }
		;

obj_identifier:
		IDENTIFIER					   { $$ = new CObjIdentNode($1); }
		;

class_identifier:
		IDENTIFIER					   { $$ = new ClassIdentNode($1); }
		;

optional_member_list:
		HAS member_decl_list			{ $$ = $2; }
		|								{ $$ = NULL; }
		;

member_decl_list:
		member_decl							{ $$ = $1; }
		| member_decl_list ',' member_decl	{ $$ = new CJointNode($1,$3); }
		;

member_decl:
		member_identifier						{ $$ = new CMemberDeclNode($1,new CInitNode()); } //
		| member_identifier '=' init_expr		{ $$ = new CMemberDeclNode($1,$3); }
		| member_identifier	init_expr			{ $$ = new CMemberDeclNode($1,$2); }
		;

member_identifier:					
		IDENTIFIER					{ $$ = new CMemberIdentNode($1); }
		;

init_expr:
		STRING						{ $$ = new CInitNode($1); }
		| INTEGER					{ $$ = new CInitNode($1); }
		| code_block				{ $$ = new CInitNode($1); }
		;

variable_assign:
		IDENTIFIER						{ $$ = new CGlobalVarAssignNode($1); }
		| object_ref '.' IDENTIFIER		{ $$ = new CReferenceNode($1,$3); }
		; 

object_ref:
		IDENTIFIER						{ $$ = new CObjRefNode($1); }
		| object_ref '.' IDENTIFIER		{ $$ = new CMemberNode($1, $3); }
		;


statement_list:
		statement						{ $$ = $1; }
		| statement_list statement		{ $$ = new CJointNode($1,$2); }
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
      variable_expr						{ $$ = $1; }
	  | GETSTRING						{ $$ = new COpNode(opGetString); }
	  | expression '+' expression		{ $$ = new COpNode(opAdd, $1, $3); }
	  | member_expr						{ $$ = $1; }
	  | constant_expr					{ $$ = $1; }
      ;

variable_expr:
	IDENTIFIER							{ $$ = new CIdentExprNode($1); }
	;

member_expr:
	object_ref '.' IDENTIFIER			{ $$ = new CMemberNode($1, $3); }
	;

constant_expr:							//TO DO: float
	integer_constant					{ $$ = $1; }
	| STRING 							{ $$ = new CStrNode($1); } 
	; 

integer_constant:
	INTEGER								{ $$ = new CIntNode($1); }
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
