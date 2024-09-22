#include<stdio.h>

/* Ask the user their firstName & print it back to them.Also try it with their fullName.*/

/*IMPORTANT
scanf()cannot input multi-word strings with spaces

Here,
gets()&puts()come into picture
*/

int main(){
    // char firstName[50];
    // scanf("%s", firstName);
    // printf("your name is %s \n",firstName);

 char fullName[100];
//  scanf("%s", fullName);
//  printf("your fullName is %s \n",fullName);
 char str[100];
 gets(str);
 puts(str);

    return 0;
}