#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<char> vowels = {'a', 'e', 'i', 'o'};
    cout << "Size of vector vowels is:" << vowels.size() << "\n";
    cout << "Max Size of vector vowels is:" << vowels.max_size() << "\n";
    cout << "Capacity of vector vowels is:" << vowels.capacity() << "\n";
    vowels.push_back('u');
    cout << "Size of vector vowels is:" << vowels.size() << "\n";
    cout << "Max Size of vector vowels is:" << vowels.max_size() << "\n";
    cout << "Capacity of vector vowels is:" << vowels.capacity() << "\n";
    vowels.resize(3);
    for (int i = 0; i < vowels.size(); i++)
    {
        cout << vowels.at(i) << "  ";
    }
    return 0;
}