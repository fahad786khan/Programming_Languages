#include<stdio.h>
#include<string.h>

/*  Array Of Structures
struct student ECE[100];
struct student COE[50];
struct student IT[50];

*/
/*Initilizing of structures -> in a single line
struct student s1 = {"chaci",342,8.7};
struct student s2 = {"oddy",97,5.0};
struct student s3 = {"kaddu",151,7.5};
*/
struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    //struct student ece[100];
    // ece[0].roll = 12;
    // ece[0].cgpa = 7.2;
    // strcpy(ece[0].name,"Osman");

    // printf("student name = %s\n",ece[0].name);
    // printf("student roll no = %d\n",ece[0].roll);
    // printf("student cgpa = %f \n",ece[0].cgpa);

    struct student s1 = {"oddy",84,8.4};

    printf("student cgpa = %f\n",s1.cgpa);

    return 0;
}