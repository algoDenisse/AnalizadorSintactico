%option yylineno
%option header-file = "prep_scanner.h"
%option outfile = "prep_scanner.c"

%option yylineno


D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*


%x incl

%{
#include <stdio.h>
#include "parser.tab.h"
static void comment(void);
static int check_type(void);
//void readIncludeFile(char *filename);
void count();
void _remove();

extern int yyparse();
int yylineno;

FILE *beamerFile;
FILE *yyin;
void yyerror(const char *s);
void beamerParseFile();
void parseFile();
void parse(FILE *filename,int type);
void createBeamerFile();




%}
%%

"/*"			{ comment(); }

"auto"			{ count(); return(AUTO); }
"break"			{ count(); return(BREAK); }
"case"			{ count(); return(CASE); }
"char"			{ count(); return(CHAR); }
"const"			{ count(); return(CONST); }
"continue"		{ count(); return(CONTINUE); }
"default"		{ count(); return(DEFAULT); }
"do"			{ count(); return(DO); }
"double"		{ count(); return(DOUBLE); }
"else"			{ count(); return(ELSE); }
"enum"			{ count(); return(ENUM); }
"extern"		{ count(); return(EXTERN); }
"float"			{ count(); return(FLOAT); }
"for"			{ count(); return(FOR); }
"goto"			{ count(); return(GOTO); }
"if"			{ count(); return(IF); }
"int"			{ count(); return(INT); }
"long"			{ count(); return(LONG); }
"register"		{ count(); return(REGISTER); }
"return"		{ count(); return(RETURN); }
"short"			{ count(); return(SHORT); }
"signed"		{ count(); return(SIGNED); }
"sizeof"		{ count(); return(SIZEOF); }
"static"		{ count(); return(STATIC); }
"struct"		{ count(); return(STRUCT); }
"switch"		{ count(); return(SWITCH); }
"typedef"		{ count(); return(TYPEDEF); }
"union"			{ count(); return(UNION); }
"unsigned"		{ count(); return(UNSIGNED); }
"void"			{ count(); return(VOID); }
"volatile"		{ count(); return(VOLATILE); }
"while"			{ count(); return(WHILE); }

{L}({L}|{D})*		{ count(); return(check_type()); }

0[xX]{H}+{IS}?		{ count(); return(CONSTANT); }
0{D}+{IS}?		{ count(); return(CONSTANT); }
{D}+{IS}?		{ count(); return(CONSTANT); }
L?'(\\.|[^\\'])+'	{ count(); return(CONSTANT); }

{D}+{E}{FS}?		{ count(); return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{ count(); return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{ count(); return(CONSTANT); }

L?\"(\\.|[^\\"])*\"	{ count(); return(STRING_LITERAL); }

"..."			{ count(); return(ELLIPSIS); }
">>="			{ count(); return(RIGHT_ASSIGN); }
"<<="			{ count(); return(LEFT_ASSIGN); }
"+="			{ count(); return(ADD_ASSIGN); }
"-="			{ count(); return(SUB_ASSIGN); }
"*="			{ count(); return(MUL_ASSIGN); }
"/="			{ count(); return(DIV_ASSIGN); }
"%="			{ count(); return(MOD_ASSIGN); }
"&="			{ count(); return(AND_ASSIGN); }
"^="			{ count(); return(XOR_ASSIGN); }
"|="			{ count(); return(OR_ASSIGN); }
">>"			{ count(); return(RIGHT_OP); }
"<<"			{ count(); return(LEFT_OP); }
"++"			{ count(); return(INC_OP); }
"--"			{ count(); return(DEC_OP); }
"->"			{ count(); return(PTR_OP); }
"&&"			{ count(); return(AND_OP); }
"||"			{ count(); return(OR_OP); }
"<="			{ count(); return(LE_OP); }
">="			{ count(); return(GE_OP); }
"=="			{ count(); return(EQ_OP); }
"!="			{ count(); return(NE_OP); }
";"			{ count(); return(';'); }
"{"				{ count(); return('{'); }
"<%"		{ count(); return('{'); }
"}"   { count(); return('}'); }
","			{ count(); return(','); }
":"			{ count(); return(':'); }
"="			{ count(); return('='); }
"("			{ count(); return('('); }
")"			{ count(); return(')'); }
("["|"<:")		{ count(); return('['); }
("]"|":>")		{ count(); return(']'); }
"."			{ count(); return('.'); }
"&"			{ count(); return('&'); }
"!"			{ count(); return('!'); }
"~"			{ count(); return('~'); }
"-"			{ count(); return('-'); }
"+"			{ count(); return('+'); }
"*"			{ count(); return('*'); }
"/"			{ count(); return('/'); }
"%"			{ count(); return('%'); }
"<"			{ count(); return('<'); }
">"			{ count(); return('>'); }
"^"			{ count(); return('^'); }
"|"			{ count(); return('|'); }
"?"			{ count(); return('?'); }

