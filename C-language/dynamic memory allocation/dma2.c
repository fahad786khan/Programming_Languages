#include <stdio.h>
#include <stdlib.h> //remember to include this library

/* 1.malloc()~memory allocation takes number of bytes to be allocated & returns a pointer to type void
2.malloc is the short name for "memory allocation" and is used to dynamically allocate a single large block of contiguous memory according to the size specified.
SYNTAX: (void*)malloc(size_t size)
3.Malloc function simply allocates a memory block according to the size specified in the heap and on success it returns a pointer pointing to the first byte of the allocated memory
else on failure returns NULL.
4.size_t is defied in <stdlib.h> as unsigned int
ptr = (int*)malloc(5*sizeof(int));
*/

int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 7;
    ptr[3] = 23;
    ptr[4] = 40;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}