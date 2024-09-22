#include<stdio.h>
#include<math.h>

/*Write a program to find if a character entered by user is upper case or not.
*/

int main(){
    char ch;
    printf("enter character : ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("upper case \n");
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("lower case \n");
    }
    else{
        printf("not english letter \n");
    }
    return 0;
}