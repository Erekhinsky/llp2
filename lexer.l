%option yylineno noyywrap nounput noinput

%{
#include <stdio.h>
#include <stdbool.h>

#include "tree.h"
#include "parser.tab.h"
%}

%%
[+-]?[0-9]+               {yylval.int_val = atoi(yytext); return INT; }
[+-]?[0-9]*\.[0-9]*       {yylval.double_val = atof(yytext); return DOUBLE; }
\"[^\"]*\"                {yylval.str_val = strdup(yytext); return STRING; }
[A-Za-z_][A-Za-z0-9_]*    {yylval.str_val = strdup(yytext); return NAME; }
true                      {yylval.bool_val = true; return BOOL; }
false                     {yylval.bool_val = false; return BOOL; }
\(                        {return L_PARENTHESIS; }
\)                        {return R_PARENTHESIS; }
\{                        {return L_BRACE; }
\}                        {return R_BRACE; }
\[                        {return L_BRACKET; }
\]                        {return R_BRACKET; }
,                         {return COMMA; }
:                         {return COLON; }
eq                        {yylval.op_type = OP_EQ_NODE; return COMPARE_OP; }
neq                       {yylval.op_type = OP_NEQ_NODE; return COMPARE_OP; }
gt                        {yylval.op_type = OP_GT_NODE; return COMPARE_OP; }
gte                       {yylval.op_type = OP_GTE_NODE; return COMPARE_OP; }
le                        {yylval.op_type = OP_LE_NODE; return COMPARE_OP; }
lee                       {yylval.op_type = OP_LEE_NODE; return COMPARE_OP; }
like                      {yylval.op_type = OP_LIKE_NODE; return LIKE_OP; }
and                       {yylval.op_type = OP_AND_NODE; return LOGICAL_BOP; }
or                        {yylval.op_type = OP_OR_NODE; return LOGICAL_BOP; }
not                       {yylval.op_type = OP_NOT_NODE; return LOGICAL_UOP; }
select                    {return SELECT; }
insert                    {return INSERT; }
update                    {return UPDATE; }
delete                    {return DELETE; }
values                    {return VALUES; }
filter                    {return FILTER; }
\n                        {/* Считываем перенос строки, чтобы работал yylineno */ }
.                         {/* Игнорируем всё остальное */ }
%%