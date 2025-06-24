#include<stdio.h>
#include<math.h>

/*           ARGUMENT V/S PARAMETER
values that are         | values in function declaration
passed in function call | & definition
                        |
used to send            |used to receive
value                   |value
                        |
actual parameter        |formal parameters
*/

void printTable(int n);

int main(){
    int n;
    printf("enter first number : ");
    scanf("%d",&n);
    
    printTable(n);//argument/actual parameter
    return 0;
}

void printTable(int n){//parameter/formal parameter
    for(int i=1;i<=10;i++){
        printf("%d \n",i*n);
    }

}