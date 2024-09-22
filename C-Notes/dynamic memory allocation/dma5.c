#include <stdio.h>
#include <stdlib.h>

/*1.calloc()~clear allocation
2.calloc()function is used to dynamically allocate multiple blocks of memory.
It is different from malloc in two ways:
a.calloc()needs two arguments instead of just one
SYNTAX: void *calloc(size_t n,size_t size);
                     /              \
         Number of blocks       size of the block
ptr = (int*)calloc(5,sizeof(int));
*/

int main()
{
    float *ptr;
    ptr = (float *)calloc(5, sizeof(float));

    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", ptr[i]);
    }
    return 0;
}