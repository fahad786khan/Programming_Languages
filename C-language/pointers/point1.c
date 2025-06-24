#include <stdio.h>
#include <math.h>

/* POINTERS ->A variable that stores the memory address of other variable*/

/*Declaring pointers
int *ptr; for int age = 22;
char *ptr; for char star = '$'
float *ptr; for float price = 100.00
*/

int main()
{
    int age = 22;
    int *ptr = &age; // general syntax in pointer
    int _age = *ptr;
    printf("%d \n", _age); // this show value store in age
    return 0;
}