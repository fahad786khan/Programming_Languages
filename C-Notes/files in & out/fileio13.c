#include <stdio.h>
#include <stdlib.h>

// ftell()

int main()
{
    FILE *fp = NULL;
    char ch;
    char str[200];
    fp = fopen("abc.txt", "r");
    if (fp == NULL)
    {
        printf("error");
        exit(0);
    }
    printf("%d", ftell(fp));

    fscanf(fp, "%s", str);
    printf("%s", str);

    fseek(fp, 0, SEEK_END);

    printf("\n%d", ftell(fp)); // location of pointer after

    fclose(fp);
    return 0;
}