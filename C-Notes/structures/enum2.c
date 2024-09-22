#include<stdio.h>

enum Size {
Small = 2,
Medium = 5,
Large = 9,
ExtraLarge = 12
};


int main()
{
enum Size shoeSize1 = Small;//enum variable
enum Size shoeSize2 = Medium;
enum Size shoeSize3 = Large;
enum Size shoeSize4 = ExtraLarge;

printf("%d\n",shoeSize1);
printf("%d\n",shoeSize2);
printf("%d\n",shoeSize3);
printf("%d\n",shoeSize4);


return 0;
}