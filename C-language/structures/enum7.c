#include<stdio.h>

//All enum constant must be unique in their scope

int main(){
    enum point1{x=0,y=1,z=2};
    enum point2{x=4,p=4,q=13};//!ERROR
    printf("%d %d %d %d %d\n",x,y,z,p,q);
    return 0;
}