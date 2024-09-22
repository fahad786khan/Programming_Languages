#include <stdio.h>
#include <stdlib.h>

/*
1.The dynamic memory get stored in heap and static memory is storedin stacks
2.The memory leak happens due to improper use of heap
3.If we do not release that memory from heap that is like garbage then it is called memory leak
4.Languages like java ,C# have automatic garbage collection
5.Memory leak occurs when programmers create a memory in heap and forget to delete it.

*/

int main()
{
    int ch = 1;
    int *ptr;
    while (ch < 50)
    {
        printf("memroy leak demo\n");
        ptr = (int *)malloc(40000 * sizeof(int));

        printf("continue?? press 1 for continue");
        scanf("%d", &ch);
        free(ptr); // solution
    }
}

//?open task manager and see the memory increses of a.exe