#include<stdio.h>
#include<math.h>

/*Keep taking numbers as input from user until enters an odd number.*/

int main(){
    int n;
    do{
    printf("enter number : ");
    scanf("%d",&n);
    printf("%d \n", n);
    
    if(n % 2 != 0){
        break;
    }

    }while(1);
    printf("thank you \n");
    return 0;
}