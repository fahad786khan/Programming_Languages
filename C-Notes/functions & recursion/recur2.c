#include<stdio.h>
#include<math.h>

//Factorial of n

int fact(int n);

int main(){
    printf("factorial is : %d \n",fact(4));
    return 0;
}

int fact(int n){
     if(n == 0){
         return 1;
     }
   /* printf("calculate fact of n : %d \n", n); //system crash & show
    segementation fault [this is called stackoverflow]*/
    int factNm1 = fact(n-1);
    int factN = factNm1 * n;
    return factN;
}