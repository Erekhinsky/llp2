#include <malloc.h>
#include <stdio.h>

#include "tree.h"

ast_node* create_node() {
    ast_node* node = malloc(sizeof(ast_node));
    if (node) {
        *node = (ast_node) {0};
        return node;
    }
    return NULL;
}

ast_node* create_node_with_int_value(int32_t int_val) {
    ast_node* node = create_node();
    if (node) {
        node->type = INT_VAL_NODE;
        node->int_val = int_val;
    }
    return node;
}

ast_node* create_node_with_double_value(double double_val) {
    ast_node* node = create_node();
    if (node) {
        node->type = DOUBLE_VAL_NODE;
        node->double_val = double_val;
    }
    return node;
}

ast_node* create_node_with_boolean_value(bool bool_val) {
    ast_node* node = create_node();
    if (node) {
        node->type = BOOL_VAL_NODE;
        node->bool_val = bool_val;
    }
    return node;
}

ast_node* create_node_with_string_value(char* str_val) {
    ast_node* node = create_node();
    if (node) {
        node->type = STR_VAL_NODE;
        node->str_val = str_val;
    }
    return node;
}

ast_node* create_node_key(char* key) {
    ast_node* node = create_node();
    if (node) {
        node->type = KEY_NODE;
        node->str_val = key;
    }
    return node;
}
