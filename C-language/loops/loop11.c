#include<stdio.h>
#include<math.h>

/*Keep taking numbers as input from user until user enters a number which is multiple of 7
 */
int main(){
    int n;
    do{
        printf("enter number : ");
        scanf("%d", & n);
        printf("%d \n",n);

        if(n % 7 == 0) { // multiple of 7
            break;//break remove you from nested loops
        }
    }while (1);
    printf("thank you \n");
    return 0;
}