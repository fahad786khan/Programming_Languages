#include <stdio.h>
/*
parallelogram right star pattern
        * * * * * *
      * * * * * *
    * * * * * *
  * * * * * *
* * * * * *
*/
void main()
{

    int row, col, space, n;
    printf("enter the number of lines: ");
    scanf("%d", &n);
    for (row = 0; row < n; row++)
    {
        for (space = 1; space < n - row; space++)
        {
            printf("  ");
        }
        for (col = 0; col <= n; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}