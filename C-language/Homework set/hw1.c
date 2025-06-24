#include <stdio.h>
/*
Write a program to calculate perimeter of rectangle.Take sides,a & b,from the user.and then write comments for programs a & b.
*/

int main()
{
    int a, b; // here a = length,b= width

    printf("Enter the a : ");
    scanf("%d", &a);

    printf("Enter the b : ");
    scanf("%d", &b);
    // perimeter of rectangle formula = 2 * (length+width)
    printf("perimeter of rectangle = %d\n", 2 * (a + b));
    return 0;
}