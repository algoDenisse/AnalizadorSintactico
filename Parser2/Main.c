#include <stdio.h>
#include <string.h> /* memset */
#include <stdlib.h>
#include "prep_preprocessor.h"
#include "global.h"


int main( int argc, char *argv[] )
{

  strcpy(specialCommand, "-B");
	char filename [100]="";
	printf( "Ingrese el archivo o '-B' para crear presentacion Beamer: ");
	scanf("%s",filename);

  if (strcmp(filename,specialCommand)==0){
    //Indica comando -B

    char filename [100]="";
    printf( "Ingrese el archivo para Beamer: ");
    scanf("%s",filename);

    readFile(filename);
    FILE *prep_file = fopen("processedFile.txt", "r");
    parse(prep_file, 0);
    //Empieza a leer FuenteLatex.txt
    fclose(prep_file);
    //system("pdflatex beamerFile.tex");
    ///system("evince beamerFile.pdf");
    exit(0);
  }

  readFile(filename);
  FILE *prep_file = fopen("processedFile.txt", "r");
  parse(prep_file, 1);
  fclose(prep_file);

}
