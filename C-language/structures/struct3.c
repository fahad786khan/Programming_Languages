#include<stdio.h>
#include<string.h>

/*  Pointers to Structures 
    struct student s1;
    struct student *ptr;
    ptr = &s1;
*/
/* Arrow Pointer
(*ptr).roll same ptr->roll help in clear visuality and used when a pointer to that structure or union is used
*/
struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1 = {"oddy",84,8.4};

    printf("student cgpa = %f\n",s1.cgpa);

    struct student *ptr = &s1;

    printf("student.roll with ptr = %d\n",(*ptr).roll);

     printf("student->roll with ptr = %d\n",ptr->roll);
     printf("student->name with ptr = %s\n",ptr->name);
     printf("student->cgpa with ptr = %f\n",ptr->cgpa);
    return 0;
}