#include<stdio.h>
#include<math.h>

/*Write a function that prints Assalamualikum if user is indian & Bonjour if the user is French*/
void assalamualikum();
void bonjour();


int main (){
    char ch;
    printf("enter f for french & i for indian : ");
    scanf("%c", &ch);

    if(ch == 'i'){
        assalamualikum();
    }else{
        bonjour();
    }
    return 0;
}

void assalamualikum(){
    printf("assalamualikum \n");
}

void bonjour(){
    printf("Bonjour \n");
}