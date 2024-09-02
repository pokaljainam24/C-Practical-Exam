// print a bellow pattern using nested for loop in C language.

//         10
//       9 10
//     8 9 10
//   7 8 9 10
// 6 7 8 9 10

#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }

        for (int k = 10 - i + 1; k <= 10; k++)
        {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}
