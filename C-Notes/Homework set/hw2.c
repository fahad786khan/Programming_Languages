#include <stdio.h>
/*Take a number(n)from user & output its cube(n*n*n).
 */

int main()
{
    int n;
    printf("Enter a number(n) : ");
    scanf("%d", &n);

    printf("Cube = %d\n", n * n * n);

    return 0;
}