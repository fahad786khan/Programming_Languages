#include<stdio.h>

/*Pointer Arithmetic
a.We can also subtract one pointer from another

b.We can also compare 2 pointers
*/

int main(){
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u, %udifference = %u\n",ptr,_ptr,ptr-_ptr);
    _ptr = &age;
    printf("comparision = %u\n",ptr == _ptr);
    return 0;
}