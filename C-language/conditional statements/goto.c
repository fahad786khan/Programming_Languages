#include<stdio.h>

/*
1.The C goto statement is a jump statement which is sometimes also referred to as an unconditional jump statement.
2.The goto statement can be used to jump from anywhere within a function.
3.Disadvantages of using goto statement 
-The use of the goto statement is highly discouraged as it makes the program logic very complex.
-The use of goto makes tracking the flow of the program very difficult.
-The use of goto makes the task of analyzing and verifying the correctness of programs(particularly those involving loops) very difficult.
-The use of goto can be simply avoided by using break and continue statements.
*/

void checkEvenOrNot(int num){//?example 1
        if(num % 2 == 0)
        goto even;
        else 
        goto odd;

        even:
            printf("%d is even", num);
            return;
        odd:
            printf("%d is odd",num);
} 

void printNumbers(){//?example 2
    int n = 1;
    label:
        printf("%d ",n);
        n++;
        if(n<= 10)
            goto label;
}

int main(){
    //int num = 45;
    //checkEvenOrNot(num);
    printNumbers();
    return 0;
}