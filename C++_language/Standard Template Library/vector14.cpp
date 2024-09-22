#include <bits/stdc++.h>

using namespace std;

// Modifiers
int main()
{
    vector<int> v;
    int val;
    do
    {
        cout << "enter element(0 to exit):";
        cin >> val;
        v.push_back(val);

    } while (val);
    cout << "vector elements before pop back are:";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  " << endl;
    }
    v.pop_back();
    v.pop_back();
    cout << "vector elements after pop back are:";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  " << endl;
    }
}