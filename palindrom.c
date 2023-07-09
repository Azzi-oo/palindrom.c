#include <stdio.h>
#include "bst.h"

void bst_insert_test();

int main() {
    bst_insert_test();
}

void bst_insert_test() {
    TreeNode* temp1 = bstree_create_node(45);
    printf("Создание нового узла со значением 45\n");
    printf("temp1->data = %d\n", temp1->data);
    if (temp1->data == 45)
        printf("SUCCESS\n");
    else
        printf("FAIL\n");

    bstree_insert(&temp1, 12, compare);
    printf("Новый узел должен быть слева со значением 12\n");
    printf("temp1->left->data = %d\n", temp1->left->data);
    if (temp1->left->data == 12)
        printf("SUCCESS\n");
    else
        printf("FAIL\n");

    bstree_insert(&temp1, 6, compare);
    printf("Новый узел должен быть слева слева со значением 6\n");
    printf("temp1->left->left->data = %d\n", temp1->left->left->data);
    if (temp1->left->left->data == 6)
        printf("SUCCESS\n");
    else
        printf("FAIL\n");

    bstree_insert(&temp1, 50, compare);
    printf("Новый узел должен быть справа со значением 50\n");
    printf("temp1->right->data = %d\n", temp1->right->data);
    if (temp1->right->data == 50)
        printf("SUCCESS\n");
    else
        printf("FAIL\n");
}
