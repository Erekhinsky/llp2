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

#define MAX_LENGTH 50
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
init: query { print_node($1, 0); delete_node($1); YYACCEPT; }

query: select { $$ = $1; }
     | insert { $$ = $1; }
     | update { $$ = $1; }
     | delete { $$ = $1; }

values: VALUES COLON L_BRACKET element R_BRACKET { $$ = create_node_values($4); }

element: L_BRACE key COLON value R_BRACE { $$ = create_node_set_element(create_node_element($2, $4)); }
       | element COMMA element { set_next_element_to_set($1, $3); $$ = $1; }

key: NAME { if(strlen($1) > MAX_LENGTH) { yyerror("key is too long"); YYABORT; } $$ = create_node_key($1); }

value: BOOL { $$ = create_node_with_boolean_value($1); }
     | INT { $$ = create_node_with_int_value($1); }
     | DOUBLE { $$ = create_node_with_double_value($1); }
     | STRING { $$ = create_node_with_string_value($1); }

filter: FILTER COLON operation { $$ = create_node_filter($3); }

operation: compare_op { $$ = $1; }
         | like_op { $$ = $1; }
         | logical_op { $$ = $1; }

compare_op: COMPARE_OP L_PARENTHESIS key COMMA value R_PARENTHESIS { $$ = create_node_operation($1, $3, $5); }
          | COMPARE_OP L_PARENTHESIS key COMMA key R_PARENTHESIS { $$ = create_node_operation($1, $3, $5); }

like_op: LIKE_OP L_PARENTHESIS key COMMA STRING R_PARENTHESIS { $$ = create_node_operation($1, $3, create_node_with_string_value($5)); }
       | LIKE_OP L_PARENTHESIS key COMMA key R_PARENTHESIS { $$ = create_node_operation($1, $3, $5); }

logical_op: LOGICAL_UOP L_PARENTHESIS operation R_PARENTHESIS { $$ = create_node_operation($1, $3, NULL); }
          | LOGICAL_BOP L_PARENTHESIS operation COMMA operation R_PARENTHESIS { $$ = create_node_operation($1, $3, $5); }

select: SELECT L_BRACE select_next R_BRACE { $$ = create_node_query(SELECT_QUERY_NODE, NULL, $3); }

insert: INSERT L_BRACE insert_or_select_next R_BRACE { $$ = create_node_query(INSERT_QUERY_NODE, NULL, $3); }

update: UPDATE L_BRACE update_next R_BRACE { $$ = create_node_query(UPDATE_QUERY_NODE, NULL, $3); }

delete: DELETE L_BRACE select_next R_BRACE { $$ = create_node_query(DELETE_QUERY_NODE, NULL, $3); }

select_next: select_object { $$ = create_node_set_query(create_node_query(NESTED_QUERY_NODE, $1, NULL)); }
           | select_object L_BRACE select_next R_BRACE { $$ = create_node_set_query(create_node_query(NESTED_QUERY_NODE, $1, $3)); }
           | select_next COMMA select_next { set_next_query_to_set($1, $3); $$ = $1; }

insert_or_select_next: insert_next %prec COMMA { $$ = $1; }
                     | select_object L_BRACE insert_or_select_next R_BRACE { $$ = create_node_set_query(create_node_query(NESTED_QUERY_NODE, $1, $3)); }
                     | insert_or_select_next COMMA insert_or_select_next { set_next_query_to_set($1, $3); $$ = $1; }

insert_next: mutate_object { $$ = create_node_set_query(create_node_query(NESTED_QUERY_NODE, $1, NULL)); }
           | mutate_object L_BRACE insert_next R_BRACE { $$ = create_node_set_query(create_node_query(NESTED_QUERY_NODE, $1, $3)); }
           | insert_next COMMA insert_next { set_next_query_to_set($1, $3); $$ = $1; }

update_next: mutate_object { $$ = create_node_set_query(create_node_query(NESTED_QUERY_NODE, $1, NULL)); }
           | mutate_object L_BRACE update_next R_BRACE { $$ = create_node_set_query(create_node_query(NESTED_QUERY_NODE, $1, $3)); }
           | select_object L_BRACE update_next R_BRACE { $$ = create_node_set_query(create_node_query(NESTED_QUERY_NODE, $1, $3)); }
           | update_next COMMA update_next { set_next_query_to_set($1, $3); $$ = $1; }

select_object: schema_name { $$ = create_node_object($1, NULL, NULL); }
             | schema_name L_PARENTHESIS filter R_PARENTHESIS { $$ = create_node_object($1, NULL, $3); }

mutate_object: schema_name L_PARENTHESIS values R_PARENTHESIS { $$ = create_node_object($1, $3, NULL); }
             | schema_name L_PARENTHESIS values COMMA filter R_PARENTHESIS { $$ = create_node_object($1, $3, $5); }

schema_name: NAME { if(strlen($1) > MAX_LENGTH) { yyerror("name of schema is too long"); YYABORT; } $$ = $1; }

%%