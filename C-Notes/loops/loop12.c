#include<stdio.h>
#include<math.h>

/*  CONTINUE STATEMENT
        |
        |
 skip to next iteration

*/
/*Print all numbers from 1 to 10 except for 6*/
int main (){
    for(int i=1;i<=10;i++){
        if(i == 6){
            continue;//skip this and go on
        }
        printf("%d \n",i);
    }
    return 0;
}