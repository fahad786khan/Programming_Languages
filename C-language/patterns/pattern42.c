#include <stdio.h>
/*
number pyramid pattern
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/
void main()
{
    int row, col, n, space, k;
    printf("enter the number of lines: ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (space = 1; space <= n - row; space++)
        {
            printf("  ");
        }
        for (col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }
        int a = row - 1;
        for (k = 1; k <= row - 1; k++)
        {
            printf("%d ", a);
            a--;
        }
        printf("\n");
    }
}