#include <stdio.h>
/*half pyramid using same numbers line pattern
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
*/
void main()
{
    int row, col, n;
    printf("enter number of rows: ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d ", row);
        }

        printf("\n");
    }
}