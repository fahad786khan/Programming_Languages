#include <stdio.h>
#define PI 3.14

/* # -> This is called preprocessor ,it include the mentioned file into source file while compiling*/

// include and define are preprocessor
/*      |
constants cannot be changed & can be define first
*/
int main()
{
    const float pi = 3.14;
    //   pi = 7.2;
    //   printf("%f\n",pi);
    printf("%f\n", PI);
    return 0;
}