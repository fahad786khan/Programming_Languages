#include<stdio.h>
#include<math.h>

/*Will this code:
a.give error
b.print "x is equal to 1" [ANSWER] because '=' is use to assign value
c.print"x is not equal to 1" 
*/

int main (){
    int x = 2;
    if(x=1){
        printf("x is equal to 1");
    }else {
        printf("x is not equal to 1");
    }
    return 0;
}