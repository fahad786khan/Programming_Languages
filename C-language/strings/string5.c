#include<stdio.h>

/*String using Pointers
char *str = "Hello World";
store string in memory & the assigned address is stored in the
char pointer 'str'

a.char *str = "Hello World"; //can be reinitialized
        str = "Hello";
        str = "World";
b.char str[]= "Hello World";//cannot be reinitialized

*/

int main(){
char *canChange = "Hello World";
puts(canChange);
puts(canChange);
canChange = "Hello";
 
char cannotChange[] = "Hello World";
puts(cannotChange);
//cannotChange = "Hello";
// puts(cannotChange);

    return 0;
}