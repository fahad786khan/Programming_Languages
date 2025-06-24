#include <stdio.h>
/*Square star pattern
 * * * * * * *
 * * * * * * *
 * * * * * * *
 * * * * * * *
 * * * * * * *
 * * * * * * *
 * * * * * * *
 */
void main()
{
    int row, col, n;
    printf("enter number of lines(n): "); // n represent number of lines
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}