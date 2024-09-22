#include <stdio.h>
#include <stdlib.h>

int *input()
{
    int *ptr, i;
    ptr = (int *)malloc(5 * sizeof(int));
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr + i);
    }

    return ptr;
}

int main()
{
    int i, sum = 0;
    int *ptr = input();
    for (i = 0; i < 5; i++)
    {
        sum += *(ptr + i);
    }

    printf("Sum is: %d", sum);
    free(ptr);  // relesing the memory at the end
    ptr = NULL; // It is a good practice to asign "NULL" to pointer afterwards
    return 0;
}