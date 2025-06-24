#include<stdio.h>

int main(){

/*  BITWISE OPERATORS = special operators used in bit level programming
            (knowing binary is important for this topic)

    & = AND
    | = OR
    ^ = XOR
    ~ = NOT(it is also unary operator)
    <<  Left Shift
    >> Right Shift
*/

    int x = 6; // 6 = 0000 0110
    int y = 12; //12= 0000 1100
    int z = 0; // 10= 0000 1010

    z = x & y;
    printf("AND = %d\n",z);

    z = x | y;
    printf("OR = %d\n",z);

    z = ~10;
    printf("NOT = %d\n",z);

    z = x ^ y;
    printf("XOR = %d\n",z);

    z = x << 2;
    printf("SHIFT LEFT = %d\n",z);
 
    z = x >> 2;
    printf("SHIFT RIGHT = %d\n",z);

    return 0;
}