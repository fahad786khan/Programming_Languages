#include <bits/stdc++.h>
/*In a vector if the capacity its full it double its size*/
using namespace std;
int main()
{
    vector<int> numbers;
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);
    numbers.push_back(24);
    numbers.push_back(27);
    numbers.push_back(37);

    cout << "size of numbers:" << numbers.size() << endl;
    cout << "size of numbers:" << numbers.capacity() << endl; // capacity is double from its size
}