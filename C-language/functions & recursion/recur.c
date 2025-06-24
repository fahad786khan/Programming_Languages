#include<stdio.h>
#include<math.h>

/*RECURSION --->When a function calls itself,it's called recursion

~Print"Hello World"5 times.*/

void printHW(int count);

int main(){
    printHW(5);
    return 0;
}

//recursive function
void printHW(int count){
    if(count == 0){
        return;
    }
    printf("Hello World \n");
    printHW(count-1);
}