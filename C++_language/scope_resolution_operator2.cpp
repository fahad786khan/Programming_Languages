#include <iostream>
// 3) To access a class’s static variables.

// members when there is a local variable with same name
using namespace std;

class Test
{
    static int x;

public:
    static int y;

    // Local parameter 'x' hides class member
    // 'x', but we can access it using ::
    void func(int x)
    {
        // We can access class's static variable
        // even if there is a local variable
        cout << "Value of static x is " << Test::x;

        cout << "\nValue of local x is " << x;
    }
};

// In C++, static members must be explicitly defined
// like this
int Test::x = 1;
int Test::y = 2;

int main()
{
    Test obj;
    int x = 3;
    obj.func(x);

    cout << "\nTest::y = " << Test::y << endl;

    return 0;
}
