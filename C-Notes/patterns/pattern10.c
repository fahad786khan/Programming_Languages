#include <stdio.h>
/*
full Inverted pyramid star pattern
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
    printf("Enter the number of lines(n): ");
    scanf("%d", &n);
    for (row = n; row >= 1; row--)
    {
        for (space = 0; space <= n - row; space++)
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