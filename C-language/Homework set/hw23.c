#include <stdio.h>
/*
Write a program to replace lowercase letters with uppercase & vice verse in a string.
*/

/*
strlwr(string_name) is use to convert string to lower case letter
strupr(string_name) is use to convert string to Upper case letter

*/

void main()
{
    char s1[30];
    printf("enter string:");
    gets(s1);
    // strlwr(s1);
    strupr(s1);
    printf("string is:%s", s1);
}