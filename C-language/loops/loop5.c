#include <stdio.h>
#include <math.h>

/*Print the numbers from 0 to n,if n is given by user
 */

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);

    int i = 0;
    while (i <= n)
    {
        printf("%d \n", i);
        i++;
    }
    return 0;
}