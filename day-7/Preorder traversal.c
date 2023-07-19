#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* left;
    struct node* right;
};
struct node* newnode(int data)
{
    struct node* node= (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
void Preorder(struct node* node)
{
    if (node == NULL)
        return;
    printf("%d ", node->data);
    Preorder(node->left);
    Preorder(node->right);
}
int main()
{
    struct node* root = newnode(21);
    root->left = newnode(25);
    root->right = newnode(36);
    root->left->left = newnode(45);
    root->left->right = newnode(5);
    printf("Preorder traversal of binary tree is \n");
    printPreorder(root);
    getchar();
    return 0;
}
