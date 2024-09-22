#include<stdio.h>

/*Create a string firstName & lastName to store details of user & print all the charachters using a loop.*/

void printString(char arr[]);

int main(){
    char firstName[] = "FAHAD";
    char lastName[] = "KHAN";

    printString(firstName);
    printString(lastName);

    return 0;

}

void printString(char arr[]){
    for(int i=0;arr[i] != '\0' ;i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}