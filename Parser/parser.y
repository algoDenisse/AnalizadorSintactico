/* Parser para C. */

%{
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
%}

/* BISON Declarations */
%token INT VOID
%token WHILE
%token IFSYS ELSESYS SWITCH CASE BREAK DEFAULT
%token NUMBER ID
%token INCLUDE
%right ASSIGN
%left OR
%left AND
%left BITOR
%left ROOF
%left BITAND
%left EQUAL NOTEQUAL
%left LEQ GEQ LESS GREATER
%left PLUS MINUS
%left MUL DIV
%left TAIL

/* Grammar follows */
%%

%%
/*C code */
