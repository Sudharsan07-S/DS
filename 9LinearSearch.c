#include <stdio.h>
#include <conio.h>

void main()
{
    int a[10], n, i, key, found = 0;

    clrscr();

    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    if(n <= 0 || n > 10)
    {
        printf("Invalid number of elements!");
        getch();
        return;
    }

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter key: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("Found at index %d", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Not found");
    }

    getch();
}