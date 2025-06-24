#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    // Finding the length of the array
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "       " << n;
    return 0;
}