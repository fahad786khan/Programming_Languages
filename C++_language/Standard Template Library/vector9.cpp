#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {1, 4, 6, 8, 13, 35, 67};
    vector<int>::reverse_iterator rit;
    for (rit = v.rbegin(); rit != v.rend(); rit++)
    {
        cout << *rit << " ";
    }
    return 0;
}