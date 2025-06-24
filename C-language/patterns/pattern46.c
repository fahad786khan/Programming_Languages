#include <stdio.h>
/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1*/
void main()
{
    int row, col, n;
    printf("enter the number of lines: ");
    scanf("%d", &n);
    for (row = 1; row < n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d ", col % 2);
        }
        printf("\n");
    }
}