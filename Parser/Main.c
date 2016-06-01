#include <stdio.h>
#include <string.h> /* memset */
#include <stdlib.h>
#include "prep_preprocessor.h"
#include "parser.c"


int main( int argc, char *argv[] )
{
  readFile();
  //clear_token_buffer();
  scanFile();
  //createBeamer();


}
