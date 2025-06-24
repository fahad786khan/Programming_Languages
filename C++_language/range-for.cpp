#include <iostream>

using namespace std;

int main()
{

    // initialize array
    int arr[5] = {4, 0, 67, 9, 22};

    // ranged for loop to print array elements
    for (int var : arr)
    {
        cout << var << endl;
    }

    return 0;
}