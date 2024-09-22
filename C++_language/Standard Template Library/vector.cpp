#include <iostream>
#include <vector>
using namespace std;
/*vector is like a class or a container
1.Vector are dynamic array
2.Vwectors are sequence container
3.Vector can do bound checking*/
int main()
{
    vector<int> numbers;
    numbers.push_back(5);
    numbers.push_back(32);

    cout << numbers[1] << endl;
    cout << numbers[5] << endl; // it gives 0 as there is no element at that position
    return 0;
}