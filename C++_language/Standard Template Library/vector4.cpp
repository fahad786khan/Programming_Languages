#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> numbers(10);
    fill(numbers.begin(), numbers.end(), 5);
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << endl;
    }

    return 0;
}