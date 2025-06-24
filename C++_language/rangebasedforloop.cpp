#include <iostream>
#include <vector>
using namespace std;
//?find wheather the given number is divisiable by either 5 or 3
int main()
{
    vector<int> num = {3, 6, 15, 17, 18, 21, 55, 100, 200, 300};
    int count = 0;
    for (auto n : num)
    {
        if (n % 3 == 0 || n % 5 == 0)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}