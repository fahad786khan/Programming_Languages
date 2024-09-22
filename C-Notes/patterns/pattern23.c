#include <stdio.h>
/*
Hollow Inverted Full Pyramid Pattern
* * * * * * * * *
  *           *
    *       *
      *   *
        *
*/
void main()
{
    int row, col, n, space;
    printf("enter the number n: ");
    scanf("%d", &n);
    // print the first row
    for (row = 0; row <= 2 * n; row++)
    {
        printf("* ");
    }
    printf("\n");
    for (row = n; row >= 1; row--)
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
}
