#include <stdio.h>
/*odd number half pyramid
1
1 3
1 3 5
1 3 5 7
1 3 5 7 9
 */
void main()
{
    int row, n, col;
    printf("enter number of lines(n): ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        int a = 1;
        for (col = 1; col <= row; col++)
        {
            // a variable give odd numbers
            printf("%d ", 2 * a - 1);
            a++;
        }

        printf("\n");
    }
}