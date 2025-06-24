#include <stdio.h>
#include <stdlib.h>

// rewind() is use dwhen you want to take cursor to beginning in file

int main()
{
    FILE *fp = NULL;
    char ch;
    char str[100];
    fp = fopen("abc.txt", "r+");
    if (fp == NULL)
    {
        printf("error");
        exit(0);
    }
    while (!feof(fp))
    {
        ch = fgetc(fp);

        printf("%c", ch);
    }
    rewind(fp);
    while (!feof(fp))
    {
        ch = fgetc(fp);

        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}