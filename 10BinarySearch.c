#include <stdio.h> 
#include <conio.h>

int main() 
{ 
    int a[10], n, i, key, low, high, mid; 
 	clrscr();
    printf("Enter n: "); 
    scanf("%d", &n); 
 
    printf("Enter sorted elements:\n"); 
    for(i = 0; i < n; i++) 
        scanf("%d", &a[i]); 
 
    printf("Enter key: "); 
    scanf("%d", &key); 
 
    low = 0; 
    high = n - 1; 
 
    while(low <= high)
	 { 
        mid = (low + high) / 2; 
 
        if(a[mid] == key) 
        { 
            printf("Found at index %d\n", mid); 
            break; 
        } 
        else if(key > a[mid]) 
        { 
            low = mid + 1; 
        } 
        else 
        { 
            high = mid - 1; 
        } 
    } 
 
    if(low > high) 
    {
        printf("Not found\n");
	} 
	getch();
	return 0; 
}