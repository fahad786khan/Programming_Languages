#include <stdio.h>
#include <windows.h>

int main()
{
    int h, m, s;   // hour:h , minute:m ,second:s
    int delay = 1; // we add delay of 1 miliseconds touse it in the function sleep
    printf("Set time :\n");
    scanf("%d%d%d", &h, &m, &s);
    if (h > 12 || m > 60 || s > 60)
    {
        printf("ERROR ! \n");
        exit(0);
    }
    while (1)
    {
        // this is an infinite loop and everything inside will repeat itself to infinity
        s++;
        if (s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            m = 0;
        }
        if (h > 12)
        {
            h = 1;
        }
        printf("\n Clock :");
        printf("%02d:%02d:%02d", h, m, s); // this writes out time in this formate 00:00:00
        sleep(delay);                      // the function sleep down the while loop and make it more like a real clock
        system("cls");                     // this clear the screen
    }
}