#include <stdio.h>
/*
alphabet left half pyramind pattern
        A
      A B
    A B C
  A B C D
A B C D E
*/
void main()
{
  int row, col, space, n;
  printf("enter the number of lines(n): ");
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
    printf("\n");
  }
}