#include <stdio.h>
/*Inverted half pyramid alphabet pattern
A B C D E
A B C D
A B C
A B
A
*/
void main()
{
    int row, col, n;
    printf("enter number of lines(n): ");
    scanf("%d", &n);
    for (row = n; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%c ", 64 + col);
        }

        printf("\n");
    }
}