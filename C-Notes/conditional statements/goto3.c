#include <stdio.h>

/*
2.Specially goto statement use for two terms
To create a loop
To break a loop
*/

//?to create loop
// void main(){
//     int num,i=1;
//     printf("Enter the number whose table you want to print : ");
//     scanf("%d",&num);
//     table:
//         printf("%d * %d = %d\n",num,i,num*i);
//         i++;
//     if(i<=10)
//     goto table;
// }

//?to break a loop
void main(){
    int i,j;
    for(i=1;i<10;i++){
        for(j=1;j<i;j++){
            printf("%d ",j);
            if(j==6)
            goto label;
        }
        printf("\n");
    }
    label:
        printf("\nloop broken\n");

}