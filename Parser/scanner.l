%option yylineno
%option header-file = "prep_scanner.h"
%option outfile = "prep_scanner.c"
%option noyywrap
%{
	#include <stdio.h>
	#include <ctype.h>
	#include "global.h"
	#include "parser.h"

	char name[512] = "";
	int insertedTokens = 0;
	int palabras_reservadas = 0;
	int identifiers = 0;
	int literals = 0;
	int operators = 0;
	int delimiters = 0;
	int token_total = 0;

%}

D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS		(f|F|l|L)
IS		(u|U|l|L)*

  /* ------------------------------------------------------------------------------------------------ Rules */


number         [0-9]
letter        [a-zA-Z]
under 		  "_"
string 		\"(\\.|[^"])*\"

%%
0[xX]{H}+{IS}?		{ return CONSTANT; }
0{D}+{IS}?		{ return CONSTANT; }
{D}+{IS}?		{ return CONSTANT; }
L?'(\\.|[^\\'])+'	{ return CONSTANT; }

{D}+{E}{FS}?		{ return CONSTANT; }
{D}*"."{D}+({E})?{FS}?	{ return CONSTANT; }
{D}+"."{D}*({E})?{FS}?	{ return CONSTANT; }

"<<=" {operators ++; token_total ++; strcpy(name,yytext); return SHLEQUAL;}
">>=" { operators ++; token_total ++;strcpy(name,yytext); return SHREQUAL;}
"++" { operators ++; token_total ++;strcpy(name,yytext); return PLUSPLUS;}
"--" { operators ++; token_total ++;strcpy(name,yytext); return MINUSMINUS;}
"+=" { operators ++; token_total ++;strcpy(name,yytext); return PLUSEQUAL;}
"-=" { operators ++; token_total ++;strcpy(name,yytext); return MINUSEQUAL;}
"*=" { operators ++; token_total ++;strcpy(name,yytext); return MULEQUAL;}
"/=" { operators ++; token_total ++;strcpy(name,yytext); return DIVEQUAL;}
"%=" { operators ++; token_total ++;strcpy(name,yytext); return MODEQUAL;}
"&=" { operators ++; token_total ++;strcpy(name,yytext); return ANDEQUAL;}
"|=" { operators ++; token_total ++;strcpy(name,yytext); return OREQUAL;}
"^="  { operators ++; token_total ++;strcpy(name,yytext); return ROOFEQUAL;}
"->" { operators ++; token_total ++;strcpy(name,yytext); return ARROW;}
"==" { operators ++; token_total ++;strcpy(name,yytext); return EQUAL;}
"!=" { operators ++; token_total ++;strcpy(name,yytext); return NOTEQUAL;}
"&&" { operators ++; token_total ++;strcpy(name,yytext); return AND;}
"||" { operators ++; token_total ++;strcpy(name,yytext); return OR;}
"<<" { operators ++; token_total ++;strcpy(name,yytext); return SHL;}
">>" { operators ++; token_total ++;strcpy(name,yytext); return SHR;}
"<=" { operators ++; token_total ++;strcpy(name,yytext); return LEQ; }
">=" { operators ++; token_total ++;strcpy(name,yytext); return GEQ;}
"<>" { operators ++; token_total ++;strcpy(name,yytext); return LESSMORE;}
"=" { operators ++; token_total ++;strcpy(name,yytext); return ASSIGN;}
"+" { operators ++; token_total ++;strcpy(name,yytext); return PLUS;   }
"-" { operators ++; token_total ++;strcpy(name,yytext); return MINUS; }
"*" { operators ++; token_total ++;strcpy(name,yytext); return MUL; }
"/" { operators ++; token_total ++;strcpy(name,yytext); return DIV; }
"&" { operators ++; token_total ++;strcpy(name,yytext); return BITAND;}
"|" { operators ++; token_total ++;strcpy(name,yytext); return BITOR;}
"^" { operators ++; token_total ++;strcpy(name,yytext); return ROOF;}
"~" { operators ++; token_total ++;strcpy(name,yytext); return TAIL;}
"%" { operators ++; token_total ++;strcpy(name,yytext); return MOD;}
"<" { operators ++; token_total ++;strcpy(name,yytext); return LESS;}
">" { operators ++; token_total ++;strcpy(name,yytext); return GREATER;}
{string} { strcpy(name,yytext); return STRING;}
"_" { strcpy(name,yytext); return UNDERSCORE;}

