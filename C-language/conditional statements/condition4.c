#include<stdio.h>
#include<math.h>

/* SWITCH
switch(number){
case C1://do something
    break;
case C2://do something
    break;
default://do something
}
*/
/*Switch properties
a.cases can be in any order

b.Nested switch (switch inside switch)are allowed
*/

int main(){
   char day; //m-mon; t-tues; w-wed; T;f;s;S
   printf("enter day(1-7): ");
   scanf("%s", &day);

   switch(day){
        case 'm' : printf("monday \n");
                break;
        case 't' : printf("tuesday \n");
                break;
        case 'w' : printf("wednesday \n");
                break;
        case 'T' : printf("thursday \n");
                break;        
        case 'f' : printf("friday \n");
                break;
        case 's' : printf("saturday \n");
                break;
        case 'S' : printf("sunday \n");
                break;
        default : printf("not a valid day! \n");
   }
    return 0;
}