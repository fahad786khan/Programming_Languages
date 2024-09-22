#include <stdio.h>
/*
space first than star half pyramid star pattern
          *
        * *
      * * *
    * * * *
  * * * * *
* * * * * *
 */
void main()
{
    int row, col, n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            if ((row + col) <= n)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }
}
//? this also works
// void main()
// {
//   int row, col, space, n;
//   printf("Enter the number of lines: ");
//   scanf("%d", &n);
//   for (row = 1; row <= n; row++)
//   {
//     for (space = 1; space <= n - row; space++)
//     {
//       printf("  ");
//     }
//     for (col = 1; col <= row; col++)
//     {
//       printf("* ");
//     }
//     printf("\n");
//   }
// }