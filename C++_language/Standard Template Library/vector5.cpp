#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> numbers = {1, 2, 4, 8, 16, 18, 25, 36, 48};
    vector<int> number2(numbers.begin(), numbers.end());
    for (int i = 0; i < number2.size(); i++)
    {
        cout << number2[i] << endl;
    }
    return 0;
}