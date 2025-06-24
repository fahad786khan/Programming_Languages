#include <stdio.h>
/*
Alphabet pyramid pattern
      A
    A B C
  A B C D E
A B C D E F G
*/
void main()
{
  int row, col, n, space;
  printf("enter the number of lines: ");
  scanf("%d", &n);
  for (row = 1; row <= n; row++)
  {
    for (space = 1; space <= n - row; space++)
    {
      printf("  ");
    }
    for (col = 1; col <= 2 * row - 1; col++)
    {
      printf("%c ", col + 64);
    }
    printf("\n");
  }
}