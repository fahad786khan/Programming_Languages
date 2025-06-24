#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*When dealing with remember to free then close the file*/

int main()
{
    char *str = malloc(20);
    strcpy(str, "Hello");
    printf("%s\n", str);

    FILE *f_ptr = fopen("text.txt", "w");
    fprintf(f_ptr, "%s", "Hello World");

    free(str);     // solution
    fclose(f_ptr); // solution
    return 0;
}