#include <iostream>
// 6) Refer to a class inside another class: If a class exists inside another class we can use the nesting class to refer the nested class using the scope resolution operator
// Use of scope resolution class inside another class.
using namespace std;

class outside
{
public:
    int x;
    class inside
    {
    public:
        int x;
        static int y;
        int foo();
    };
};
int outside::inside::y = 5;

int main()
{
    outside A;
    outside::inside B;
}
