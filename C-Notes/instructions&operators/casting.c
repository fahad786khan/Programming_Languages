#include <stdio.h>

//?casting -->when we explicitly want to convert a larger data type to smaller or vice verse.this is also known as typecasting
//?it doesn't round off but remove the decimals and it's values
// double in C is a data type that is used to store high-precision floating-point data or numbers (up to 15 to 17 digits).

int main()
{
    int a = (int)1.9999; //*casting
    printf("%d \n", a);
    return 0;
}