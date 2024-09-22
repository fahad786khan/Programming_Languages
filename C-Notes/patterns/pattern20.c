#include <stdio.h>
/*Inverted right half pyramid star pattern
* * * * * * * *
  * * * * * * *
    * * * * * *
      * * * * *
        * * * *
          * * *
            * *
//            *
*/
void main()
{
    int row, col, n, space;
    printf("enter number of lines(n): ");
    scanf("%d", &n);
    int nsp = 0; // nsp means number of spaces
    int nst = n; // nst means number of stars
    for (row = 1; row <= n; row++)
    {
        for (space = 1; space <= nsp; space++)
        {
            printf("  ");
        }
        for (col = 1; col <= nst; col++)
        {
            printf("* ");
        }
        nst--;
        nsp++;

        printf("\n");
    }
}