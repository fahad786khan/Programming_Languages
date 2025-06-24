#include <stdio.h>
/*0 and 1 alternating half pyramid pattern
1
0 1
1 0 1
0 1 0 1
*/
void main()
{
    int row, a, col, n;
    printf("enter the number of line(n): ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        if (row % 2 != 0)
            a = 1;
        else
            a = 0;
        for (col = 1; col <= row; col++)
        {
            printf("%d ", a);
            if (a == 0)
                a = 1;
            else
                a = 0;
        }
        printf("\n");
    }
}

//? this also works
// void main()
// {
//     int row, a, col, n;
//     printf("enter the number of line(n): ");
//     scanf("%d", &n);
//     for (row = 1; row <= n; row++)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             if ((row + col) % 2 == 0)
//                 printf("1 ");
//             else
//                 printf("0 ");
//         }
//         printf("\n");
//     }
// }