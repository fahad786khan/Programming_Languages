#include <stdio.h>
#include <stdlib.h>
/*EXAMPLE
int *ptr = (int *)malloc(sizeof(int));
ptr = (int *)realloc(ptr,2*sizeof(int));

-This will allocate memory space of 2*sizeof(int).
-Also,this funcation moves the contents of the old block to a new block and the data of the old block is not lost.
-We may lose the data when the new size is smaller than the old size
-Newly allocated bytes are uninitialized
*/

int main()
{
    int i;
    int *ptr = (int *)malloc(2 * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not available!");
        exit(1);
    }

    printf("Enter the two numbers: ");
    for (i = 0; i < 2; i++)
    {
        scanf("%d", ptr + i);
    }

    // Memory allocation for 2 more integers
    ptr = (int *)realloc(ptr, 4 * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not available!");
        exit(1);
    }

    printf("Enter 2 more integers: ");
    for (i = 2; i < 4; i++)
        scanf("%d", ptr + i);

    // Printing the values on the screen
    for (i = 0; i < 4; i++)
        printf("%d\t", *(ptr + i));
    free(ptr);
    return 0;
}