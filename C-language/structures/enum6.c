#include<stdio.h>

//Only integral values is allowed

int main(){
    enum point{x=3,y=6.4,z=10};//!ERROR
    printf("%d %d %d\n",x,y,z);
    return 0;
}