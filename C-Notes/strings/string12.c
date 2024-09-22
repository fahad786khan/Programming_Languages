#include<stdio.h>
#include<string.h>

/*Check if a given character is present in string or not*/

void checkChar(char str[],char ch);

int main(){
    char str[] = "tesla";
    char ch = 'e';
    checkChar(str,ch);
    return 0;
}

void checkChar(char str[],char ch){
    for(int i=0;str[i]!='\0';i++){
        if(str[i] == ch){
    
        printf("character is present! \n");
        return;
    }
    printf("character is not present :(\n");
}
    }