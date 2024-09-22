#include <stdio.h>
#include <stdlib.h>

/*
1.wild pointer are uninitialized pointers that may point to any random(arbitrary) memory location .Using or dereferencing them can lead to unpredictable results
2.Using them may cause a program to crash or misbehave.
3.Initialize them with address of a known variable
4.Explicitly allocate the memory and put the values in the allocated memory.
*/

int main()
{
    int *p;
    *p = 10; //! ERROR because wild pointer
    // int *p;
    // int var = 10;
    // *p = &var; // no more a wild pointer

    // int *p = (int *)malloc(sizeof(int)); // ex[licitly allocating memory]
    // *p = 10;
    // free(p);
    return 0;
}