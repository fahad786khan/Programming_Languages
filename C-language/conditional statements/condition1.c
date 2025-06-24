#include <stdio.h>

/* # if-else

if(condition){
   //?do something if TRUE
}
else{
   //?do something if FALSE
}
*/
int main()
{
    int age;
    printf("enter age : ");
    scanf("%d", &age);

    if (age > 18)
    {
        printf("adult \n");
        printf("they can vote \n");
        printf("they can drive \n ");
    }
    else
    {
        printf("not adult \n");
    }
    return 0;
}