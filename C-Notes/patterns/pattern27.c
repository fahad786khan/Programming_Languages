#include <stdio.h>
/*half pyramid numbers pattern
6
6 5
6 5 4
6 5 4 3
6 5 4 3 2
6 5 4 3 2 1
 */
void main()
{
    int row, col, n;
    printf("enter the numner of lines(n): ");
    scanf("%d", &n);
    for (row = n; row >= 1; row--)
    {
        for (col = n; col >= row; col--)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
}