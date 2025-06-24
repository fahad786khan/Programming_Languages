#include<stdio.h>
#include<math.h>

/*Multidimensional Arrays
2D arrays it is like matrix
int arr[][]={{1,2},{3,4}}; //Declare

//Access
arr[0][0]
arr[0][1]
arr[1][0]
arr[1][1]
*/

int main(){
    // 3 subject marks of 2 student
    int marks[2][3];
    marks[0][0] = 99;
    marks[0][1] = 98;
    marks[0][2] = 98;

    marks[1][0] = 97;
    marks[1][1] = 96;
    marks[1][2] = 99; 

    printf("%d \n",marks[1][0]);

    return 0;
}