// Write a program to find even elements from an 1D array using Pointer.

#include <stdio.h>

void main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;
    int i;
    printf("Elements of the array are:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\nEven elements of the array are:\n");
    for (i = 0; i < 10; i++)
    {
        if (*(ptr + i) % 2 == 0)
            printf("%d ", *(ptr + i));
    }
}