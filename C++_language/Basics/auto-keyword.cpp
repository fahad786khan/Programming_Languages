#include <bits/stdc++.h>

/*
Sometimes, it may be difficult to determine the type of the expression in such cases we can let the compiler figure out the type for us by using the auto type specifier.
auto - figures out the variable type automatically
good for
1. complex data types
2. figuring out output data
type of function
*/
using namespace std;

int main()
{
    auto x = 157;
    cout << typeid(x).name() << endl; // i

    auto u = 3.42;
    cout << typeid(u).name() << endl; // d

    auto *px = &x;
    cout << typeid(px).name() << endl; // Pi

    map<int, int> mp;
    auto it = mp.begin();
    cout << typeid(it).name() << endl; // St17_Rb_tree_iteratorISt4pairIKiiEE

    vector<int> vec = {1};
    for (auto elem : vec)
    {
        cout << typeid(elem).name() << endl; // i
    }

    auto y = 25.2;
    auto *py = new auto(y);
    cout << typeid(py).name() << endl; // Pd

    return 0;
}