#include <stdio.h>
/*Number and alphabet alternating half pyramind pattern
1
A B
1 2 3
A B C D
1 2 3 4 5
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
            if (row % 2 == 0)
            {
                printf("%c ", col + 64);
            }
            else
            {
                printf("%d ", col);
            }
        }
        printf("\n");
    }
}