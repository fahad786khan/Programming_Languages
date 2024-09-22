#include <stdio.h>

/* Predefined macros
 The preprocessor also defines a number of symbolic constants you can use,
 identified by the 2 underscores before and after the name*/

int main()
{
    printf("date :%s", __DATE__);

    printf("\ntime :%s", __TIME__);

    printf("\nfile :%s", __FILE__);

    printf("\nline :%d", __LINE__);

    printf("\nANSI :%d\n", __STDC__);

    return 0;
}