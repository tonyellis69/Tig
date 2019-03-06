%{
	#define YYDEBUG 1
    #include <cstdio>
	#include <iostream>
	#include <string>
	#include <vector>

	#include "compiler.h"
	#include "syntaxNode.h"
	#include "lineRec.h"

    void yyerror(const char *);
    int yylex(void);


	CTigCompiler* tigC;

	//extern int yylineno;
	extern char* yytext;
	extern fpos_t lastLinePos;
	extern fpos_t linePos;
	extern FILE* yyin;

	extern std::vector<std::string> filenames;
	extern std::vector<TLineRec> lineRecs;



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
%type <nPtr>  string_literal event_identifier 
%type <nPtr> code_block 
%type <nPtr> variable_expr assignment variable_assignee obj_member_assignee element_assignee var_or_obj_memb deref_variable_expr
%type <nPtr> string_statement
%type <nPtr> obj_identifier class_identifier optional_member_list member_decl_list member_decl obj_expr init_expr 
%type <iValue> level
%type <nPtr> memb_decl_identifier memb_function_def return_expr member_call optional_param_list
%type <nPtr> flag_decl flag_decl_list
%type <nPtr> array_init_expr constant_seq array_init_const array_element_expr array_index_expr array_init_list expr_seq array_dyn_init_elem
%type <nPtr> comparison_expr logic_expression
%type <nPtr> global_func_decl   param_list  func_call func_ident 
%type <nPtr> memberId flag_expr

%token PRINT SET_WINDOW CLEAR_WINDOW OPEN_WINDOW END RETURN
%token EVENT OPTION
%token OBJECT  ARROW INHERITS SUPERCLASS FLAG NEW
%token GETSTRING
%token HOT MAKE_HOT PURGE ALL CLEAR USED STYLE CAP
%token ARRAY MESSAGE
%token START_TIMER START_EVENT AT
%token <iValue> INTEGER
%token <str> IDENTIFIER STRING
%token ENDL
%token IF
%token FOR EACH  CONTINUE  NOT LOOP_BREAK
%token SELF CHILDREN
//CHILD SIBLING PARENT
%token ADD_ASSIGN
%token BREAK TRON TROFF
%token NOTHING
%token MOVE TO 
%token SET UNSET

%left EQ NE GE '>' LE '<'  OR AND     // '%left' makes these tokens left associative
%nonassoc HAS
%left '+' '-'							 // this ensures that long complex sums are never ambiguous. 
%left '*' '/' '%' '#'
%left MATCHES IS IN	OF					//Wow, this solves a LOT of <expr> token <expr> shift/reduce problems
%right '!' 

%nonassoc UMINUS 
%nonassoc IFX 
%nonassoc ELSE

%verbose
%glr-parser
//%expect-rr 2

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
		//| option ';'									{ $$ = $1; }
		| string_statement	';'							{ $$ = new CStrStatement($1);}
		| START_TIMER	';'								{ $$ = new COpNode(opStartTimer); }
		| START_EVENT event_identifier AT INTEGER ';'	{ $$ = new CTimedEventNode($2,$4); }
		| member_call ';'								{ $$ = new CallDiscardNode($1); }
		| func_call		';'								{ $$ = new CallDiscardNode($1); }
		| HOT expression ',' deref_variable_expr	',' expression ';'		{ $$ = new CHotTextNode($2,$4,$6); }
		| HOT expression ',' expression	',' expression ';'		{ $$ = new CHotTextNode($2,$4,$6); }
		| PURGE memberId  ',' expression ';'				{ $$ = new COpNode(opPurge,$2,$4); }
		| PURGE ALL ';'										{ $$ = new COpNode(opPurge,new CIntNode(0),new CIntNode(0)); }
		| RETURN return_expr ';'						{ $$ = new CReturnNode($2); }
		| IF '(' expression ')' statement %prec IFX			{ $$ = new CIfNode($3, $5, NULL); }	//$prec gives this rule the lesser precedence of dummy token IFX
        | IF '(' expression ')' statement ELSE statement	{ $$ = new CIfNode($3, $5, $7); } //thus rule has the greater precedence of ELSE
		//| FOR EACH var_or_obj_memb OF obj_expr statement	{ $$ = new CForEachElementNode($3, $5, $6); } //{ $$ = new CForEachNode($3, $5, $6); }
		| FOR EACH var_or_obj_memb OF obj_expr statement	{ $$ = new CForEachElementNode($3, $5, $6); }
		| var_or_obj_memb ADD_ASSIGN expression ';'			{ $$ = new COpAssignNode(opAdd,$1,$3); }
		| BREAK	';'										{ $$ = new COpNode(opBrk); }
		| MOVE  obj_expr TO obj_expr ';'				{ $$ = new COpNode(opMove,$2,$4); }
		| TRON	';'										{ $$ = new CTronNode(true); }
		| TROFF	';'										{ $$ = new CTronNode(false); }
		| OPEN_WINDOW expression ';'					{ $$ = new COpNode(opOpenWin,$2); }
		| SET_WINDOW '(' expression ')' ';'				{ $$ = new COpNode(opWin,$3); }
		| CLEAR_WINDOW ';'								{ $$ = new COpNode(opClr); }
		| HOT CLEAR ';'									{ $$ = new COpNode(opHotClr); }
		| var_or_obj_memb ARRAY '=' expression	';'		{ $$ = new COpNode(opArrayPush,$4,$1); }
		| MESSAGE param_list ';'						{ $$ = new CMsgNode($2); }
		| CONTINUE ';'									{ $$ = new CContinueNode(); }
		| LOOP_BREAK ';'								{ $$ = new CLoopBreakNode(); }
		| ';'											{ $$ = new COpNode(opNop);  }
		| SET obj_expr flag_expr ';'					{ $$ = new COpNode(opSet,$2,$3);  }
		| UNSET obj_expr flag_expr ';'					{ $$ = new COpNode(opUnset,$2,$3);  }
        ;

memberId:
		IDENTIFIER										{ $$ = new CMemberIdNode($1); }
		;

return_expr:
		expression										{ $$ = $1; }
		|												{ $$ = NULL; }
		;

assignment:
		var_or_obj_memb '=' expression					{ $$ = new COpNode(opAssign,$3,$1); }
		| element_assignee '=' expression				{ $$ = new COpNode(opAssign,$3,$1); } //was opAssignElem
		;

var_or_obj_memb:
		variable_assignee								{ $$ = $1; }
		| obj_member_assignee							{ $$ = $1; }
		//| element_assignee								{ $$ = $1; }
		;

variable_assignee:
		IDENTIFIER										{ $$ = new CVarAssigneeNode($1); }
		;

obj_member_assignee:
		obj_expr '.' IDENTIFIER							{ $$ = new CObjMemberAssigneeNode($1,$3); }
		;

obj_expr:												
		variable_expr										{ $$ = $1; }
		| SELF											{ $$ = new COpNode(opPushSelf); }
		;

element_assignee:
		var_or_obj_memb '[' array_index_expr ']'		{ $$ = new CArrayAssignNode($1,$3); }
		;

string_statement:
		string_literal							{ $$ = $1; }
		| string_literal '+' expression			{ $$ = new COpNode(opAdd, $1, $3); }
		//| '(' expression ')' string_literal		{ $$ = $4; }
		;

dec_statement:
		//EVENT event_identifier code_block ';'								{ $$ = new CEventNode($2,$3); }	
		 obj_identifier optional_member_list ';'							{ $$ = new CObjDeclNode($1,$2,NULL); }
		| class_identifier obj_identifier optional_member_list ';'			{ $$ = new CObjDeclNode($2,$3,$1); }
		| level  obj_identifier optional_member_list ';'				{ $$ = new CObjDeclNode($2,$3,NULL); }
		| level class_identifier obj_identifier optional_member_list ';'	{ $$ = new CObjDeclNode($3,$4,$2); }
		| global_func_decl ';'												{ $$ = $1; }
		;



level:
		ARROW							{ CSyntaxNode::childLevel++; }
		| level ARROW					{ CSyntaxNode::childLevel++; }
		;


obj_identifier:
		IDENTIFIER						{ $$ = new CObjIdentNode($1); }
		;

class_identifier:
		IDENTIFIER						{ $$ = new ClassIdentNode($1); } //TO DO: can use CObjIdentNode
		| class_identifier IDENTIFIER	{ $$ = new CJointNode($1,new ClassIdentNode($2)); }
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
		| flag_decl									{ $$ = new CFlagDeclNode(); }
		;

memb_decl_identifier:
		IDENTIFIER							{ $$ = new CMembDeclIdentNode($1); }
		;

flag_decl:
		FLAG flag_decl_list					{ ; }
		;

flag_decl_list:
		IDENTIFIER							{ CSyntaxNode::flagNamesTmp.push_back(std::string(*$1)); }
		| flag_decl_list  IDENTIFIER		{ CSyntaxNode::flagNamesTmp.push_back(std::string(*$2)); }
		;


global_func_decl:
		func_ident   '(' param_list  ')' code_block		{ $$ = new CGlobalFuncDeclNode($1,$3,$5); }
		;



//param_decl_list:
	//	IDENTIFIER							{ $$ = new CParamDeclNode($1); }
	//	| param_decl_list ',' IDENTIFIER	{ $$ = new CJointNode($1,new CParamDeclNode( $3)); }
		//| 									{ $$ = NULL; }
	//	;

init_expr:
		STRING						{ $$ = new CInitNode($1); }
		| INTEGER					{ $$ = new CInitNode($1); }
		| memb_function_def			{ $$ = new CInitNode($1); }
		| obj_identifier			{ $$ = new CInitNode((CObjIdentNode*)$1); }
		| array_init_list			{ $$ = new CInitNode((CArrayInitListNode*)$1); }
		;

memb_function_def:
		'(' param_list  ')' code_block					{ $$ = new CFunctionDefNode($2,$4); }
		| code_block									{ $$ = new CFunctionDefNode(NULL,$1); }
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

//option:								
//		OPTION string_literal optional_code_block event_identifier	{ $$ = new COptionNode($2,$3,$4); }
//		;

//optional_code_block:
//		code_block						{ $$ = $1; }
//		|								{ $$ = NULL; }
//		;

code_block:
		'{' statement_list	'}'			{ $$ = new CodeBlockNode($2); }
		;

expression:
      variable_expr						{ $$ = $1; }
	  | '&' IDENTIFIER					{ $$ = new CVarIdNode($2); }
	  | GETSTRING						{ $$ = new COpNode(opGetString); }
	  | expression '+' expression		{ $$ = new COpNode(opAdd, $1, $3); }
	  | expression '-' expression		{ $$ = new COpNode(opSub, $1, $3); }
	  | expression '%' expression		{ $$ = new COpNode(opMod, $1, $3); }
	  | '-' expression %prec UMINUS		{ $$ = new COpNode(opMinus, $2); }
	  | constant_expr					{ $$ = $1; }
	  | array_init_expr					{ $$ = $1; }
	  | comparison_expr					{ $$ = $1; }
	  | '(' expression ')'				{ $$ = $2; }
	  | SELF							{ $$ = new COpNode(opPushSelf); }
	  //| obj_expr IS IN obj_expr			{ $$ = new COpNode(opIn,$1,$4); }
	   | expression IN expression			{ $$ = new COpNode(opIn,$1,$3); } //was obj_expr
	  | obj_expr NOT IN obj_expr			{ $$ = new COpNode(opNotIn,$1,$4); }
	  | CHILDREN '(' obj_expr ')'		{ $$ = new COpNode(opChildren,$3); }
	  | MAKE_HOT '(' expression ',' expression ',' expression ')' { $$ = new CMakeHotNode($3,$5,$7,NULL);}
	  | MAKE_HOT '(' expression ',' expression ',' expression ',' param_list ')' { $$ = new CMakeHotNode($3,$5,$7,$9);}
	  | NOTHING							{ $$ = new CNothingNode(); }
	  | STYLE '(' expression ')'		{ $$ = new COpNode(opStyle,$3); }
	  | CAP '(' expression ')'			{ $$ = new COpNode(opCap,$3); }
	  | obj_expr INHERITS obj_expr		{ $$ = new COpNode(opInherits,$1,$3); }
	//  | obj_expr HAS memberId			{ $$ = new COpNode(opHas,$1,$3); }
	  | obj_expr HAS expression			{ $$ = new COpNode(opHas,$1,$3); }
	  | HOT expression USED				{ $$ = new COpNode(opHotCheck,$2); }
	  | '!' expression					{ $$ = new COpNode(opNot,$2); }
	  | logic_expression				{ $$ = $1; } 
	  | expression MATCHES expression   { $$ = new COpNode(opMatch, $1, $3); }
	  | obj_expr IS flag_expr			{ $$ = new COpNode(opIs, $1, $3); }
	  | obj_expr IS NOT flag_expr		{ $$ = new COpNode(opIsNot, $1, $4); }
	  | NEW obj_identifier				{ $$ = new CNewNode($2,NULL); }
      ;

variable_expr:
	IDENTIFIER							{ $$ = new CVarExprNode($1); }
	| array_element_expr				{ $$ = $1; } //b/c in every instance we want a variable, we might want one of these
	| member_call						{ $$ = $1; }
	| func_call							{ $$ = $1; }
	//| deref_variable_expr				{ $$ = $1; } //TO DO: does this do anything as a variable expr???
	;

deref_variable_expr:
	'<' variable_expr '>'			{ $$ = new CDerefVarNode($2); }
	;

flag_expr:
	IDENTIFIER						{ $$ = new CFlagExprNode($1); }
	;

member_call:
	 obj_expr '.' func_ident optional_param_list				{ $$ = new CMemberCallNode($1, $3, $4); }
	| obj_identifier SUPERCLASS func_ident optional_param_list	{ $$ = new CSuperCallNode($1, $3, $4); }
	//| obj_expr '#' variable_expr optional_param_list				{ $$ = new CMemberCallNode($1, $3, $4); }
	;

func_call:
	func_ident '(' param_list ')'				{ $$ = new CMemberCallNode(NULL, $1, $3); }
	;

func_ident:
	IDENTIFIER							{ $$ = new CFuncIdentNode($1,NULL); }
	| deref_variable_expr				{ $$ = new CFuncIdentNode(NULL,$1); }
	;

 
optional_param_list:
	'(' param_list ')'						{ $$ = $2; }
	|										{ $$ = NULL; }


param_list:
	expression								{ $$ = new CParamExprNode($1); }
	| param_list ',' expression				{ $$ = new CJointNode($1,new CParamExprNode($3)); }
	|										{ $$ = NULL; }
	;

constant_expr:							//TO DO: float
	integer_constant					{ $$ = $1; }
	| STRING 							{ $$ = new CStrNode($1); } 
	; 

integer_constant:
	INTEGER								{ $$ = new CIntNode($1); }
	;

array_init_expr:
	'[' expr_seq ']'				{ $$ = new CArrayDynInitNode($2); }
	;
	//TO DO: any reason this has to be constant_seq and not expressions?

expr_seq:
	array_dyn_init_elem							{ $$ = $1; }
	| expr_seq ',' array_dyn_init_elem			{ $$ = new CJointNode($1,$3); }
	;

array_dyn_init_elem:						
	expression									{ $$ = new CArrayDynInitElem($1); }
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
	//| memb_function_def			{ $$ = new CArrayInitConstNode($1); } //arrays of functions not implemented
	| memberId					{ $$ = new CArrayInitConstNode((CMemberIdNode*)$1); }
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
	| expression NE expression				{ $$ = new COpNode(opNE, $1, $3); }
	;

logic_expression:
	expression AND expression				{ $$ = new COpNode(opAnd, $1, $3); }
	| expression OR expression				{ $$ = new COpNode(opOr, $1, $3); }
	;

%%

void yyerror(const char *s) {
	int lineNum = lineRecs.back().currentLineNo;
	std::cerr << "\n" << s << ", unexpected " << yytext << " in file " << filenames[lineRecs.back().fileNo]
		<< ", line " << lineNum;
	rewind(yyin);
	char buf[500];
	for (int line=0; line < lineNum;line++)
		fgets(buf,500,yyin);
	fprintf(stdout, "\n%s", buf);
	exit(1);
}
