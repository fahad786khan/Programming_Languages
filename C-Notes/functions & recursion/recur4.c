#include<stdio.h>
#include<math.h>

/*Write a function to calculate percentage of a student from marks in scinece,math & arabic*/

int calcPercentage(int science, int math,int arabic);

int main (){
    int math = 98;
    int arabic = 100;
    int sci = 98;
    printf("percentage is : %d \n", calcPercentage(sci,math,arabic));
    return 0;
}

int calcPercentage(int science, int math, int arabic){
    return((science + math + arabic)/3); 
}

