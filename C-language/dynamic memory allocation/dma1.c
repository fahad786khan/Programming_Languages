#include <stdio.h>

/*  Dynamic Memory Allocation
                |
it is a way to allocate memory to a data structure during the runtime.

we need some function to allocate & free memory dynamically

      Function for DMA
| Function Name | Function Description |
| ------------- | -------------------- |
| malloc()      | memory alloction     |
| calloc()      | clear alloction      |
| free()        | free the memory      |
| realloc()     | re-allocation        |
*/
int main()
{
    // sizeof() function
    printf("%d\n", sizeof(int));   // 4
    printf("%d\n", sizeof(float)); // 4
    printf("%d\n", sizeof(char));  // 1
    return 0;
}