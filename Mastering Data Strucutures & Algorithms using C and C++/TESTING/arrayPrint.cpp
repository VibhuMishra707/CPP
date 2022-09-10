#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of an array ");
    scanf("%d", &n);
    printf("The size of an array is %d", n);
    int array[n];
    for (int i=0; i<n; ++i) {
        array[i] = ++i;					// Garbage value assigned
    }
    printf("\nArray is ");
    for (int i=0; i<n; ++i) {
        printf("%d ",array[i]);
    }
    return 0;
}
