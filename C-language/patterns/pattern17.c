#include <stdio.h>
/*
Cross star pattern
*     *
 *   *
  * *
   *
  * *
 *   *
*     *
 */
void main()
{
    int row, col, n;
    printf("enter number of lines(n): ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            // middle number of an odd series is (n/2)+1
            if (col == row || row + col == n + 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}