#include <stdio.h>
/*Hollow square star pattern
 * * * * * * * *
 *             *
 *             *
 *             *
 * * * * * * * *
 */
int main()
{
    int row, col, m, n;
    printf("enter number of rows and columns: ");
    scanf("%d\n%d", &n, &m);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= m; col++)
        {
            if (row == 1 || row == n || col == 1 || col == m)
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