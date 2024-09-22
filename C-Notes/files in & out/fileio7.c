#include<stdio.h>

/*Write a program to weite all the odd numbers from 1 to n in a file*/

int main(){
    FILE *fptr;
    fptr = fopen("odd.txt","w");

    int n;
    printf("enter n : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i % 2 != 0){
            fprintf(fptr,"%d\n",i);
        }
    }

    fclose(fptr);
    return 0;
}