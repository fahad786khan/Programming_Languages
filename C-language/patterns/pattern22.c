#include <stdio.h>
/*
Hourglass Pattern
 * * * * * * * * *
   * * * * * * *
     * * * * *
       * * *
         *
       * * *
     * * * * *
   * * * * * * *
 * * * * * * * * *
 */
void main()
{
    int row, col, n, space;
    printf("enter the number n: ");
    scanf("%d", &n);
    for (row = n; row > 1; row--) // use row > 1
    {
        for (space = 1; space <= n - row; space++)
        {
            printf("  ");
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            printf("* ");
        }
        printf("\n");
    }                              // another combined
    for (row = 1; row <= n; row++) // use row<=n
    {
        for (space = 1; space <= n - row; space++)
        {
            printf("  ");
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}