#include <stdio.h>
/*
Alphabet pyramid pattern
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A
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
            printf("%c ", 64 + col);
        }
        int a = row - 1;
        for (k = 1; k <= row - 1; k++)
        {
            printf("%c ", 64 + a);
            a--;
        }
        printf("\n");
    }
}