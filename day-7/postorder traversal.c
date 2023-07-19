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
void Postorder(struct node* node)
{
    if (node == NULL)
        return;
    Postorder(node->left);
    Postorder(node->right);
    printf("%d ", node->data);
}
int main()
{
    struct node* root = newnode(12);
    root->left = newnode(24);
    root->right = newnode(31);
    root->left->left = newnode(14);
    root->left->right = newnode(35);
    printf("Postorder traversal of binary tree is \n");
    Postorder(root);
    getchar();
    return 0;
}
