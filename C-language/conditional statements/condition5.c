#include<stdio.h>
#include<math.h>

/*Write a program to check if a student passed or failed
marks>30 is pass
marks<=30 is fail
*/

int main (){
    int marks;
    printf("enter marks(0-100): ");
    scanf("%d", &marks);

    // if(marks >= 0 && marks <= 30){
    //     printf("FAIL \n");
    // }else if(marks > 30 && marks <= 100){
    //     printf("PASSED \n");
    // }else {
    //     printf("wrong marks");
    // }

    marks <= 30 ? printf("FAIL \n") : printf("PASSED \n"); //ternary

    return 0;
}