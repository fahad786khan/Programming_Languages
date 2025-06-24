#include <stdio.h>
#include <stdlib.h>

/* free()
1.We use it to free memory that is allocated using malloc & calloc
2.Free() funcation is used to release the dynamically allocated memory in heap
3.The memory allocated in heap will not be released automatically after using the memory.The space remains there and can't be used.
4.It is the programmer's responsibility to release the memory after use.
free(ptr);
*/
int main()
{
    int *ptr;
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr);

    ptr = (int *)calloc(2, sizeof(int)); // more two zeros '0'
    for (int i = 0; i < 2; i++)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    return 0;
}