[ \t\v\n\f]		{ count(); }
.			{ /* ignore bad characters */ }



<<EOF>> {
     			yypop_buffer_state();
					if ( !YY_CURRENT_BUFFER ){
              yyterminate();
          }

        }

%%

/*void readIncludeFile(char *filename){
	FILE *file = fopen( filename, "r" );
	if (file){
			YY_BUFFER_STATE bufferInclude = yy_create_buffer(file,YY_BUF_SIZE);
			if(bufferInclude){
				yypush_buffer_state(YY_CURRENT_BUFFER);
				yy_switch_to_buffer (bufferInclude);
			}

		}
	else{
		printf("Problem with incluyeme file\n");
	}
}*/



void _remove(){


}


static void comment()
{
	char c, c1;

loop:
	while ((c = input()) != '*' && c != 0)
		putchar(c);

	if ((c1 = input()) != '/' && c != 0)
	{
		unput(c1);
		goto loop;
	}

	if (c != 0)
		putchar(c1);
}


int column = 0;

void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	ECHO;
}




static int check_type()
{
	return(IDENTIFIER);
}



void yyerror(const char *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s in line: %d\n", column, "^", column, s, yylineno);

}


void beamerParseFile(FILE *filename){
		yyin = filename;
		FILE* fpLatex = freopen("fuenteLatex.txt","wb",stdout);
		yyparse();
		fclose(fpLatex);
   createBeamerFile();

}

