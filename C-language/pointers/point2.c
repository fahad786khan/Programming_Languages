#include<stdio.h>
#include<math.h>

/*Format Specifier
printf("%p",&age);
printf("%p",ptr);
printf("%p",&ptr);

%u is for unsigned int
*/
int main (){
    int age = 22;
    int *ptr = &age;

    //address
   // printf("%p \n",&age);
    //printf("%u \n",&age);
    
    // printf("%u \n", ptr);

    // printf("%u \n", &ptr);

    //value
    printf("%d \n", age);
    printf("%d \n", *ptr);
    printf("%d \n", *(&age));
    return 0;
}