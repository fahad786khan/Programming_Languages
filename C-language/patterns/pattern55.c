#include <stdio.h>
/*alphabet-space-alphabet inverted pattern
A B C D E F G
A B C   E F G
A B       F G
A           G
 */
void main()
{
    int row, col, n, space;
    printf("enter number of lines(n): ");
    scanf("%d", &n);
    int nsp = 1;  // nsp means number of spaces
    int nalp = n; // nalp means number of alphabet
    for (row = 1; row <= 2 * n + 1; row++)
    { //? first line sparated
        printf("%c ", 64 + row);
    }
    printf("\n");
    for (row = 1; row <= n; row++)
    {
        int a = 1;                        //?very important to add in the loop only
        for (col = 1; col <= nalp; col++) // numbers
        {
            printf("%c ", 64 + a);
            a++;
        }
        for (space = 1; space <= nsp; space++) // space
        {
            printf("  ");
            a++;
        }
        for (col = 1; col <= nalp; col++) // numbers
        {
            printf("%c ", 64 + a);
            a++;
        }
        nalp--;
        nsp += 2;
        printf("\n");
    }
}