#include <stdio.h>

// Write a program to check wheather given number is neon or not

void main()
{
    int num, digit, sum = 0;
    printf("Enter a number to check for neon number: ");
    scanf("%d", &num);

    int square = num * num;

    while (square != 0)
    {
        digit = square % 10;
        sum += digit;
        square = square / 10;
    }
    if (sum == num)
    {
        printf("%d is a neon number", num);
    }
    else
    {
        printf("%d is not a neon number", num);
    }
}