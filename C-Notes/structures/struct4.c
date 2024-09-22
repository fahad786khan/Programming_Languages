#include<stdio.h>
#include<string.h>

/*Passing structure to function and structures goes call by value
//function prototype
void printInfo(struct student s1);
*/
struct student{
    char name[100];
    int roll;
    float cgpa;
};

void printInfo(struct student s1);

int main(){
    struct student s1 = {"fawaz",152,8.4};
    printInfo(s1);
    return 0;
}

void printInfo(struct student s1)
{
    printf("student information : \n");
    printf("student.name = %s\n",s1.name);
    printf("student.roll = %d\n",s1.roll);
    printf("student.cgpa = %f\n",s1.cgpa);
}
