#include <stdio.h>

/*1. enum = a user defined type of named integer identifiers helps to make a program more readable.
2. Enums are used to give names to constants, which makes the code easier to read and maintain and easier to handle the program .
3. Use enums when you have values that you know aren't going to change, like month days, days, colors,etc.
4.Enum with in enum is allowed*/


//*enums can also be declaraed outside of main function

enum Day{Sun=1, Mon=2, Tues=3, Wed = 4, Thurs=5, Fri=6, Sat=7};//enum constants

//here enums are treaded as integers not strings so by default first item get 0 as value but you can change the value

int main()
{
    enum Day today = Sat;
   // enum Day tomorrow = bin;//!ERROR

    //printf("%d\n",today);

    if(today == Sun || today == Sat){
        printf("it's weekend!\n");
    }else{
        printf("I have to work today :(\n");

    }
    return 0;
}