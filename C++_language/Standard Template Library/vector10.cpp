#include <bits/stdc++.h>
// Since crbegin and crend return constant reverse iterators, the elements cannot be modified through these iterators.
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    // Iterate over the vector in reverse order using crbegin and crend
    for (auto it = crbegin(vec); it != crend(vec); ++it)
    {
        cout << *it << ' ';
    }
    cout << endl;

    return 0;
}
