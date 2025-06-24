#include<stdio.h>

//We can assign values in anyorder.All unassigned names will get the value as value of previous name+1. 

int main(){
    enum point{x=6,y=43,t,z=986};
    printf("%d %d %d %d\n",x,y,z,t);
    return 0;
}