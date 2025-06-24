#include <stdio.h>
/*
 number rhombus pattern
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
  4 3 2 1 2 3 4
    3 2 1 2 3
      2 1 2
        1
*/
void main()
{
    int row, col, n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    for (row = 1; row <= 2 * n; row++)
    {
        int maxCol = row > n ? 2 * n - row : row;

        for (int space = 0; space < n - maxCol; space++)
        {
            printf("  ");
        }
        for (col = maxCol; col >= 1; col--)
        {
            printf("%d ", col);
        }
        for (col = 2; col <= maxCol; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
}