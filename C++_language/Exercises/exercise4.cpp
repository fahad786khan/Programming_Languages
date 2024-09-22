#include <iostream>
#include <cmath>
/*Write a program to calculate the area of a circle
*area fo circle = pi * r * r
*/
using namespace std;

int main(){
    const double pi = 3.14;
    cout << "Enter the radius: ";
    double radius;
    cin >> radius;
    double area = pi * pow(radius,2);
    cout << area << endl;
    return 0;
}