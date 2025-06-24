#include <iostream>
using namespace std;

int main()
{
    // Create an array of size 4 with elements 9, 3, 12, and 7
    int arr[4] = {9, 3, 12, 7};

    // Calculate the sum of the array elements
    int sum = 0;
    for (int element : arr)
    {
        sum += element;
    }

    // Print the sum of the array
    cout << "Sum of the array: " << sum << endl;

    return 0;
}