#include <stdio.h>
int main(){
// MEMORY = an array of bytes within RAM(street)
// MEMORY BLOCK = a single unit(byte)within memory,used to hold some value(person)
// MEMORY ADDRESS = the address of where a memory bloak is located(house address)
 char a = 'X';
 double b = 'Y';
 short c = 'Z';

 printf("%d bytes\n", sizeof(a));//This operator show capacity of data type
 printf("%d bytes\n", sizeof(b));
 printf("%d bytes\n", sizeof(c));

 printf("%p\n", &a);//This show memory address
 printf("%p\n", &b);
 printf("%p\n", &c);
return 0;
}