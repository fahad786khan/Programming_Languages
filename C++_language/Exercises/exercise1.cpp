#include <iostream>
/*  z = x + 10/ 3y
 *assume x is 10 and y is 5 then z will be 1.3
 */
int main()
{
    int x = 10;
    double y = 5;
    double z = (x + 10) / (3 * y);
    std::cout << z << std::endl;
    return 0;
}