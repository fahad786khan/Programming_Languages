#include<stdio.h>

//1.Write a program to calculate area of a square (side is given)

int main(){
    float side;
    printf("enter side");
    scanf("%f", &side);

    printf("area is : %f", side * side);
    return 0;
}