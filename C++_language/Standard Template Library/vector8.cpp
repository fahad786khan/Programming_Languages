#include <bits/stdc++.h>

using namespace std;
// this comes under Member functions iterators
int main()
{
    vector<int> v = {1, 2, 3, 4, 0, 45, 54, 67};
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++) // by using this you don't need to put size of vector and can edit the vector
    {
        cout << *it << " ";
    }
    return 0;
}