#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node* next;
};

static void reverse(struct node**ptr)
{
	struct node* prev = NULL;
	struct node* current = *ptr;
	struct node* next = NULL;
	while (current != NULL) {
		next = current->next;
	    current->next = prev;
        prev = current;
		current = next;
	}
	*ptr = prev;
}
void push(struct node** ptr, int data)
{
	struct node* new_node= (struct node*)malloc(sizeof(struct node));
	new_node->data = data;
	new_node->next = (*ptr);
	(*ptr) = new_node;
}
void printList(struct node* head)
{
	struct node* temp = head;
	while (temp != NULL)
  {
		printf("%d ", temp->data);
		temp = temp->next;
	}
}
int main()
{
	struct node* head = NULL;
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
  push(&head,1);
	printf("Given linked list\n");
	printList(head);
	reverse(&head);
	printf("\nReversed linked list \n");
	printList(head);
	getchar();
}
