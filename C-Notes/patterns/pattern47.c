#include <stdio.h>
/*half rhombus right side number pattern
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
 */
void main()
{
    int row, col, n;
    printf("enter the number of lines: ");
    scanf("%d", &n);
    for (row = 1; row <= 2 * n; row++)
    {
        int maxCol = row > n ? 2 * n - row : row;
        for (col = 1; col <= maxCol; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
}