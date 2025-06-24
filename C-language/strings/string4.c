#include<stdio.h>

/* String Functions
    gets(str) -->Dangerous & outdated               puts(str)
  input a string                                   output a string
(even multiword)

fgets(str,n,file) [you can put stdin in place of file]
 stops when n-1
 chars input or new
 line is entered

*/

int main(){
    char name[100];
    fgets(name,100, stdin);
    puts(name);

    return 0;
}