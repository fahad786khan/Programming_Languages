#include <stdio.h>
/*
hollow hourglass pattern
* * * * * * * * * * *
  *               *
    *           *
      *       *
        *   *
          *
        *   *
      *       *
    *           *
  *               *
* * * * * * * * * * *
 */

void printTopBottomRow();

void main()
{
    int row, col, space, n;
    printf("enter number of lines(n): ");
    scanf("%d", &n);
    // top line
    printTopBottomRow(n);
    for (row = n; row > 1; row--) // use row > 1
    {
        for (space = 0; space <= n - row; space++)
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
    }                              // combined two pyramids
    for (row = 1; row <= n; row++) // use row<=n
    {
        for (space = 0; space <= n - row; space++)
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
    // bottom line
    printTopBottomRow(n);
}

void printTopBottomRow(int n)
{
    for (int row = 0; row <= 2 * n; row++)
    {
        printf("* ");
    }
    printf("\n");
}