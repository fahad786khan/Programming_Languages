#include<stdio.h>
#include<math.h>

/*find out below*/

int main(){
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0;

    printf("x = %d \n",x);
    printf("*ptr = %d\n", *ptr);

    *ptr += 5; // x= 5
    printf("x = %d \n",x);
    printf("*ptr = %d\n", *ptr);

    (*ptr)++;
    printf("x = %d \n",x);
    printf("*ptr = %d\n", *ptr);

    return 0;
}