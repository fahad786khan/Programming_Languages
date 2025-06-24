#include <stdio.h>
/*
Number pyramind pattern
      1
    1 2 3
  1 2 3 4 5
1 2 3 4 5 6 7
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
      printf("%d ", col);
    }
    printf("\n");
  }
}