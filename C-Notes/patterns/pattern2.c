#include <stdio.h>
/*half pyramid pattern
 *
 * *
 * * *
 * * * *
 * * * * *
 * * * * * *
 */
void main()
{
    int row, col, n;
    printf("enter number of lines(n): ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("* ");
        }

        printf("\n");
    }
}