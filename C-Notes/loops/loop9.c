#include<stdio.h>
#include<math.h>

/*BREAK STATEMENT
        |
        |
exit the loop

*/

int main(){
    for(int i=1;i<=5;i++){
        if(i==3){
            break;
        }
        printf("%d \n", i);
    }
    printf("end \n");
    return 0;
}