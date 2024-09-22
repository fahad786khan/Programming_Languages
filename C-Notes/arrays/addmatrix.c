#include <stdio.h>

void main()
{
    int m, n, c, d, first[10][10], second[10][10], sum[10][10]; // initialization of variables & 2d arrays

    printf("Enter the number of rows and colums of matrixes:");
    scanf("%d\n%d", &m, &n);

    printf("Enter the elements of first matrix:");
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            scanf("%d", &first[c][d]);
        }
    }
    printf("Enter the elements of second matrix:");
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            scanf("%d", &second[c][d]);
        }
    }
    printf("Printing adding of two matrixes:\n");
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            sum[c][d] = first[c][d] + second[c][d]; // adding two matrixes
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
    }
}