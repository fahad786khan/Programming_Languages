#include <stdio.h>
/*number-space-number inverted pattern
1 2 3 4 3 2 1
1 2 3   3 2 1
1 2       2 1
1           1
 */
void main()
{
    int row, col, n, space;
    printf("enter number of lines(n): ");
    scanf("%d", &n);
    int nsp = 1;  // nsp means number of spaces
    int ncon = n; // ncon means number of constant
    for (row = 1; row <= n + 1; row++)
    { //? first line sparated
        printf("%d ", row);
    }
    for (row = n; row >= 1; row--)
    {
        printf("%d ", row);
    }
    printf("\n");
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= ncon; col++) // numbers
        {
            printf("%d ", col);
        }
        for (space = 1; space <= nsp; space++) // space
        {
            printf("  ");
        }
        for (col = ncon; col >= 1; col--) // numbers
        {
            printf("%d ", col);
        }
        ncon--;
        nsp += 2;
        printf("\n");
    }
}
