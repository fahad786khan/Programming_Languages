#include <iostream>
/*
In C++, the Scope Resolution operator is ::. It is used for the following purposes.

1) To access a global variable when there is a local variable with same name:
*/
//?C++ program to show that we can access a global variable
// using scope resolution operator :: when there is a local variable with same name
using namespace std;

int x; // Global x

int main()
{
    int x = 10; // Local x
    cout << "Value of global x is " << ::x;
    cout << "\nValue of local x is " << x << endl;
    return 0;
}
