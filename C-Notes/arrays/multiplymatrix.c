#include <stdio.h>
#define N 50

int main()
{
    int a[N][N], b[N][N], c[N][N], i, j, k, sum, m, n, p, q;
    printf("Enter rows and colums for first matrix:"); // first matrix
    scanf("%d %d", &m, &n);
    printf("Enter first matrix:");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter rows and colums for second matrix:"); // second matrix
    scanf("%d %d", &p, &q);
    printf("Enter second matrix:");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if (n != p) // checking if two matrixes can be multiplied or not
    {
        printf("Cannot multiply\n");
    }
    else
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                sum = 0;
                for (k = 0; k < m; k++)
                {
                    sum = sum + (a[i][k] * b[k][j]);
                }
                c[i][j] = sum;
            }
        }
        printf("multiplication is:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}