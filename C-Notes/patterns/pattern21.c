#include <stdio.h>
/*star-space-star inverted pattern
 * * * * * * *
 * * *   * * *
 * *       * *
 *           *
 */
void main()
{
    int row, col, n, space;
    printf("enter number of lines(n): ");
    scanf("%d", &n);
    int nsp = 1; // nsp means number of spaces
    int nst = n; // nst means number of stars
    for (row = 1; row <= 2 * n + 1; row++)
    { //? first line sparated
        printf("* ");
    }
    printf("\n");
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= nst; col++) // star
        {
            printf("* ");
        }
        for (space = 1; space <= nsp; space++) // space
        {
            printf("  ");
        }
        for (col = 1; col <= nst; col++) // star
        {
            printf("* ");
        }
        nst--;
        nsp += 2;
        printf("\n");
    }
}