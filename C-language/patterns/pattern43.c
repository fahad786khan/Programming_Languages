#include <stdio.h>
/*number-space-number inverted pattern
1 2 3 4 5 6 7
1 2 3   5 6 7
1 2       6 7
1           7
 */
void main()
{
    int row, col, n, space;
    printf("enter number of lines(n): ");
    scanf("%d", &n);
    int nsp = 1;  // nsp means number of spaces
    int ncon = n; // ncon means number of constant
    for (row = 1; row <= 2 * n + 1; row++)
    { //? first line sparated
        printf("%d ", row);
    }
    printf("\n");
    for (row = 1; row <= n; row++)
    {
        int a = 1;                        //?very important to add in the loop only
        for (col = 1; col <= ncon; col++) // numbers
        {
            printf("%d ", a);
            a++;
        }
        for (space = 1; space <= nsp; space++) // space
        {
            printf("  ");
            a++;
        }
        for (col = 1; col <= ncon; col++) // numbers
        {
            printf("%d ", a);
            a++;
        }
        ncon--;
        nsp += 2;
        printf("\n");
    }
}