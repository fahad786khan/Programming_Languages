#include<stdio.h>
#include<math.h>

/*Print the table of a number input by the user n=15*/

int main(){
    int n;
    printf("enter number : ");
    scanf("%d",&n);

    for(int i=1;i<=10;i++){
        printf("%d \n",n*i);
    }
    return 0;
}