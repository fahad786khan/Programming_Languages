#include <stdio.h>
#include <stdlib.h>

/*
1.Registers are faster than memory to access,so the variables which are most frequently used in a C program can be out in register keyword.The keyword register hints to compiler that a given
variable can be put in a register.It's compiler's shoice to put it in a register or not.Generally,compilers themselves do optimizations and put the variables in register.
2.It you use & operator with a register variable then compiler may give an error or warning(depending upon the compiler you are using),because when we say a variable is a register,it may be
stored in a register instead of memory and accessing address of a register is invalid.try below program
3.register keyword can be used with pointe variables.Obviously,a register can have address of a memory location.Ther would not be any problem with the below program
4.Register is a storage class,and C doesn't allow multiple storage class specifiers for a variable.So,register can not be used with static.
*/

int main()
{
    // register int i = 10;//!ERROR
    int i = 10;
    register int *a = &i;
    printf("%d", *a);
    return 0;
}

//?There is no limit on number of register variables in a C program,but the point is compiler may put some varibales in register and some not.