#include <stdio.h>

/*
The continue statement in C is used in loops to skip the current iteration and move on to the next iteration without executing the statements below the continue in the loop body.
*/

int main()
{
    for (int i = 1; i <= 8; i++)
    {
        // when i = 4, the iteration will be skipped and for
        // will not be printed
        if (i == 4)
        {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");
    //?Another way to implement continue
    int i = 0;
    // while loop to print 1 to 8
    while (i < 8)
    {
        // when i = 4, the iteration will be skipped and for
        // will not be printed
        i++;
        if (i == 4)
        {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}