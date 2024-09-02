// Write a program to find the average of all elements in a 2D array using a function.

#include <stdio.h>

void main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;
    int count = 0;
    int i, j;
    float avg;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum += arr[i][j];
            count++;
        }

    }
    avg = (float)sum / count;
    printf("Average of all elements in the 2D array is: %.2f\n", avg);
}