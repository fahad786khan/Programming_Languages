#include <stdio.h>
/*
Rhombos full pyramind star pattern
              *
            * * *
          * * * * *
        * * * * * * *
      * * * * * * * * *
    * * * * * * * * * * *
  * * * * * * * * * * * * *
    * * * * * * * * * * *
      * * * * * * * * *
        * * * * * * *
          * * * * *
            * * *
              *
*/
void main()
{
    int row, col, n, space;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    for (row = 1; row <= n - 1; row++) // use row<=n-1
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
    } // just combine two pyramids
    for (row = n; row >= 1; row--)
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
