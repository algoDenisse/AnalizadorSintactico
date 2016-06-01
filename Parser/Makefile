all: ejecutableDenisse

ejecutableDenisse:

	flex --prefix=pprc pprc_preprocessor.l
	bison --defines=parser.h --output=parser.c parser.y
	flex scanner.l
	gcc -g -o Main Main.c prep_preprocessor.c prep_scanner.c parser.c -lfl
