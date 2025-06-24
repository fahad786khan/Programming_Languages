#include <stdio.h>

/*
1.The goto statement allows us to transfer control of the program to the specified label.
2.The label is a user-defined identifier that indicates the target statement.When the foto statement is encountered, the control of the program jumps to label: and starts executing the code.
3.The use of goto statement may lead to code that is buggy and hard to follow.*/

void main(){
    const int maxInput = 100;
    int i;
    double number,average,sum = 0.0;

    for(i = 1;i <= maxInput;++i){
        printf("%d.Enter a number: ",i);
        scanf("%lf",&number);
    

    //go to jump if the user enters a negative number
    if(number < 0){
        goto jump;
    }
    sum += number;
    }
    jump:
        average = sum / (i - 1);
        printf("Sum = %.2f\n",sum);
        printf("Average = %.2f",average);
}