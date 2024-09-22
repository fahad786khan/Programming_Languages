#include <stdio.h>
/*
half rhombus right side star pattern
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*
 */
void main()
{
    int row, col, n;
    printf("enter the number of lines(n): ");
    scanf("%d", &n);
    for (row = 1; row < 2 * n; row++)
    {
        int maxCol = row > n ? 2 * n - row : row;
        for (col = 1; col <= maxCol; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

//? This also works
// void main()
// {
//     int row, col, n;
//     printf("enter the number of lines(n): ");
//     scanf("%d", &n);
//     for (row = 1; row <= n; row++)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     for (row = n - 1; row >= 1; row--)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }