#include <stdio.h>
#include <stdlib.h>

void Demo()
{
    int *ptr;
    int number = 100;
    ptr = &number;
    printf("\nThe value of the number is as : %d", *ptr);
    free(ptr); // solution
}

int main()
{
    Demo();
    printf("\nI am outside of the function");
    int halt;
    scanf("%d", &halt);
    return 0;
}