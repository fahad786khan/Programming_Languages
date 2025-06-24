#include <stdio.h>
/*Floyd's triangle pattern
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21*/
void main()
{
    int row, col, n, number = 1;
    printf("enter number of lines(n): ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }
}