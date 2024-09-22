#include <stdio.h>
// Finding greatest commom divisor(GCD) between two numbers
int gcd(int n1, int n2);
int main()
{
    int n1, n2;
    printf("Enter two integers: ");
    scanf("%d\n%d", &n1, &n2);
    // printing gcd of two numbers
    printf("G.C.D of numbers %d and %d is %d\n", n1, n2, gcd(n1, n2));
    return 0;
}
int gcd(int n1, int n2)
{
    if (n2 != 0)
    {
        return gcd(n2, n1 % n2);
    }
    else
    {
        return n1;
    }
}