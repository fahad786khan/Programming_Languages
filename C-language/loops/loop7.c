#include<stdio.h>
#include<math.h>

/*Print the sum of first n natural numbers.
n=4 sum is 10
Also,print them in reverse.
*/
/*in for loop you can have multiple variable*/
int main(){
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    int sum = 0;
    for(int i=1, j=n; i<=n && j>=1; i++,j--){
        sum = sum + j;//sum += i
        printf("%d \n",j);
    }

    printf("sum is %d \n",sum);

    // for(int i=n;i>=1;i--){
    //     printf("%d \n",i);
    // }

    return 0;
}