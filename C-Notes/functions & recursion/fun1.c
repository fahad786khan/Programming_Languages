#include<stdio.h>
#include<math.h>

/*FUNCTION : block of code that performs particlar task
-it can take value(parameter)& give some value(return value)
-it can be used multiple times
-increase code reusability*/ 

//declaration/prototype

void printHello();

int main(){
    printHello(); //function call
    printHello();
    printHello();
    return 0;
}

//function definition
void printHello(){
    printf("Hello! \n");
    printf("my name is fahad \n");
}