#include<stdio.h>
#include<math.h>

/*Inititalization of Array
int marks[3] = {97,99,98};

Memory Reserved : 12 bytes 
NOTE ->As int have 4 bytes and 3*4 = 12  
*/

/*Pointer Arithmetic ->pointer can be incremented & decremented*/

int main(){
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u \n",ptr);
    ptr++;
    printf("ptr = %u \n",ptr);
    ptr--;
    printf("ptr = %u \n",ptr);
    return 0;
}