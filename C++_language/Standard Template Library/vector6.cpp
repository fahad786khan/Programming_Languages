#include <bits/stdc++.h>
//?Create a vector of size 10 which can store boolean values and popluate this vector with all 0s.
using namespace std;

int main()
{
    vector<int> number(10, 0);
    for (int i = 0; i < number.size(); i++)
    {
        cout << number[i] << endl;
    }
    return 0;
}