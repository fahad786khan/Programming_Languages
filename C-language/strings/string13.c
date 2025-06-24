#include <stdio.h>
#include <string.h>

/*
strev(string_name) is used to reverse the string
*/

void main()
{
    char str[30];
    printf("enter string:");
    gets(str);
    strrev(str);
    printf("string is:%s", str);
}