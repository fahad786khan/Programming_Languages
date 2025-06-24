#include <stdio.h>
#include <stdlib.h>
// Write a program to copy content of one file to other
int main(void)
{
    FILE *fptr1;
    FILE *fptr2;
    char fname1[50], fname2[50], ch;

    printf("Enter filename to open for reading: ");
    scanf("%s", fname1);

    // open one file for reading
    fptr1 = fopen(fname1, "r");
    if (fptr1 == NULL)
    {
        printf("%s file does not exist", fname1);
        exit(0);
    }
    printf("\n Enter filename to append the content: ");
    scanf("%s", fname2);
    // open another file for appending content
    fptr2 = fopen(fname2, "a");
    if (fptr2 == NULL)
    {
        printf("%s file does not exit..", fname2);
        exit(0);
    }
    // Read content from file
    while ((ch = fgetc(fptr1)) != EOF)
    {
        fputc(ch, fptr2);
    }
    printf("\nContent in %s appended to %s", fname1, fname2);
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}