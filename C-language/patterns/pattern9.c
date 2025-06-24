#include <stdio.h>
/*
full pascal's triangle star pattern
     *
    * *
   * * *
  * * * *
 * * * * *
* * * * * *
 */
void main()
{
    int row, col, n, space;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (space = 1; space <= n - row; space++)
        {
            printf(" ");
        }
        for (col = 1; col <= row; col++)
        {
            printf("* ");
        }

        printf("\n");
    }
}