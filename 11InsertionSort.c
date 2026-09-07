#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10], n, i, j, key;
    clrscr();
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);


    getch();
    return 0;
}
