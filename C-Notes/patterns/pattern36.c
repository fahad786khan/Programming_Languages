#include <stdio.h>
#include <stdlib.h>
/*
Number box pattern less inside and more out side
    4 4 4 4 4 4 4
    4 3 3 3 3 3 4
    4 3 2 2 2 3 4
    4 3 2 1 2 3 4
    4 3 2 2 2 3 4
    4 4 4 4 4 4 4
*/

int findMin(int a, int b)
{
    // this find (row,col) in grid
    return a > b ? a : b;
}

void main()
{
    int row, col, n;
    printf("Enter the number of lines(n): ");
    scanf("%d", &n);

    for (row = -n + 1; row < n; row++)
    {
        for (col = -n + 1; col < n; col++)
        {
            // abs() is like | -4 | = 4 but in c
            printf("%d ", findMin(abs(row), abs(col)) + 1);
        }
        printf("\n");
    }
}