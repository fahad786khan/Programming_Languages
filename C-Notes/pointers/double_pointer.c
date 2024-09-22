#include <stdio.h>
#include <math.h>

/*Pointer to Pointer
        |
A variable that stores the memory address of another pointer
It is also kown as double pointer
*/

/*Syntax
int **age;
char **star;
float **price;
*/
/*Print the value of 'i' from its pointer to pointer*/

int main()
{
    int i;
    printf("enter the value : ");
    scanf("%d", &i);

    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d \n", **pptr);
    return 0;
}