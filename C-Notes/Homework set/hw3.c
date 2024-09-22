#include <stdio.h>
/*
write a program to print the average of 3 numbers.
*/

int main()
{
    int a, b, c;
    printf("Enter number(a): ");
    scanf("%d", &a);

    printf("Enter number(b): ");
    scanf("%d", &b);

    printf("Enter number(c): ");
    scanf("%d", &c);

    printf("The average of three number is %d\n", (a + b + c) / 3);

    return 0;
}