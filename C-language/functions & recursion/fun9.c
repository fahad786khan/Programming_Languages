#include <stdio.h>

int jumble(int x, int y)
{
    x = 2 * x + y;
    return x;
}

void main()
{
    int x, y;
    printf("Enter the value of x,y : ");
    scanf("%d\n%d", &x, &y);

    y = jumble(y, x);
    x = jumble(y, x);
    printf("%d\n", x);
}