#include <stdio.h>
/*
Diamond pattern
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/
void main()
{
    int row, col, n, space;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    for (row = 1; row < 2 * n; row++)
    {
        int maxCol = row > n ? 2 * n - row : row;
        // maxCol vary in every line but n is constant
        int noOfSpaces = n - maxCol;
        for (space = 0; space < noOfSpaces; space++)
        {
            printf(" ");
        }
        for (col = 0; col < maxCol; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}