#include <stdio.h>
// lcm using loop
int main()
{
    int a, b, l;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    for (l = (a > b) ? a : b; l < a * b; l++)
    {
        if (l % a == 0 && l % b == 0)
        {
            break;
        }
    }
    printf("LCM is %d", l);
    return 0;
}