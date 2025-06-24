#include <stdio.h>
/*odd numbers pattern
1
3 5
7 9 11
13 15 17 19
*/
void main()
{
    int row, col, n, number = 1;
    printf("enter number of lines(n): ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d ", 2 * number - 1);
            number++;
        }
        printf("\n");
    }
}