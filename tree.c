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

ast_node* create_node_element(ast_node* key_node, ast_node* val_node) {
    ast_node* node = create_node();
    if (node) {
        node->type = ELEMENT_NODE;
        node->left = key_node;
        node->right = val_node;
    }
    return node;
}

ast_node* create_node_set_element(ast_node* element_node) {
    ast_node* node = create_node();
    if (node) {
        node->type = ELEMENT_SET_NODE;
        node->left = element_node;
    }
    return node;
}

ast_node* create_node_values(ast_node* element_set_node) {
    ast_node* node = create_node();
    if (node) {
        node->type = VALUES_NODE;
        node->left = element_set_node;
    }
    return node;
}

ast_node* create_node_operation(type_node type, ast_node* left, ast_node* right) {
    ast_node* node = create_node();
    if (node) {
        node->type = type;
        node->left = left;
        node->right = right;
    }
    return node;
}

ast_node* create_node_filter(ast_node* operation_node) {
    ast_node* node = create_node();
    if (node) {
        node->type = FILTER_NODE;
        node->left = operation_node;
    }
    return node;
}

ast_node* create_node_object(char* schema_name, ast_node* values_node, ast_node* filter_node) {
    ast_node* node = create_node();
    if (node) {
        node->type = OBJECT_NODE;
        node->str_val = schema_name;
        node->left = values_node;
        node->right = filter_node;
    }
    return node;
}

ast_node* create_node_set_query(ast_node* query_node) {
    ast_node* node = create_node();
    if (node) {
        node->type = QUERY_SET_NODE;
        node->left = query_node;
    }
    return node;
}

ast_node* create_node_query(type_node type, ast_node* object_node, ast_node* query_set_node) {
    ast_node* node = create_node();
    if (node) {
        node->type = type;
        node->left = object_node;
        node->right = query_set_node;
    }
    return node;
}

void set_next_element_to_set(ast_node* element_set_node, ast_node* next_element_set_node) {
    if (element_set_node) {
        while (element_set_node->right) {
            element_set_node = element_set_node->right;
        }
        element_set_node->right = next_element_set_node;
    }
}

void set_next_query_to_set(ast_node* query_set_node, ast_node* next_query_set_node) {
    if (query_set_node) {
        while (query_set_node->right) {
            query_set_node = query_set_node->right;
        }
        query_set_node->right = next_query_set_node;
    }
}

void delete_node(ast_node* node) {
    if (node) {
        delete_node(node->left);
        delete_node(node->right);
        if ((node->type == STR_VAL_NODE || node->type == KEY_NODE || node->type == OBJECT_NODE) && node->str_val) {
            free(node->str_val);
        }
        free(node);
    }
}

void print_node_operation(ast_node* node, int32_t nesting_level) {
    if (node->right->type != KEY_NODE) {
        printf("%*s_key: ", nesting_level, "");
        print_node(node->left, nesting_level);
        printf("%*s_value:\n", nesting_level, "");
        print_node(node->right, nesting_level + 2);
    } else {
        printf("%*s_first_key: ", nesting_level, "");
        print_node(node->left, nesting_level);
        printf("%*s_second_key: ", nesting_level, "");
        print_node(node->right, nesting_level);
    }
}

