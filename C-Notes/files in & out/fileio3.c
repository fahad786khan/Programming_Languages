#include<stdio.h>

/*  Read & Write a char
fgetc(fptr)
fputc('A',fptr)
*/

int main(){
    FILE *fptr;
    fptr = fopen("text.txt","w");

    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    
    fputc('M',fptr);
    fputc('A',fptr);
    fputc('N',fptr);
    fputc('G',fptr);
    fputc('O',fptr);
    return 0;
}