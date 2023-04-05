all: main

clean:
	rm -rf lex.yy.c

lexer: lexer.l
	flex lexer.l

.PHONY: all clean lexer