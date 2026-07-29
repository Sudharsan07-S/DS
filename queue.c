#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int x)
{
    if (front == -1)
        front = 0;
    queue[++rear] = x;
}

int dequeue()
{
    int val = queue[front];
    if (front == rear)
        front = rear = -1; 
    else
        front++;
    return val;
}

void view()
{
    int i;
    if (front == -1)
    {
        printf("\nQueue Empty\n");
        
    }
    else
    {
        printf("\nFront --> ");
        for (i = front; i <= rear; i++)
        {
            printf("%4d", queue[i]);
        }
        printf("  <-- Rear\n");
    }
}

int main()
{
    int ch = 0, val;
    while (ch != 4)
    {
        printf("\n== QUEUE OPERATIONS ==\n");
        printf("1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. VIEW\n");
        printf("4. QUIT\n");
        printf("Enter Choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (rear < MAX - 1)
            {
                printf("Enter Queue element: ");
                scanf("%d", &val);
                enqueue(val);
            }
            else
            {
                printf("Queue Overflow\n");
            }
            break;
        case 2:
            if (front == -1)
            {
                printf("Queue Underflow\n");
            }
            else
            {
                val = dequeue();
                printf("Dequeued element is %d\n", val);
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