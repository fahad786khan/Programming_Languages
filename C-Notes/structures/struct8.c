#include<stdio.h>
#include<string.h>

/*Create a structure to store complex numbers(use arrow operator)*/

struct complex{
    int real;
    int img;
};

int main(){
    struct complex number1 = {4,7};
    struct complex *ptr = &number1;
    printf("real part = %d\n",ptr->real);
    printf("img part = %d\n",ptr->img);
    return 0;
}