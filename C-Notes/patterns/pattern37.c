#include <stdio.h>
/*
Pascal's triangle
                 1
               1   1
             1   2   1
           1   3   3   1
         1   4   6   4   1
       1   5  10  10   5   1
     1   6  15  20  15   6   1
*/
void main()
{
    int n, c = 1, space, row, col;
    printf("Input number of rows: ");
    scanf("%d", &n);
    for (row = 0; row < n; row++)
    {
        for (space = 1; space <= n - row; space++)
            printf("  ");
        for (col = 0; col <= row; col++)
        {
            if (col == 0 || row == 0)
                c = 1;
            else
                c = c * (row - col + 1) / col;
            printf("% 4d", c);
        }
        printf("\n");
    }
}