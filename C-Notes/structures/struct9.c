#include<stdio.h>
#include<string.h>

/*Make a structure to store Bank Account Information of a customer of ABC bank.Also,make an alias for it.
*/

typedef struct BankAccount{
    int accountNo;
    char name[100];
} acc ;

int main(){
    acc acc1 = {123, "faraz"};
    acc acc2 = {132, "jawan"};
    acc acc3 = {142, "salman"};

        printf("acc no = %d\n",acc1.accountNo);
        printf("name = %s\n",acc1.name);

        printf("acc no = %d\n",acc2.accountNo);
        printf("name = %s\n",acc2.name);

        printf("acc no = %d\n",acc3.accountNo);
        printf("name = %s\n",acc3.name);

    return 0;
}