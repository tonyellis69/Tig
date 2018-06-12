%{
	#define YYDEBUG 1
    #include <cstdio>
	#include <string>

	#include "compiler.h"
	#include "syntaxNode.h"


    void yyerror(char *);
    int yylex(void);


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
%type <nPtr> variable_expr assignment variable_assignee obj_member_assignee element_assignee var_or_obj_memb
%type <nPtr> string_statement
%type <nPtr> obj_identifier class_identifier optional_member_list member_decl_list member_decl obj_expr init_expr member_expr 
%type <iValue> level
%type <nPtr> memb_decl_identifier memb_function_def return_expr member_call
%type <nPtr> array_init_expr constant_seq array_init_const array_element_expr array_index_expr array_init_list
%type <nPtr> comparison_expr

%token PRINT END RETURN
%token EVENT OPTION
%token OBJECT HAS CHILD 
%token GETSTRING
%token HOT
%token START_TIMER START_EVENT AT
%token <iValue> INTEGER
%token <str> IDENTIFIER STRING
%token ENDL
%token IF
%left EQ NE GE '>' LE '<'  OR AND     // '%left' makes these tokens left associative
%left '+' '-'							 // this ensures that long complex sums are never ambiguous. 
%left '*' '/' '%' 
//%left ','
%nonassoc UMINUS
%nonassoc IFX 
%nonassoc ELSE

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
		| assignment ';'								{ $$ = $1; }
		| '{' statement_list '}'						{ $$ = $2; }
		| END ';'										{ $$ = new COpNode(opEnd);}
		| option ';'									{ $$ = $1; }
		| string_statement	';'							{ $$ = new CStrStatement($1);}
		| START_TIMER	';'								{ $$ = new COpNode(opStartTimer); }
		| START_EVENT event_identifier AT INTEGER ';'	{ $$ = new CTimedEventNode($2,$4); }
		| member_call ';'								{ $$ = new CallDiscardNode($1); }
		| HOT STRING IDENTIFIER	 ';'					{ $$ = new CHotTextNode($2,$3); }
		| RETURN return_expr ';'						{ $$ = new CReturnNode($2); }
		| IF '(' expression ')' statement %prec IFX			{ $$ = new CIfNode($3, $5, NULL); }	//$prec gives this rule the lesser precedence of dummy token IFX
        | IF '(' expression ')' statement ELSE statement	{ $$ = new CIfNode($3, $5, $7); } //thus rule has the greater precedence of ELSE
        ;

return_expr:
		expression										{ $$ = $1; }
		|												{ $$ = NULL; }
		;

assignment:
		var_or_obj_memb '=' expression					{ $$ = new COpNode(opAssign,$1,$3); }
		| element_assignee '=' expression				{ $$ = new COpNode(opAssign,$1,$3); }
		;

var_or_obj_memb:
		variable_assignee								{ $$ = $1; }
		| obj_member_assignee							{ $$ = $1; }
		;

variable_assignee:
		IDENTIFIER										{ $$ = new CVarAssigneeNode($1); }
		;

obj_member_assignee:
		obj_expr '.' IDENTIFIER							{ $$ = new CObjMemberAssigneeNode($1,$3); }
		;

obj_expr:												
		IDENTIFIER										{ $$ = new CObjRefNode($1); }
		| member_expr									{ $$ = $1; }
		;

element_assignee:
		var_or_obj_memb '[' array_index_expr ']'		{ $$ = new CArrayAssignNode($1,$3); }
		;

string_statement:
		string_literal							{ $$ = $1; }
		| string_literal '+' expression			{ $$ = new COpNode(opAdd, $1, $3); }
		;

dec_statement:
		EVENT event_identifier code_block ';'								{ $$ = new CEventNode($2,$3); }	
		| obj_identifier optional_member_list ';'							{ $$ = new CObjDeclNode($1,$2,NULL); }
		| class_identifier obj_identifier optional_member_list ';'			{ $$ = new CObjDeclNode($2,$3,$1); }
		| level  obj_identifier optional_member_list ';'				{ $$ = new CObjDeclNode($2,$3,NULL); }
		| level class_identifier obj_identifier optional_member_list ';'	{ $$ = new CObjDeclNode($3,$4,$2); }
		;



level:
		CHILD							{ CSyntaxNode::childLevel++; }
		| level CHILD					{ CSyntaxNode::childLevel++; }
		;


obj_identifier:
		IDENTIFIER					   { $$ = new CObjIdentNode($1); }
		;

class_identifier:
		IDENTIFIER					   { $$ = new ClassIdentNode($1); } //TO DO: can use CObjIdentNode
		;

optional_member_list:
		HAS								{ CSyntaxNode::funcMode(true); }
		member_decl_list				{ $$ = $3; }
		|								{ $$ = NULL; }
		;

member_decl_list:
		member_decl							{ $$ = $1; }
		| member_decl_list ',' member_decl	{ $$ = new CJointNode($1,$3); }
		;

member_decl:
		memb_decl_identifier						{ $$ = new CMemberDeclNode($1,NULL); } 
		| memb_decl_identifier '=' init_expr		{ $$ = new CMemberDeclNode($1,$3); }
		| memb_decl_identifier	init_expr			{ $$ = new CMemberDeclNode($1,$2); }
		;

memb_decl_identifier:
		IDENTIFIER							{ $$ = new CMembDeclIdentNode($1); }
		;


init_expr:
		STRING						{ $$ = new CInitNode($1); }
		| INTEGER					{ $$ = new CInitNode($1); }
		| memb_function_def			{ $$ = new CInitNode($1); }
		| obj_identifier			{ $$ = new CInitNode((CObjIdentNode*)$1); }
		| array_init_list			{ $$ = new CInitNode((CArrayInitListNode*)$1); }
		;

memb_function_def:
		code_block					{ $$ = new CFunctionDefNode($1); }
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
		'{' statement_list	'}'			{ $$ = new CodeBlockNode($2); }
		;

expression:
      variable_expr						{ $$ = $1; }
	  | GETSTRING						{ $$ = new COpNode(opGetString); }
	  | expression '+' expression		{ $$ = new COpNode(opAdd, $1, $3); }
	  | member_expr						{ $$ = $1; }
	  | member_call						{ $$ = new COpNode(opCall, $1); }
	  | constant_expr					{ $$ = $1; }
	  | array_init_expr					{ $$ = $1; }
	  | array_element_expr				{ $$ = $1; }
	  | comparison_expr					{ $$ = $1; }
	  | '(' expression ')'				{ $$ = $2; }
      ;

variable_expr:
	IDENTIFIER							{ $$ = new CVarExprNode($1); }
	;

member_expr:
	obj_expr '.' IDENTIFIER				{ $$ = new CMemberExprNode($1, $3); }
	;

member_call:
	 //obj_expr '.' IDENTIFIER	'(' ')'		{ $$ = new CMemberExprNode($1, $3); }
	 obj_expr '.' IDENTIFIER	'(' ')'		{ $$ = new CMemberCallNode($1, $3,NULL); }
	;

constant_expr:							//TO DO: float
	integer_constant					{ $$ = $1; }
	| STRING 							{ $$ = new CStrNode($1); } 
	; 

integer_constant:
	INTEGER								{ $$ = new CIntNode($1); }
	;

array_init_expr:
	'[' constant_seq ']'				{ $$ = new CArrayInitNode($2); }
	;

array_init_list:
	'[' constant_seq ']'				{ $$ = new CArrayInitListNode($2); }
	;

constant_seq:
	array_init_const						{ $$ = $1; }
	| constant_seq ',' array_init_const		{ $$ = new CJointNode($1,$3); }
	;

array_init_const:
	STRING						{ $$ = new CArrayInitConstNode($1); }
	| INTEGER					{ $$ = new CArrayInitConstNode($1); }
	| obj_identifier			{ $$ = new CArrayInitConstNode((CObjIdentNode*)$1); }
	;

	
array_element_expr:
	var_or_obj_memb '[' array_index_expr ']'		{ $$ = new CArrayElementExprNode($1,$3); }
	;

array_index_expr:
	variable_expr				{ $$ = $1; }
	| integer_constant			{ $$ = $1; }
	;


comparison_expr:
	expression EQ expression				{ $$ = new COpNode(opEq, $1, $3); }
	| expression '<' expression				{ $$ = new COpNode(opLT, $1, $3); }
	| expression LE expression				{ $$ = new COpNode(opLE, $1, $3); }
	| expression '>' expression				{ $$ = new COpNode(opGT, $1, $3); }
	| expression GE expression				{ $$ = new COpNode(opGE, $1, $3); }
	;

%%

void yyerror(char *s) {
	fprintf(stdout, "\n%s, unexpected '%s' on line %d:", s, yytext,lineNo);
	rewind(yyin);
	char buf[500];
	for (int line=0; line < lineNo;line++)
		fgets(buf,500,yyin);
	fprintf(stdout, "\n%s", buf);
}
