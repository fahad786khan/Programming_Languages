#include <iostream>
#include <cmath>

//data loss occure when going from larger data type to smaller
using namespace std;
int main(){
    int number = 1'000'000;
    short another{number};
    cout << another << endl;
    return 0;
}