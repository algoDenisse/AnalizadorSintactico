all: ejecutableDenisse

ejecutableDenisse:

	# flex --prefix=pprc pprc_preprocessor.l
	# flex scanner.l
	# gcc -g -o Main Main.c prep_preprocessor.c prep_scanner.c  -lfl
	# bison -d parser.y
	# gcc -o parser parser.tab.c -lm
	bison -d parser.y
	flex scanner.l
	gcc -o parser parser.tab.c  prep_scanner.c  -lfl
