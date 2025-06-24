#include<stdio.h>
#include<string.h>


union abc{
    int a;
    char b;
    float c;
};
void main(){
    union abc u;
    union abc *ptr=&u;
    u.a=2;
    u.b= '9';
  //  u.c=6.8;

    printf("a value is:%d\n",ptr->a);
    printf("b value is:%c\n",ptr->b);
  //  printf("c value is:%f\n",ptr->c);

}