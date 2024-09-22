#include <stdio.h>
#include <stdlib.h>

/*1.Void pointer is a pointer which has no associated data type with it.It can point to any data of any type and can be typecasted with it.
2.void pointer are generic pointers that lack a specific data type. They offer flexibility but require careful typecasting when dereferencing
3.malloc and calloc function returns a void pointer. Due to this reason, they can allocate a memory for any type of data.like [void* malloc(size_t size);]*/

int main()
{
    int n = 10;
    void *ptr = &n; // ptr has no associated data type

    // printf("%d\n", *ptr);        //! ERROR
    printf("%d\n", *(int *)ptr); // the pointer has been type casted first then de reference is happening
    return 0;
}