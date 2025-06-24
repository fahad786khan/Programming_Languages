#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("text.txt","a");

    // int ch; //To read a file
    // fscanf(fptr,"%d",&ch);
    // printf("character = %d\n",ch);
    // fscanf(fptr,"%d",&ch);
    // printf("character = %d\n",ch);
    // fscanf(fptr,"%d",&ch);
    // printf("character = %d\n",ch);

    fprintf(fptr,"%c",'E');//to write in a file
    fprintf(fptr,"%c",'N');
    fprintf(fptr,"%c",'D');
    
    
    fclose(fptr);
    return 0;
}

