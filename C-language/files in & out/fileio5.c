#include<stdio.h>

/*Make a program to read 5 intergers from a file*/

int main(){
    FILE *fptr;
    fptr = fopen("text.txt","r");

    int n;
    fscanf(fptr,"%d",&n);
    printf("nummber = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("nummber = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("nummber = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("nummber = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("nummber = %d\n",n);

    fclose(fptr);

    return 0;
}