#include<stdio.h>

//Will the addrese output be same? answer :no
/*void printAddress(int n);

int main(){
    int n = 4;
    printf("%p \n",&n);
    printAddress(n); 

    return 0;
}

void printAddress(int n){
    printf("%p \n", &n);
}*/

void printAddress(int *n);

int main(){
    int n = 4;
    printAddress(&n);
    printf("address of n is : %u \n",&n); 

    return 0;
}

void printAddress(int *n){
    printf("address of n is : %u \n", n);
}