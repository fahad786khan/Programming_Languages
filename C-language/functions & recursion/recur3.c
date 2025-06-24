#include<stdio.h>
#include<math.h>

/*Properties Of Recursion
a.Anything that can be done with iteration,can be done with recursion and vice-versa.
b.Recursion can sometimes give the most simple solution.
c.Base Case is the condition which stops recursion.
d.Iteration has infinite loop & Recursion has {Stack overflow}*/

/*Write a function to convert celsius to fahrenheit. [f = (c *9/5) +32 ]*/

float convertTemp(float celsius);

int main(){
    float far = convertTemp(32);
    printf("far : %f \n", far);
    return 0;
}

float convertTemp(float celsius){
    float far = celsius * (9.0/5.0) + 32;
    return far;
}