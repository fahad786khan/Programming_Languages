#include<stdio.h>


//?enums are better than #define as
/*1. Enums can be declared in local scope
2. Enum names are automatically initialized by compiler*/

int main(){
enum Bool{False,True}var;//local to this main function only
var = False;
printf("%d\n",var);
return 0;
}