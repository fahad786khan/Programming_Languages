#include <stdio.h>
/*
Hollow Diamond Pattern
        *
      *   *
    *       *
  *           *
*               *
  *           *
    *       *
      *   *
        *
 */
void main()
{
    int row, col, space, n;
    printf("enter number of lines(n): ");
    scanf("%d", &n);
    for (row = 1; row <= n - 1; row++) // use row<=n-1
    {
        for (space = 1; space <= n - row; space++)
        {
            printf("  ");
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            if (col == 1 || col == 2 * row || col == 2 * row - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    } // just combine two pyramids
    for (row = n; row >= 1; row--)
    {
        for (space = 1; space <= n - row; space++)
        {
            printf("  ");
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            if (col == 1 || col == 2 * row || col == 2 * row - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}
