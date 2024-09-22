#include <stdio.h>
#include <stdlib.h>

// Write a program to count number of lines, characters and words in a file

int main(void)
{
    FILE *fp;
    char fname[100];
    char ch;
    int characters, words, lines;
    printf("Enter source file name: ");
    scanf("%s", fname);
    fp = fopen(fname, "r");
    if (fp == NULL)
    {
        printf("\n Unable to open file\n");
        printf("Please check the file exists and have read privilege \n");
        exit(1);
    }
    //?Logic to count characters,words and lines
    characters = words = lines = 0;
    while ((ch = fgetc(fp)) != EOF)
    {
        // counting characters
        characters++;
        // counting lines
        if (ch == '\n' || ch == '\0')
            lines++;
        // counting words
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }

    // printfing file statistics
    printf("\n Total characters=%d", characters + 1);
    printf("\nTotal words =%d", words + 1);
    printf("\nTotal lines=%d", lines + 1);
    fclose(fp);
    return 0;
}