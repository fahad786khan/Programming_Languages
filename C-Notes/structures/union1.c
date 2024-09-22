#include<stdio.h>
#include<string.h>

//? Union is not used now a days
/*1.All member's of the 'union' share the same memory location
2.size of union is equal to size of the largest member
3.A'union' stores a single value at a time fro all members
*/
union Data{
    int i;
    float f;
    char str[20];
};
void main(){
    union Data data;
    data.i = 10;
    data.f = 220.5;
    strcpy(data.str,"C Programming");
    printf("data.i:%d\n",data.i);
    printf("fata.f:%f\n",data.f);
    printf("data.str:%s\n",data.str);

}