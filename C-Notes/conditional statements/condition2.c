#include<stdio.h>
#include<math.h>

/*if(condition1){
}
else if(condition2){
}
else(condition3){
}
*/

int main(){
    int age;
    printf("enter age : ");
    scanf("%d", &age);

    if(age >= 18){
        printf("adult \n");
    }
    else if(age > 13 && age < 18){
        printf("teenager \n");
    }
    else{
        printf("child");
    }
    return 0;
}