#include <stdio.h>
/*inverted half pyramid number pattern
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
*/

void main()
{
    int row, col, n;
    printf("enter number of lines(n): ");
    scanf("%d", &n);
    for (row = n; row >= 1; row--)
    {
        for (col = row; col >= 1; col--)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
}