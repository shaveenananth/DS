#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int top =-1, arr[SIZE];
void push();
void pop();
void display();
int main()
{
    int ch;
    while(1)
    {
        printf("\nSTACK OPERATIONS");
        printf("\n1.Push the element\n2.Pop the element\n3.Display the elements\n4.Quit");
        printf("\n\nEnter the choice:");
        scanf("%d", &ch);
        switch(ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid choice!");
        }
    }
}
void push()
{
    int x;
    if (top==SIZE-1)
    {
        printf("\nStack overflow!");
    }
    else
    {
        printf("\nEnter the element to be added into the stack: ");
        scanf("%d",&x);
        top=top+1;
        arr[top]=x;
    }
}
void pop()
{
    if (top==-1)
    {
        printf("\nStack Underflow!");
    }
    else
    {
        printf("\nPopped element: %d", arr[top]);
        top=top-1;
    }
}
void display()
{
    if (top==-1)
    {
        printf("\nStack Underflow!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i=top;i >= 0;--i)
            printf("%d\n", arr[i]);
    }
}
