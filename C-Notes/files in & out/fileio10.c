#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    FILE *fp = NULL;
    char str[100];
    fp = fopen("abc.txt", "a");
    if (fp == NULL)
    {
        printf("error");
        exit(1);
    }

    printf("enter the content you want to append: ");
    gets(str);

    fputs(str, fp);

    printf("\nsuccessfully append");
    fclose(fp);
}