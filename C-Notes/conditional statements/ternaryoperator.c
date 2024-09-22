#include<stdio.h>
#include<math.h>

/*TERNARY OPERATOR = shortcut to if/else when assigning/returning a value
condition ? do something if TRUE : do something if FALSE

*/

int main(){
    int age;
    printf("enter age : ");
    scanf("%d", &age);

    age >= 18 ? printf("adult \n") : printf("not adult \n");

    return 0;
}