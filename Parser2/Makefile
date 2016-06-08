all: ejecutableDenisse

ejecutableDenisse:
	flex --prefix=pprc pprc_preprocessor.l
	bison -d parser.y
	flex scanner.l
	gcc -o  Main Main.c prep_preprocessor.c parser.tab.c prep_scanner.c   -lfl
	./Main
	# pdflatex beamerFile.tex
	# evince --fullscreen beamerFile.pdf
