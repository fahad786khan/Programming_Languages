#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {3, 5, 2, 7, 12, 19, 21};
    // v.erase(v.begin() + 2);
    v.erase(v.begin(), v.begin() + 3); // this will erase the range

    cout << "\nvector elements after erasing one element are:\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }
    v.clear();
    return 0;
}