"..." { strcpy(name,yytext); return ELLIPSIS;}
"'" { strcpy(name,yytext); return SINGLEQUOTE;}
"(" { delimiters ++; token_total ++;strcpy(name,yytext); return LPAREN;}
")" { delimiters ++; token_total ++;strcpy(name,yytext); return RPAREN;}
"{" { delimiters ++; token_total ++;strcpy(name,yytext); return CORCHL;}
"}" { delimiters ++; token_total ++;strcpy(name,yytext); return CORCHR;}
"[" { delimiters ++; token_total ++;strcpy(name,yytext); return LBRACKET;}
"]" { delimiters ++; token_total ++;strcpy(name,yytext); return RBRACKET;}
"\\" { strcpy(name,yytext); return BACKSLASH;}
"/*" { strcpy(name,yytext);return COMMENTOPEN;}
"*/" { strcpy(name,yytext);return COMMENTCLOSE;}
"//" { strcpy(name,yytext);return UNCLOSEDCOMMENT;}

":" { delimiters ++; token_total ++;strcpy(name,yytext); return COLON;}
"?" { strcpy(name,yytext); return QUESTIONMARK;}
"!" { operators++; token_total ++; strcpy(name,yytext); return NOT;}
";" { delimiters ++; token_total ++;strcpy(name,yytext); return SEMICOLON;}
"," { delimiters ++; token_total ++;strcpy(name,yytext); return COMMA;}
"." { delimiters ++; token_total ++;strcpy(name,yytext); return PERIOD;}
"\"" { strcpy(name,yytext); return DOUBLEQUOTE;}

"if" { palabras_reservadas ++; token_total ++;strcpy(name,yytext); return IFSYS; }
"else" { palabras_reservadas ++; token_total ++;strcpy(name,yytext); return ELSESYS;}
"while" { palabras_reservadas ++; token_total ++;strcpy(name,yytext); return WHILELOOP;}
"for" { palabras_reservadas ++; token_total ++;strcpy(name,yytext); return FORLOOP;}
"auto" { palabras_reservadas ++; token_total ++; strcpy(name,yytext); return AUTO;}
"break" { palabras_reservadas ++; token_total ++; strcpy(name,yytext); return BREAK;}
"case" { palabras_reservadas ++; token_total ++; strcpy(name,yytext); return CASE;}
"char" { palabras_reservadas ++; token_total ++; strcpy(name,yytext); return CHAR;}
"const" { palabras_reservadas ++; token_total ++; strcpy(name,yytext); return CONST;}
"continue" { palabras_reservadas ++; token_total ++;strcpy(name,yytext); return CONTINUE;}

"default" { palabras_reservadas ++; token_total ++; strcpy(name,yytext); return DEFAULT;}
"do" { palabras_reservadas ++; token_total ++;strcpy(name,yytext); return DO;}
"double" { palabras_reservadas ++; token_total ++;strcpy(name,yytext); return DOUBLE;}
"enum" { palabras_reservadas ++; token_total ++;strcpy(name,yytext); return ENUM;}
"extern" { palabras_reservadas ++; token_total ++;strcpy(name,yytext); return EXTERN;}
"float" { palabras_reservadas ++; token_total ++; strcpy(name,yytext); return FLOAT;}
"goto" { palabras_reservadas ++; token_total ++; strcpy(name,yytext); return GOTO;}
"int" { palabras_reservadas ++; token_total ++; strcpy(name,yytext); return INT;}


