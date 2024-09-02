// // Que-1 implement a C program to find an average and a grade of a student. Consider 5 subjects.
//    Assign out of 100 marks for each subject. use conditions for evaluate grades based on average value.

#include<stdio.h>

void main()
{
    int marks[5];
    float average;
    int i;
    float sum = 0.0;
    printf("Enter marks of 5 subjects:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter marks of subject %d: ", i + 1); 
        scanf("%d", &marks[i]);
        sum = sum + marks[i];
    }
    average = sum / 5.0;
    printf("Average marks = %.2f\n", average);
    if (average >= 90)
    {
        printf("Grade = A\n");
    }
    else if (average >= 80 && average < 90)
    {
        printf("Grade = B\n");
    }
    else if (average >= 70 && average < 80)
    {
        printf("Grade = C\n");
    }
    else if (average >= 60 && average < 70)
    {
        printf("Grade = D\n");
    }
    else{
        printf("Grade = F\n");
    }
}
