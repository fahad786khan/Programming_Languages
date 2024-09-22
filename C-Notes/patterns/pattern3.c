#include <stdio.h>
/*Inverted half pyramid pattern
 * * * * * *
 * * * * *
 * * * *
 * * *
 * *
 *
 */
void main()
{
    int row, n, col;
    printf("enter number of lines(n): ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = n; col >= row; col--)
        {
            printf("* ");
        }

        printf("\n");
    }
}