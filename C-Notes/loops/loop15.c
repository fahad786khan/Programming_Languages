#include<stdio.h>
#include<math.h>
  
/*Print reverse of the table for a number n.*/

int main (){
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    for(int i =10;i>=1;i--){
        printf("%d \n",n*i);
    }
    return 0;
}