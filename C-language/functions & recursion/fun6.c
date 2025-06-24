#include<stdio.h>
#include<math.h>
 
/* # NOTE
a.Function can only return one value at a time
b.Changes to parameters in function don't change the values in calling function
[because a copy of argument is passed to the function]
*/

void calPrice(float value);

int main (){
    float value = 100.0;
    calPrice(value);
    printf("value is : %f \n", value);
    return 0;
}

void calPrice(float value){
    value = value + (0.18 * value);
    printf("final price is : %f \n", value);
}