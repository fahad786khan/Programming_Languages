#include<stdio.h>

/*LOOPS
                        TYPES
                       /  |   \
                      /   |    \
                 for_/   while  \_do while
 */
/*  for loop
for(initialisation;condition;updation){
    //do something
}
*/
int main(){
   //i is called iterator ; counter
    for(int i=10; i>=1; i = i-1){
        printf("%d \n",i);
    }
    return 0;
}