"printf" { palabras_reservadas ++; token_total ++; strcpy(name,yytext); return PRINTF;}
"fprintf" {palabras_reservadas ++; token_total ++; strcpy(name,yytext); return FPRINTF;}
"fopen" {palabras_reservadas ++; token_total ++; strcpy(name,yytext); return FOPEN;}
"fclose" {palabras_reservadas ++; token_total ++; strcpy(name,yytext); return FCLOSE;}
"system" {palabras_reservadas ++; token_total ++; strcpy(name,yytext); return SYSTEM;}
"strcpy" {palabras_reservadas ++; token_total ++; strcpy(name,yytext); return STRCPY;}
"strcmp" {palabras_reservadas ++; token_total ++; strcpy(name,yytext); return STRCMP;}
"exit" {palabras_reservadas ++; token_total ++; strcpy(name,yytext); return EXIT;}
"true" {palabras_reservadas ++; token_total ++; strcpy(name,yytext); return TRUE;}
"false" {palabras_reservadas ++; token_total ++; strcpy(name,yytext); return FALSE;}
"toupper" {palabras_reservadas ++; token_total ++; strcpy(name,yytext); return TOUPPER;}
"feof" {palabras_reservadas ++; token_total ++; strcpy(name,yytext); return FEOF;}
"getc" {palabras_reservadas ++; token_total ++; strcpy(name,yytext); return GETC;}
"memset" {palabras_reservadas ++; token_total ++; strcpy(name,yytext); return MEMSET;}
"malloc" {palabras_reservadas ++; token_total ++; strcpy(name,yytext); return MALLOC;}
"calloc" {palabras_reservadas ++; token_total ++; strcpy(name,yytext); return CALLOC;}


"long" { palabras_reservadas ++; token_total ++;strcpy(name,yytext); return LONG;}
"register" { palabras_reservadas ++; token_total ++; strcpy(name,yytext); return REGISTER;}
"return" { palabras_reservadas ++; token_total ++; return RETURN;}
"short" { palabras_reservadas ++; token_total ++; strcpy(name,yytext); return SHORT;}
"signed" { palabras_reservadas ++; token_total ++; strcpy(name,yytext); return SIGNED;}
"sizeof" { palabras_reservadas ++; token_total ++; strcpy(name,yytext); return SIZEOF;}
"static" { palabras_reservadas ++; token_total ++;strcpy(name,yytext); return STATIC;}
"struct" { palabras_reservadas ++; token_total ++;strcpy(name,yytext); return STRUCT;}
"switch" { palabras_reservadas ++; token_total ++;strcpy(name,yytext); return SWITCH;}
"typedef" { palabras_reservadas ++; token_total ++;strcpy(name,yytext); return TYPEDEF;}
"union" { palabras_reservadas ++; token_total ++; strcpy(name,yytext); return UNION;}
"unsigned" { palabras_reservadas ++; token_total ++; strcpy(name,yytext); return UNSIGNED;}
"void" { palabras_reservadas ++; token_total ++; strcpy(name,yytext); return VOID;}
"volatile" { palabras_reservadas ++; token_total ++;strcpy(name,yytext); return VOLATILE;}

 <<EOF>> { strcpy(name,yytext); return EOF;}
 [\t] 	{strcpy(name,yytext); return TAB;}
 " " { strcpy(name,yytext); return SPACE;}
[\n]	{strcpy(name,yytext); return NEWLINE;}

{letter}({letter}|{number}|{number})* { identifiers ++; token_total ++; strcpy(name,yytext); return ID;}
{number}+ { literals ++; token_total ++; strcpy(name,yytext); return NUMBER;}
.	{ strcpy(name,yytext); return UNKNOWN;}




%%
	/* --------------------------------------------------------------------------------------------------Code */



	void scanFile(){
		file = fopen( "processedFile.txt", "r" );
		YY_BUFFER_STATE bufferFinal = yy_create_buffer(file,YY_BUF_SIZE);
		estructura t ;
	}



	estructura getNextToken(YY_BUFFER_STATE buffer){
		yy_switch_to_buffer (buffer); // Nos pasamos al buffer principal.
		int next_token = yylex();
		if (next_token == COMMENTOPEN){
			printf("Encontre el inicio d un comment!\n");
			while(next_token != COMMENTCLOSE){
				next_token = yylex();
			}
			printf("Encontre el final del comment %s\n", name);
			next_token = yylex();
		}
		if(next_token == UNCLOSEDCOMMENT){
			while(next_token != NEWLINE){
				next_token = yylex();
			}
			next_token = yylex();
		}
		estructura identifiedToken;
		identifiedToken.token_type = next_token;
		strcpy(identifiedToken.value,name);

		printf("%s", identifiedToken.value);
		return identifiedToken;
	}
