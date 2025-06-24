#include<stdio.h>
#include<math.h>
/*1.Write a program to check if a number is divisible by 2 or not. 
(number%2)
if the number gives us 0 then it is divisible by 2
else it is not divisible by 2 
*/
int main(){
    //even -> 1
    //odd -> 0
    int x;
    printf("enter a number : ");
    scanf("%d", &x);
    printf("%d \n", x % 2 == 0);
    return 0;

} 