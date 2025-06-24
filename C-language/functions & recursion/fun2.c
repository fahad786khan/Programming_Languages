#include<stdio.h>
#include<math.h>

/*Write 2 functions-one to print "Hello" & second to print "good bye"*/

void printHello();
void printGoodbye();

int main(){
    printHello();
    printGoodbye();
    return 0;
}

void printHello(){
    printf("Hello! \n");
}

void printGoodbye(){
    printf("Goodbye:) \n");
}