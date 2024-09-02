// Write a c program that defines a function to print only odd elements from 1D array elements.

#include <stdio.h>

void main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    printf("Odd elements from array are:\n");
    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
}
