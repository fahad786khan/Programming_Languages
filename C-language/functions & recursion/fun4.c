#include<stdio.h>
#include<math.h>

/*  PROPERTIES OF FUNCTION
-Execution always starts from main
-A function gets called directly or indirectly from main
-There can be multiple dunctions in a program
*/

 /*    Function types
     /             \
    /               \
   /                 \
  /                   \
Library                \
function                \
special functions        User-defined
inbuilt in C             declared & defined by programmer
scanf(),printf()
*/

/*Passing Arguments
void printHello();
void printtable(int n);
int sum(int a,int b);
*/

int sum(int x,int y);

int main(){
    int a, b;
    printf("enter first number : ");
    scanf("%d",&a);
    printf("enter second number : ");
    scanf("%d",&b);

    int s = sum(a,b);
    printf("sum is :%d \n",s);
    return 0;
}

int sum(int x,int y){
    return x + y;
}