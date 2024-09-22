#include <stdio.h>
/*
E
E D
E D C
E D C B
E D C B A*/
void main()
{
    int row, col, n;
    printf("enter the numner of lines(n): ");
    scanf("%d", &n);
    for (row = n; row >= 1; row--)
    {
        for (col = n; col >= row; col--)
        {
            printf("%c ", col + 64);
        }
        printf("\n");
    }
}