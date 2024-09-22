#include <stdio.h>
/*
full pyramid star pattern
            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
  * * * * * * * * * * *
 */
void main()
{
    int row, space, n, k = 0;
    printf("Enter the number of lines(n): ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++, k = 0)
    {
        for (space = 1; space <= n - row; space++)
        {
            printf("  ");
        }
        while (k != 2 * row - 1)
        {
            printf("* ");
            k++;
        }
        printf("\n");
    }
}
//? This also works
// void main()
// {
//   int row, col, n, space;
//   printf("Enter the number of lines(n): ");
//   scanf("%d", &n);
//   for (row = 1; row <= n; row++)
//   {
//     for (space = 1; space <= n - row; space++)
//     {
//       printf("  ");
//     }
//     for (col = 1; col <= 2 * row - 1; col++)
//     {
//       printf("* ");
//     }
//     printf("\n");
//   }
// }