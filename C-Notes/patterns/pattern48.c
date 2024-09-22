#include <stdio.h>
/*half pyramid alphabet pattern
A
A B
A B C
A B C D
A B C D E
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
            printf("%c ", 64 + col);
        }

        printf("\n");
    }
}