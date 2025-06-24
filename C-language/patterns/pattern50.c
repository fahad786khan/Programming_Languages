#include <stdio.h>
/*half pyramid same alphabet row pattern
A
B B
C C C
D D D D
E E E E E
*/
void main()
{
    int row, col, n;
    printf("enter number of lines(n): ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%c ", 64 + row);
        }

        printf("\n");
    }
}