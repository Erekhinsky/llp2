%{
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#include "tree.h"

extern int yylex();
extern int yylineno;

void yyerror(const char *msg) {
    fprintf(stderr, "Error on line %d: %s\n", yylineno, msg);
}

%}

%union {
    bool bool_val;
    int int_val;
    double double_val;
    char* str_val;
    ast_node* node;
    type_node op_type;
}

%token<bool_val> BOOL
%token<int_val> INT
%token<double_val> DOUBLE
%token<str_val> STRING
%token<str_val> NAME

%token L_PARENTHESIS
%token R_PARENTHESIS
%token L_BRACE
%token R_BRACE
%token L_BRACKET
%token R_BRACKET
%token COMMA
%token COLON

%token<op_type> COMPARE_OP
%token<op_type> LIKE_OP
%token<op_type> LOGICAL_BOP
%token<op_type> LOGICAL_UOP

%token SELECT
%token INSERT
%token UPDATE
%token DELETE
%token VALUES
%token FILTER
%token EXIT

%type<node> values
%type<node> element
%type<node> key
%type<node> value
%type<node> filter
%type<node> operation

%type<node> compare_op
%type<node> like_op
%type<node> logical_op

%type<node> query
%type<node> select
%type<node> insert
%type<node> update
%type<node> delete

%type<node> select_next
%type<node> insert_or_select_next
%type<node> insert_next
%type<node> update_next
%type<node> select_object
%type<node> mutate_object

%type<str_val> schema_name

%left COMMA

%%

value: BOOL { $$ = create_node_with_boolean_value($1); }
     | INT { $$ = create_node_with_int_value($1); }
     | DOUBLE { $$ = create_node_with_double_value($1); }
     | STRING { $$ = create_node_with_string_value($1); }

%%