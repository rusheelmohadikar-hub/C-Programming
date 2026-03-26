#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int top = -1, array[SIZE];
void push()
{
    int x;
    if (top == SIZE - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter the element to be added onto the stack: ");
        scanf("%d", &x);
        top = top + 1;
        array[top] = x;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("Popped element: %d\n", array[top]);
        top = top - 1;
    }
}
void show()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = top; i >= 0; --i)
            printf("%d\n", array[i]);
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("Enter 1.Push,2.PoP,3.Show,4.Exit: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid choice!!");
        }
    }
}

