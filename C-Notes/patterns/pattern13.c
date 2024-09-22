#include <stdio.h>
/*
 Hollow Full Pyramid Pattern
        *
      *   *
    *       *
  *           *
* * * * * * * * *
*/
void main()
{
    int row, col, n, space, k = 0;
    printf("Enter the number of lines(n): ");
    scanf("%d", &n);
    for (row = 0; row < n - 1; row++)
    {
        for (space = 1; space < n - row; space++)
        {
            printf("  ");
        }
        for (col = 0; col <= 2 * row; col++)
        {
            if (col == 0 || col == 2 * row)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    // use to print the last row
    for (row = 0; row < 2 * n - 1; row++)
    {
        printf("* ");
    }
}
