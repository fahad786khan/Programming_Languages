#include <stdio.h>
#include <math.h>

/*a.Write a function to print n terms of the fibonacci sequence
b.Write a function to print nth terms of the fibonacci sequence*/

int fib(int n);

int main()
{
    printf("%d \n", fib(6));
    return 0;
}

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fibNm1 + fibNm2;
    // printf("fib of %d is : %d \n", n, fibN); // n terms
    return fibN;
}