void print_node(ast_node* node, int32_t nesting_level) {
    if (node) {
        switch (node->type) {
            case INT_VAL_NODE:
                printf("%*s_type_value: integer\n", nesting_level, "");
                printf("%*s_data: %d\n", nesting_level, "", node->int_val);
                break;
            case DOUBLE_VAL_NODE:
                printf("%*s_type_value: double\n", nesting_level, "");
                printf("%*s_data: %f\n", nesting_level, "", node->double_val);
                break;
            case BOOL_VAL_NODE:
                printf("%*s_type_value: boolean\n", nesting_level, "");
                printf("%*s_data: %s\n", nesting_level, "", node->bool_val ? "true" : "false");
                break;
            case STR_VAL_NODE:
                printf("%*s_type_value: string\n", nesting_level, "");
                printf("%*s_data: %s\n", nesting_level, "", node->str_val);
                break;

            case QUERY_SET_NODE:
                printf("\n");
                while (node) {
                    printf("%*s_query:\n", nesting_level, "");
                    print_node(node->left, nesting_level + 2);
                    node = node->right;
                }
                break;
            case OBJECT_NODE:
                printf("%*s_schema_name: %s\n", nesting_level, "", node->str_val);
                printf("%*s_create_values: ", nesting_level, "");
                print_node(node->left, nesting_level + 2);
                printf("%*s_filter: ", nesting_level, "");
                print_node(node->right, nesting_level + 2);
                break;
            case VALUES_NODE:
                printf("\n%*s_element_set:\n", nesting_level, "");
                print_node(node->left, nesting_level + 2);
                break;
            case ELEMENT_SET_NODE:
                while (node) {
                    printf("%*s_element:\n", nesting_level, "");
                    print_node(node->left, nesting_level + 2);
                    node = node->right;
                }
                break;
            case ELEMENT_NODE:
                printf("%*s_key: %s\n", nesting_level, "", node->left->str_val);
                printf("%*s_value:\n", nesting_level, "");
                print_node(node->right, nesting_level + 2);
                break;
            case KEY_NODE:
                printf("%s\n", node->str_val);
                break;
            case FILTER_NODE:
                printf("\n%*s_operation:\n", nesting_level, "");
                print_node(node->left, nesting_level + 2);
                break;

            case OP_EQ_NODE:
                printf("%*s_type_operation: equal\n", nesting_level, "");
                print_node_operation(node, nesting_level);
                break;
            case OP_NEQ_NODE:
                printf("%*s_type_operation: not_equal\n", nesting_level, "");
                print_node_operation(node, nesting_level);
                break;
            case OP_GT_NODE:
                printf("%*s_type_operation: greater\n", nesting_level, "");
                print_node_operation(node, nesting_level);
                break;
            case OP_GTE_NODE:
                printf("%*s_type_operation: greater_or_equal\n", nesting_level, "");
                print_node_operation(node, nesting_level);
                break;
            case OP_LE_NODE:
                printf("%*s_type_operation: less\n", nesting_level, "");
                print_node_operation(node, nesting_level);
                break;
            case OP_LEE_NODE:
                printf("%*s_type_operation: less_or_equal\n", nesting_level, "");
                print_node_operation(node, nesting_level);
                break;
            case OP_LIKE_NODE:
                printf("%*s_type_operation: like\n", nesting_level, "");
                print_node_operation(node, nesting_level);
                break;
            case OP_AND_NODE:
                printf("%*s_type_operation: and\n", nesting_level, "");
                printf("%*sOperation1:\n", nesting_level, "");
                print_node(node->left, nesting_level + 2);
                printf("%*sOperation2:\n", nesting_level, "");
                print_node(node->right, nesting_level + 2);
                break;
            case OP_OR_NODE:
                printf("%*s_type_operation: or\n", nesting_level, "");
                printf("%*sOperation1:\n", nesting_level, "");
                print_node(node->left, nesting_level + 2);
                printf("%*sOperation2:\n", nesting_level, "");
                print_node(node->right, nesting_level + 2);
                break;
            case OP_NOT_NODE:
                printf("%*s_type_operation: not\n", nesting_level, "");
                printf("%*sOperation:\n", nesting_level, "");
                print_node(node->left, nesting_level + 2);
                break;

            case SELECT_QUERY_NODE:
                printf("type_query: select\n");
                printf("query_set: ");
                print_node(node->right, nesting_level + 2);
                break;
            case INSERT_QUERY_NODE:
                printf("type_query: insert\n");
                printf("query_set: ");
                print_node(node->right, nesting_level + 2);
                break;
            case UPDATE_QUERY_NODE:
                printf("type_query: update\n");
                printf("query_set: ");
                print_node(node->right, nesting_level + 2);
                break;
            case DELETE_QUERY_NODE:
                printf("type_query: delete\n");
                printf("query_set: ");
                print_node(node->right, nesting_level + 2);
                break;
            case NESTED_QUERY_NODE:
                printf("%*s_object:\n", nesting_level, "");
                print_node(node->left, nesting_level + 2);
                printf("%*s_query_set: ", nesting_level, "");
                print_node(node->right, nesting_level + 2);
                break;
        }
    } else {
        printf("<undefined>\n");
    }
}
