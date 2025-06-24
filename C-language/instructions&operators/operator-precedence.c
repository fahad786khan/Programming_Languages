#include <stdio.h>
#include <math.h>

/*In maths we have B()DMAS but in c language there is a operator precedence so we utilize *,/,% then +,- then =

Precedence of operators comes into picture when in an expression we need to decide which operator will be evaluated first.
Operator with higher precedence will be evaluated first.
*/

//?   OPERATOR PRECEDENCE TABLE
/*
| Precedence | Operator                                        | Category/Type        | Associativity |
| ---------- | ----------------------------------------------- | -------------------- | ------------- |
| 1          | () [] . ->  ++ -- (postfix increment/decrement) | parenthesis/brackets | left to right |
| 2          | ++ -- + - ! ~ (type) * & sizeof                 | unary                | right to left |
| 3          | * / %                                           | multiplicative       | left to right |
| 5          | + -                                             | additive             | left to right |
| 6          | << >>                                           | bitwise shift        | left to right |
| 4          | < <= > >=                                       | relational           | left to right |
| 7          | == !=                                           | equality             | left to right |
| 8          | &                                               | bitwise AND          | left to right |
| 9          | ^                                               | bitwise XOR          | left to right |
| 10         | |                                               | bitwise OR           | left to right |
| 11         | &&                                              | logical AND          | left to right |
| 12         | ||                                              | logical OR           | left to right |
| 13         | ? :                                             | conditional/Ternary  | right to left |
| 14         | = += -= *= /= %= <<= >>= &= ^=  |=              | Assignment           | right to left |
| 15         | ,                                               | comma                | left to right |
*/

int main()
{
    //    int a = 4 + 9 * 10;// answer =94
    //    int a = 4 * 3 / 6 * 2;// answer =4
    //    int a = 5 * 2 - 2 *3;// answer = 4
    //    int a = 5*(2 / 2) * 3;// answer = 15
    int a = 5 + 2 / 2 * 3; // answer = 8
    printf("%d \n", a);

    return 0;
}