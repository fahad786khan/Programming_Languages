#include <stdio.h>
/*Inverted half pyramid using numbers pattern{smaller to biggers}
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
void main()
{
    int col, n, row;
    printf("enter number of lines(n): ");
    scanf("%d", &n);
    for (row = n; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }

        printf("\n");
    }
}