#include <stdio.h>
#include <stdlib.h>

/* realloc()
reallocate(increase or decrese)memory using the same pointer & size
realloc()function is used to change the size of the memory block wwithout losing the old data.
SYNTAX:     void *realloc(void *ptr,size_t newSize)
                            /                   \
pointer to the previously allocated memory.      New size
on failure, realloc returns NULL

ptr = realloc(ptr,newSize);
*/
//?Allocate memory for 5 numbers.Then dynamically increse it to 8 numbers
int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));

    printf("enter numbers(5) :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 8);
    printf("enter number(8) :");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &ptr[i]);
    }

    // print
    for (int i = 0; i < 8; i++)
    {
        printf("number %d is %d\n", i, ptr[i]);
    }
    free(ptr);
    return 0;
}