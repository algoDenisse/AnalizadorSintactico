int main( int argc, char *argv[] )
{

  strcpy(specialCommand, "-B");
	char filename [100]="";
	printf( "Ingrese el archivo: ");
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
    exit(0);
  }

  readFile(filename);
  FILE *prep_file = fopen("processedFile.txt", "r");
  parse(prep_file, 1);
  fclose(prep_file);

}
