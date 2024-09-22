#include <stdio.h>
/*Inverted half pyramid using numbers pattern{bigger to smaller}
6 5 4 3 2 1
6 5 4 3 2
6 5 4 3
6 5 4
6 5
6
*/
void main()
{
    int row, col, n;
    printf("enter number of lines(n): ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = n; col >= row; col--)
        {
            printf("%d ", col);
        }

        printf("\n");
    }
}