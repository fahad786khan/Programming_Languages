#include <stdio.h>
/*
Inverted full pascal's triangle star pattern
* * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
 */
void main()
{
    int row, col, n, space;
    printf("Enter the number of lines(n): ");
    scanf("%d", &n);
    for (row = n; row >= 1; row--)
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