#include <stdio.h>
#include <string.h> /* memset */
#include <stdlib.h>
#include "prep_preprocessor.h"
#include "global.h"


int main( int argc, char *argv[] )
{

  strcpy(specialCommand, "-B");
	char filename [100]="";
	printf( "Ingrese el archivo: ");
	scanf("%s",filename);

  if (strcmp(filename,specialCommand)==0){

    char filename [100]="";
    printf( "Ingrese el archivo para Beamer: ");
    scanf("%s",filename);

    readFile(filename);
    FILE *prep_file = fopen("processedFile.txt", "r");
    parse(prep_file, 0);
    fclose(prep_file);
    exit(0);
  }

  readFile(filename);
  FILE *prep_file = fopen("processedFile.txt", "r");
  parse(prep_file, 1);
  fclose(prep_file);

}
