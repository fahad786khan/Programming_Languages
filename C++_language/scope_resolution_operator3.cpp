#include <iostream>
// 4) In case of multiple Inheritance: If the same variable name exists in two ancestor classes, we can use scope resolution operator to distinguish.

// Use of scope resolution operator in multiple inheritance.
using namespace std;

class A
{
protected:
    int x;

public:
    A() { x = 10; }
};

class B
{
protected:
    int x;

public:
    B() { x = 20; }
};

class C : public A, public B
{
public:
    void fun()
    {
        cout << "A's x is " << A::x;
        cout << "\nB's x is " << B::x << endl;
    }
};

int main()
{
    C c;
    c.fun();
    return 0;
}
