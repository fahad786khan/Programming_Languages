#include <bits/stdc++.h>

using namespace std;

/*Here the front, back ,at are member functions*/

int main()
{
    vector<int> numbers(5);
    cout << "Enter elements of vector:" << endl;
    for (int i = 0; i < numbers.size(); i++)
    {
        cin >> numbers[i];
    }
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers.at(i) << "\t";
    }
    // cout << "Element at index 0 is: " << numbers[0] << endl;
    //  cout << "Element at index 0 is: " << numbers.at(2) << endl;
    //  cout << "First element in numbers is: " << numbers.front() << endl;
    //  cout << "Last element in numbers is: " << numbers.back() << endl;
    //  numbers.at(1) = 24;
    //  cout << "element at index 1 is: " << numbers[1] << endl;
    return 0;
}