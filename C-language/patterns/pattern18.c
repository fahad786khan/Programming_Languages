#include <stdio.h>
/*
parallelogram left star pattern
* * * * *
  * * * * *
    * * * * *
      * * * * *
        * * * * *
*/
void main()
{

    int row, col, space, n;
    printf("enter the number of lines: ");
    scanf("%d", &n);
    for (row = n; row >= 1; row--)
    {
        for (space = 1; space <= n - row; space++)
        {
            printf("  ");
        }
        for (col = 1; col <= n; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}