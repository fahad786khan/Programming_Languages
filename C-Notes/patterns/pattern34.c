#include <stdio.h>
/*
full number pyramid pattern
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
*/
void main()
{
    int row, col, n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (int space = 0; space < n - row; space++)
        {
            printf("  ");
        }
        for (col = row; col >= 1; col--)
        {
            printf("%d ", col);
        }
        for (col = 2; col <= row; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
}