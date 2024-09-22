#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {1, 3, 5, 7, 9}; // also remove elements

    v.resize(10);
    v.reserve(100);
    if (v.empty()) // if you comment the v.resize this will be shown
    {
        cout << "no elements in vector v." << endl;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << "  ";
    }
    cout << "\nsize of vector v is:" << v.size() << "\n";
    cout << "capacity of vector v is:" << v.capacity() << "\n";
    return 0;
}