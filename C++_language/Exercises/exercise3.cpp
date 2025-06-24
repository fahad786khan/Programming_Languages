#include <iostream>
/*Write a program to convert a temperature from fahrenheit to celsius
*
*celsius = (fahrenheit - 32) / 1.8
*/
using namespace std;
int main(){
    cout << "Enter fahrenheit : ";
    double fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) / 1.8;
    cout << celsius << endl;
    return 0;
}