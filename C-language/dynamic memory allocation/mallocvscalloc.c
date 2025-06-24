#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Memory allocated by calloc is initialized to zero[it is not the case with malloc.malloc is initialized with some garbage value]
NOTE:malloc and calloc both return "NULL" when sufficient memory is not available in the heap*/

int main(void)
{
    int size = 0;
    int *junk = 0;
    srand(time(0));
    for (int i = 0; i < 1000; i++)
    {
        size = rand() % 16000;
        junk = malloc(size * sizeof(int));
        for (int j = 0; j < size; j++)
        {
            junk[j] = rand();
        }
        free(junk);
    }

    int *array;
    // array = malloc(1000*sizeof(int));
    array = calloc(1000, sizeof(int));
    for (int i = 0; i < 1000; i++)
    {
        printf("%d", array[i]);
    }

    free(array);
    printf("\n");

    return 0;
}