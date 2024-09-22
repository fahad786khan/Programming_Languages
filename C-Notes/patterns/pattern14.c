#include <stdio.h>
/*
hollow right angle triangle star pattern
*
* *
*   *
*     *
*       *
* * * * * *
*/
void main()
{
    int row, col, n;
    printf("Enter the number of lines(n): ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            if (col == 1 || row == n || col == row)
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