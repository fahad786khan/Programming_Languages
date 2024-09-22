#include <stdio.h>
/*Hollow square star pattern
 * * * * *
 *       *
 *       *
 *       *
 * * * * *
 */
int main()
{
    int row, col, n;
    printf("enter number of lines(n): ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            if (row == 1 || row == n || col == 1 || col == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}