void createBeamerFile(){

   FILE* beamerFile = fopen( "beamerFile.tex", "w" );

   FILE *finalFile;
   int c;
   int n = 0;
   int slide_lines = 0;

   //Declaraciones para el documento latex
   fprintf(beamerFile, "\\documentclass[8, usernames, dvipsnames]{beamer}\n");
   fprintf(beamerFile, "\\usepackage{color}\n");
   fprintf(beamerFile, "\\usepackage{dirtytalk}\n");
   fprintf(beamerFile, "\\usepackage[spanish]{babel}\n");
   fprintf(beamerFile, "\\usepackage[utf8]{inputenc}\n");


   fprintf(beamerFile, "\\usetheme{Warsaw}\n");
   fprintf(beamerFile, "\\usecolortheme{spruce}\n");
   fprintf(beamerFile, "\\setbeamercolor{normal text}{bg=white!80}\n");



   fprintf(beamerFile,"\\begin{document} \n");

   //TITULO

   fprintf(beamerFile, "\\title{\n");
   fprintf(beamerFile, "\\begin{Large}\n");
   fprintf(beamerFile, "TEC\n");
   fprintf(beamerFile, "\\end{Large}\n");
   fprintf(beamerFile, "\\newline\n");
   fprintf(beamerFile, "\\begin{Large}\n");
   fprintf(beamerFile, "\\\\Compiladores e Int\\'erpretes\n");
   fprintf(beamerFile, "\\\\Proyecto \\#3: Analizador Sint\\'actico\n");
   fprintf(beamerFile, "\\\\Profesor: Francisco Torres\n");
   fprintf(beamerFile, "\\end{Large}\n");
   fprintf(beamerFile, "}\n");
   fprintf(beamerFile, "\\author{Dennisse Rojas Casanova\n");
   fprintf(beamerFile, "\\\\Treicy S\\'anchez Guti\\'errez}\n");
   fprintf(beamerFile, "\\date{\\today}\n");
   fprintf(beamerFile,"\\maketitle \n");



   //Parser Y Bison
   fprintf(beamerFile,"\\begin{frame} \n");
   fprintf(beamerFile, "\\begin{center}\n");
   fprintf(beamerFile,"\\frametitle{An\\'alisis Sint\\'actico} \n");
   fprintf(beamerFile,"El analizador Sint\\'actico revisa que la sint\\'axis de un porgrama este correcta, tomando la secuencia de tokens ");
   fprintf(beamerFile,"y verificando que sean construcciones v\\'alidas con ayuda de una gram\\'atica");
   fprintf(beamerFile, "\\end{center}\n");
   fprintf(beamerFile,"\\end{frame} \n");

   fprintf(beamerFile,"\\begin{frame} \n");
   fprintf(beamerFile, "\\begin{center}\n");
   fprintf(beamerFile,"\\frametitle{Bison} \n");
   fprintf(beamerFile,"Bison toma la gram\\'atica que especificas y escribe un Parser que reconozca sentencias ");
   fprintf(beamerFile,"v\\'alidas en esa gram\\'atica");
   fprintf(beamerFile, "\\end{center}\n");
   fprintf(beamerFile,"\\end{frame} \n");

  //Codigo Funte

   fprintf(beamerFile,"\\begin{frame} \n");


   finalFile= fopen("fuenteLatex.txt", "r");

   do
    {
      if(slide_lines == 12) {
      fprintf(beamerFile, "\\end{frame}\n");
      fprintf(beamerFile, "\\begin{frame}\n");
      slide_lines = 0;
      }

       c = fgetc(finalFile);
       if( feof(finalFile) )
       {
          break ;
       }
       else if(c == '\n'){
         fprintf(beamerFile,"\n");
         slide_lines++;

       }
       else if(c == '"'){
         fprintf(beamerFile,"\\textcolor{%s}{%s}\n", "PineGreen" ,"'\\hspace{0pt}'");
         slide_lines++;

       }
       else if(c == '<'){
         if(fgetc(finalFile) == '='){
           fprintf(beamerFile, "\\textcolor{%s}{%s}\n", "PineGreen", "\\textless =");
           c = fgetc(finalFile);
           }
         else{
         fprintf(beamerFile, "\\textcolor{%s}{%s}\n", "PineGreen", "\\textless");}

       }

       else if(c == '>'){
         if(fgetc(finalFile) == '='){
           fprintf(beamerFile, "\\textcolor{%s}{%s}\n", "PineGreen", "\\textgreater =");
           c = fgetc(finalFile);
           }
         else{
           fprintf(beamerFile, "\\textcolor{%s}{%s}\n", "PineGreen", "\\textgreater ");}

       }

       else if(c == '='){


         fprintf(beamerFile, "\\textcolor{%s}{%c}\n", "PineGreen", c);
       }

       else if(c == '_'){
         fprintf(beamerFile, "\\textcolor{%s}{%s}\n", "PineGreen", "\\textunderscore");
       }
       else if(c == '{'){
         fprintf(beamerFile, "\\textcolor{%s}{$%s$}\n", "PineGreen", "\\{");
       }
       else if(c == '}'){
         fprintf(beamerFile, "\\textcolor{%s}{$%s$}\n", "PineGreen", "\\}");
       }
       else if(c == ' '){
         fprintf(beamerFile, "\\textcolor{%s}{\\ }\n", "White");

       }

       else if(c == '\t'){
         fprintf(beamerFile, "\\textcolor{%s}{\\%s }\n", "White", "qquad " );

       }
       else if(c == '~'){
         fprintf(beamerFile, "\\textcolor{%s}{%s}\n", "PineGreen", "\\textasciitilde");
       }
       else if(c == '&'){
         fprintf(beamerFile, "\\textcolor{%s}{%s}\n", "PineGreen", "\\&");
       }
       else if (c == '^'){
         fprintf(beamerFile, "\\textcolor{%s}{%s}\n", "Red", "\\textasciicircum");
         while((c = fgetc(finalFile)) != ','){
           fprintf(beamerFile, "\\textcolor{%s}{%c}\n", "Red", c);
         }
       }
       else if(c == '%'){
         fprintf(beamerFile, "\\textcolor{%s}{%s}\n", "PineGreen", "\\%");
       }
       else if(c == '\\'){
         fprintf(beamerFile, "\\textcolor{%s}{%s }\n", "PineGreen", "\\textbackslash");

       }
       else{

       fprintf(beamerFile, "\\textcolor{%s}{%c}\n", "PineGreen", c);
     }
    }while(1);


   fclose(finalFile);


   fprintf(beamerFile,"\\end{frame} \n");




   //Final del documento
   fprintf(beamerFile,"\\end{document}");
   fclose(beamerFile);
  //system("pdflatex beamerFile.tex");
  // system("evince beamerFile.pdf");

}

void parseFile(FILE *filename){
		yyin = filename;
		yyparse();


}

void parse(FILE *filename,int type) {

	if (type == 0){
		//si me indican -B
		beamerParseFile(filename);

		//exit(0);
	}
  else{
    parseFile(filename);
  }



}
