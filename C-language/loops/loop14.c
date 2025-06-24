#include<stdio.h>
#include<math.h>

/*Print the factorial of a number n like 3! = 6*/

int main(){
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    
    int fact = 1;
    for(int i =1;i<=n;i++){
        fact = fact * i;
/*if the factorial is big than any data type can't store it hence it
gives us 0 as answer*/
    }
    printf("final factorial is %d \n", fact);
    return 0;
}
