#include <iostream>

// 2) To define a function outside a class.
// used to define a function outside a class
using namespace std;

class A
{
public:
    // Only declaration
    void fun();
};

// Definition outside class using ::
void A::fun() { cout << "fun() called"; }

int main()
{
    A a;
    a.fun();
    return 0;
}
