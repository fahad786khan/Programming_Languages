#include<stdio.h>
#include<string.h>

/*      typedef Keyword   
              |
    used to create alias[nicename] for data types*/
//user defined
typedef struct computerengineeringstudent{
    int roll;
    float cgpa;
    char name[100];
} coe ;

int main(){
    coe s1;
    s1.roll = 541;
    s1.cgpa = 8.7;
    strcpy(s1.name,"fawaz");

    printf("student name is : %s\n",s1.name);
    return 0;
}