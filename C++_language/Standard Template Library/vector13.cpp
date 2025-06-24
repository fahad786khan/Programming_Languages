#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;

    v.resize(10, 43);
    v.reserve(100);
    if (v.empty())
    {
        cout << "no elements in vector v." << endl;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << "  ";
    }
    cout << "\nsize of vector v is:" << v.size() << "\n";
    cout << "capacity of vector v is:" << v.capacity() << "\n";
    v.shrink_to_fit();
    cout << "capacity of vector v after shrink_to_fit is:" << v.capacity() << "\n";
    return 0;
}