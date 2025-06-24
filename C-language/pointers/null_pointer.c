#include <stdio.h>
#include <stdlib.h>

/*
1.null pointer don't point to any valid memory location.They are often used to signify that a pointer is not currently pointing to a valid object
2.It is usefull for handling errors when using malloc function.
3. The value of NULL is 0. We can either use NULL or 0 but this 0 is written in context of pointers and is not equivalent to the integer 0.
4.Size of the NULL pointer depends upon the platform and is similar to the size of the normal pointers.
5.It is a good practice to initialize a pointer as NULL
6.It is a good practice to perform NULL check before deferencing any pointer to avoid surprises
*/

int main()
{
    int *ptr = NULL;
    // int *ptrs = '\0';
    printf("%d\n", ptr);          // 0
    printf("%d\n", sizeof(NULL)); // 4 in my computer
    return 0;
}