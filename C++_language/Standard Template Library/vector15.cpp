#include <bits/stdc++.h>
using namespace std;

// Modifiers
int main()
{
    vector<int> v = {2, 4, 6, 7, 12, 14};

    vector<int>::iterator it;

    it = v.begin();
    // it = v.begin() + 4; // you can add +2 to specify position from beginning

    v.insert(it, 3, 11);

    cout << "vector elements after insertion are:";

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }

    return 0;
}