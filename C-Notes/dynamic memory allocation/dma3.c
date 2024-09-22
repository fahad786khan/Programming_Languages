#include <stdio.h>
#include <stdlib.h>

/*1.malloc doesn't have an idea of what it is pointing to
2.It merely allocates memory requested by the user without knowing the type of data to be store inside the memory.
(The void pointer can be typecasted to an appropriate type)
int *ptr = (int*)malloc(4)
3.malloc allocates 4 bytes of memory in the heap and the address of the first byte is stored in the pointer ptr
*/
int main()
{
    int i, n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not available");
        exit(1);
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", ptr + i);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr + i));
    }
    return 0;
}