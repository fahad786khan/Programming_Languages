#include<stdio.h>

/*  STRINGS
        |
A character array terminated by a '\0'(null charater) null character denotes string termination
-strings shows that they are representing something like word*/

/*String Formate Specifier -> %s*/

int main(){
    //char name[] = {'F','A','H','A','D','\0'};
    char name[] = "FAHAD";// if written like this then compiler add \0 by itself
    char class[] = "APNA COLLEGE";
    printf("%s \n",name);

    return 0;
}