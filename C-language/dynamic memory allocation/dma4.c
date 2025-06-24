#include <stdio.h>
#include <stdlib.h>

/*WAP to allocate memory to store 5 prices.*/

int main()
{
    float *ptr;
    ptr = (float *)malloc(5 * sizeof(float));

    ptr[0] = 49;
    ptr[1] = 99;
    ptr[2] = 199;
    ptr[3] = 299;
    ptr[4] = 249;

    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", ptr[i]);
    }
    return 0;
}