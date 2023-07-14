//Deletion of all nodes in an singlylinked list
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;          
    struct node *next; 
}*head;
void create(int n)
{
    {
    struct node *newNode, *temp;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
         printf("Enter the value of node1:");
        scanf("%d", &data);
        head->data = data; 
        head->next = NULL;
        temp=head;
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
             if(newNode == NULL)
            {
                printf("Empty list\n");
                break;
            }
            else
            {
                printf("Enter the value of node%d: ", i);
                scanf("%d", &data);
                newNode->data = data; 
                newNode->next = NULL; 
                temp->next = newNode; 
                temp = temp->next;
            }
        }
     printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");
    }
}

}
void delete()
{
    struct node *temp;
    while(head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    printf("SUCCESSFULLY DELETED ALL NODES OF LINKED LIST\n");
}
void display()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Element = %d\n", temp->data); 
            temp = temp->next;                 
        }
    }
}
int main()
{
    int n, ch;
    printf("Enter no of nodes:");
    scanf("%d", &n);
    create(n);
    printf("\nElements in the list\n");
    display();
    printf("\nTo delete entire linked list press 1");
    scanf("%d", &ch);
    delete();
    printf("Elements in the list\n");
    display();
    return 0;
}
