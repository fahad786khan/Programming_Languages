#include <bits/stdc++.h>

using namespace std;
//! error
int main()
{
    int arr[] = {2, 4, 6, 7, 9, 11};
    int n = sizeof(arr);
    //  int n = arr.length; //! error: request for member ‘length’ in ‘arr’, which is of non-class type ‘int [6]’
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[j] << "      ";
        }
    }
    cout << endl;
}