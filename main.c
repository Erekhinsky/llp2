#include "tree.h"
#include "parser.tab.h"

int main() {
    yyparse();
    return 0;
}
