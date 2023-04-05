all: main

clean:
	rm -rf parser.tab.c parser.tab.h parser.output lex.yy.c main debug

parser: parser.y
	bison -d parser.y

parser_debug: parser.y
	bison -d --verbose --debug parser.y

lexer: lexer.l
	flex lexer.l

main: parser lexer tree.c main.c
	gcc parser.tab.c lex.yy.c tree.c main.c -o main

debug: parser_debug lexer tree.c main.c
	gcc parser.tab.c lex.yy.c tree.c main.c -o debug

.PHONY: all clean parser parser_debug lexer