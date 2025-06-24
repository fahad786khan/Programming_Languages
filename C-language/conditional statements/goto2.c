#include <stdio.h>

/*
1.Used to transfer program control to a predefined label
2.Its use is avoided since it causes confusion for the fellow programmers in understanding the code.
3.Goto statement is preferable when we need to break multiple loops using a single statement at the same time.
*/
void main()
{
    // label:
    //     printf("we are inside label\n");
    //     goto end;
    // printf("hellow world");//In terminal this doesn't get print causing confusion
    // goto label;
    // end:
    //     printf("we are at end\n");
    //?to break a loop
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number. enter 0 to exit\n");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }
    end:
        printf("program end\n");
}