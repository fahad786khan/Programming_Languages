#include<stdio.h>

/*EOF(END OF FILE)
fgetc return EOF to show that the file has ended
*/

int main(){
    FILE *fptr;
    fptr = fopen("text.txt","r");

    char ch;
    ch = fgetc(fptr);
    while(ch != EOF){
        printf("%c",ch);
        ch = fgetc(fptr);
    }
    printf("\n");
    return 0;
}