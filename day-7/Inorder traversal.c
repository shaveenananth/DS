#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node* left;
	struct node* right;
};
struct node* newnode(int data)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
void Inorder(struct node* node)
{
	if (node == NULL)
		return;
	Inorder(node->left);
	printf("%d ", node->data);
	Inorder(node->right);
}
int main()
{
	struct node* root = newnode(10);
	root->left = newnode(24);
	root->right = newnode(30);
	root->left->left = newnode(44);
	root->left->right = newnode(56);
	printf("Inorder traversal of binary tree is \n");
    Inorder(root);
	getchar();
	return 0;
}
