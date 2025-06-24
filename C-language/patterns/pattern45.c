#include <stdio.h>
/*minimum grid number pattern
1 1 1 1 1
1 2 2 2 2
1 2 3 3 3
1 2 3 4 4
1 2 3 4 5
*/
void main()
{
    int row, col, n;
    printf("Enter the number of lines(n): ");
    scanf("%d", &n);
    int min = 0;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            if (row < col)
                min = row; // minimum of 2 numbers
            else
                min = col;
            printf("%d ", min);
        }
        printf("\n");
    }
}