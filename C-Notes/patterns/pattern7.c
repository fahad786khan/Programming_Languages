#include <stdio.h>
/*rhombus full-hollow pattern
 * * * * * * * * * * * * *
 * * * * * *   * * * * * *
 * * * * *       * * * * *
 * * * *           * * * *
 * * *               * * *
 * *                   * *
 *                       *
 * *                   * *
 * * *               * * *
 * * * *           * * * *
 * * * * *       * * * * *
 * * * * * *   * * * * * *
 * * * * * * * * * * * * *
 */
void main()
{
    int row, col, n, space;
    printf("Enter the number of lines(n): ");
    scanf("%d", &n);
    int nsp = 1; // nsp means number of spaces
    int nst = n; // nst means number of stars
    //*First part
    for (row = 1; row <= 2 * n + 1; row++)
    { //? first line sparated
        printf("* ");
    }
    printf("\n");
    for (row = 1; row <= n - 1; row++) // use row<=n-1
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
    //*Second part
    for (row = n; row >= 1; row--)
    {
        for (col = 1; col <= nst; col++) // star
        {
            printf("* ");
        }
        for (space = nsp; space >= 1; space--) // space
        {
            printf("  ");
        }
        for (col = 1; col <= nst; col++) // star
        {
            printf("* ");
        }
        nst++;
        nsp -= 2;
        printf("\n");
    }
    for (row = 1; row <= 2 * n + 1; row++)
    { //? last line sparated
        printf("* ");
    }
}