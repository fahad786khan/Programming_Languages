#include <stdio.h>
// you can change the name of any file by using rename()
int main()
{
    FILE *fptr;
    fptr = fopen("first.txt", "w");
    // Old file name
    char old_name[] = "first.txt";

    // Any string
    char new_name[] = "second.txt";

    int value;

    // File name is changed here
    value = rename(old_name, new_name);

    // Print the result
    if (!value)
    {
        printf("%s", "File name changed successfully\n");
    }
    else
    {
        printf("Error");
    }
    return 0;
}