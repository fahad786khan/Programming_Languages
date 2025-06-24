#include <stdio.h>
#include <stdlib.h>

// fseek()

int main()
{
    FILE *fp = NULL;
    char ch;
    char str[200];
    fp = fopen("abc.txt", "r+");
    if (fp == NULL)
    {
        printf("error");
        exit(0);
    }
    fseek(fp, 0, SEEK_SET);
    ch = fgetc(fp);
    printf("%c", ch);

    fseek(fp, -3, SEEK_CUR);
    ch = fgetc(fp);
    printf("%c", ch);

    fseek(fp, 0, SEEK_END);
    ch = fgetc(fp);
    printf("%c", ch);

    fclose(fp);
    return 0;
}