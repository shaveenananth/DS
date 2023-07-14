#include <stdio.h>
#include <stdlib.h>
struct node 
{
	int data;
	struct node* next;
};

void push(struct node** head, int data)
{
  struct node* temp= (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->next = (*head);
	*head= temp;
}

int count(struct node* head)
{
	int count = 0; 
	struct node* current = head;
	while (current != NULL) 
  {
		count++;
		current = current->next;
	}
	return count;
}

int main()
{
  printf("Count of nodes");
	struct node* head =(struct node*) malloc(sizeof(struct node));
	head->data=6;
	head->next=NULL;

	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);
	printf("\n The elements are");
	struct node *temp=head;
    while(temp!=NULL)
    {
        printf("\n %d",temp->data);
        temp=temp->next;
    }

	printf("\n Total number of nodes are %d", count(head));

	return 0;
}
