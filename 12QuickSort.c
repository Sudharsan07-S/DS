#include <stdio.h>
#include <conio.h>

void quicksort(int a[], int low, int high)
{
    int i = low, j = high, pivot = a[low], temp;
    clrscr();

    if(low < high)
    {
        while(i < j)
        {
            while(a[i] <= pivot)
                i++;

            while(a[j] > pivot)
                j--;

            if(i < j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        a[low] = a[j];
        a[j] = pivot;

        quicksort(a, low, j - 1);
        quicksort(a, j + 1, high);
    }
}

int main()
{
    int a[10], n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    quicksort(a, 0, n - 1);

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
	
    getch();
    return 0;
}