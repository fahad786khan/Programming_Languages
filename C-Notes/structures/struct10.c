#include <stdio.h>
#pragma pack(1)
/* Structure Packing
 with out packing the value is more if you do not put the constant in incresing order of storage type*/
struct abc
{
    char a;
    char c;
    int b;
    // char c;
};

void main()
{
    struct abc s;
    printf("%ld\n", sizeof(s));
}