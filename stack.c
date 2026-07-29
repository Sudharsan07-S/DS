#include <stdio.h>
#include<stdlib.h>
#define MAX 5

int stack[MAX];
int top = -1;
void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}
 void view()
{
    int i;
    if (top < 0)
    {
        printf("\nStack Empty\n");
    }
    else
{
        printf("\nTop --> ");
        for (i = top; i >= 0; i--)
        {
            printf("%4d", stack[i]);
        }
        printf("\n");
    }
}
 
 int main ()
   {
    int ch = 0, val;

    while (ch != 4)
	{
	     printf("\n===== STACK OPERATIONS =====\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. VIEW\n");
        printf("4. QUIT\n");
        printf("Enter Choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            if (top < MAX - 1)
            {
                printf("Enter Stack element: ");
                scanf("%d", &val);
                push(val);
            }
            else
            {
                printf("Stack Overflow\n");
            }
            break;

        case 2:
            if (top < 0)
            {
                printf("Stack Underflow\n");
            }
            else
            {
                val = pop();
                printf("Popped element is %d\n", val);
            }
            break;

        case 3:
            view();
            break;

        case 4:
            printf("Program Exited.\n");
            exit(0);

        default:
            printf("Invalid Choice\n");
        }
    }

    return 0;
}
