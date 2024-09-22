#include<stdio.h>
#include <math.h>

/*          a + b
            / |  \
           /  |   \
          /operator\
         /          \
     operand 1       operand 2
*/
int main(){
    int b = 2,c = 3;
    int power = pow(b,c); // to wirte b to the power of c(b^c) in math we write like this c
    printf("%d",power);
    return 0;

}