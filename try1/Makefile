all: ejecutableDenisse

ejecutableDenisse:
	bison  -o parser.tab.c -vd  parser.y
	gcc -o parser parser.tab.c -lm -ll
