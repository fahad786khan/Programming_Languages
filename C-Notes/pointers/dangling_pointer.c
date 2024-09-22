#include <stdio.h>

/*1.A dangling pointer is a pointer which points to some non-existing memory location
2.dangling pointers occur when a pointer continues to point to a memory location after the object it points to has been deleted or deallocated. This can lead to unexpected behavior and crashes*/

// int main()
// {
//     int *ptr = (int *)malloc(sizeof(int));
//     ...... free(ptr); //?now poiter is still pointing to the deallocated memory

//     ptr = NULL; // now,ptr is no more dangling

//     return 0;
// }

int *fun()
{
    int num = 10; // num is local to fun()
    return &num;  // this local variable get deallocated
}

int main()
{
    int *ptr = NULL;
    ptr = fun();
    printf("%d", *ptr);
    return 0; //! Segmentation fault
}