#include <stdio.h>
#include <string.h>

/*   STRUCTURES
        |
a collection of values of different data types
There are 4 storage classes in structures
1.Auto
2.Extern
3.Static
4.Register
*/

/*Write a program to store  the data of 3 students*/
//?user defined
struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1;
    s1.roll = 132; // Dot (.)operator is used to access the members of a structure or union.when a normal variable of that structure or union is used
    s1.cgpa = 9.8;
    strcpy(s1.name, "faraz");

    printf("student name = %s \n", s1.name);
    printf("student roll no = %d \n", s1.roll);
    printf("student cgpa = %f \n", s1.cgpa);

    printf("\n");

    struct student s2;
    s2.roll = 131;
    s2.cgpa = 9.5;
    strcpy(s2.name, "anwar");

    printf("student name = %s \n", s2.name);
    printf("student roll no = %d \n", s2.roll);
    printf("student cgpa = %f \n", s2.cgpa);

    printf("\n");

    struct student s3;
    s3.roll = 120;
    s3.cgpa = 8.9;
    strcpy(s3.name, "umer");

    printf("student name = %s \n", s3.name);
    printf("student roll no = %d \n", s3.roll);
    printf("student cgpa = %f \n", s3.cgpa);

    // puts(s1.name);
    // puts(s1.roll);
    // puts(s1.cgpa);

    return 0;
}