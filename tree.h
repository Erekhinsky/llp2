#ifndef LLP2_TREE_H
#define LLP2_TREE_H

#include <stdint.h>
#include <stdbool.h>

typedef enum type_node {
    KEY_NODE,
    INT_VAL_NODE,
    DOUBLE_VAL_NODE,
    BOOL_VAL_NODE,
    STR_VAL_NODE,

    OP_EQ_NODE,
    OP_NEQ_NODE,
    OP_GT_NODE,
    OP_GTE_NODE,
    OP_LE_NODE,
    OP_LEE_NODE,
    OP_LIKE_NODE,
    OP_AND_NODE,
    OP_OR_NODE,
    OP_NOT_NODE,

    QUERY_SET_NODE,
    OBJECT_NODE,
    VALUES_NODE,
    ELEMENT_SET_NODE,
    ELEMENT_NODE,
    FILTER_NODE,

    SELECT_QUERY_NODE,
    INSERT_QUERY_NODE,
    UPDATE_QUERY_NODE,
    DELETE_QUERY_NODE,
    NESTED_QUERY_NODE,

} type_node;

typedef struct ast_node ast_node;

typedef struct ast_node {
    type_node type;
    ast_node* left;
    ast_node* right;
    union {
        int32_t int_val;
        double double_val;
        bool bool_val;
        char* str_val;
    };
} ast_node;

ast_node* create_node();

ast_node* create_node_with_int_value(int32_t int_val);

ast_node* create_node_with_double_value(double double_val);

ast_node* create_node_with_boolean_value(bool bool_val);

ast_node* create_node_with_string_value(char* str_val);

ast_node* create_node_key(char* key);

#endif //LLP2_TREE_H

