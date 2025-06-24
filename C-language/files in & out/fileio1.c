#include<stdio.h>

/*  FILE POINTER
FILE is a (hidden)structure that needs to be created for opening a file
A FILE ptr that points to this structure & is used to access the file.
*/
/*File Opening Modes
"r" open to read
"rb" open to read in binary
"w"  open to write
"wh" open to write in binary
"a" open to append means writing new data below old data 
*/
int main(){
    FILE *fptr;
    fptr = fopen("fileio2.c","w"); //To open a file
    if(fptr == NULL){
        printf("file doesn't exist\n");
    }else{
        fclose(fptr);
    }
    

    return 0;
}