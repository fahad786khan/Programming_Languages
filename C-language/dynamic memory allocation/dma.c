#include <stdio.h>
#include <stdlib.h>

/*using NULL pointer the malloc function is called
Allocatesd memory can only be accessed by pointers*/

int main()
{
    int *ptr;
    ptr = (int *)malloc(2 * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory could not be allocated");
    }
    else
    {
        printf("Memory allocated successfully");
    }
    return 0;
    free(ptr);
}