#include <iostream>
#include <cstdlib>
#include <ctime>

/*Write a program for rolling dice
*[rand() % (maxValue - minValue +1)] + minValue
*/
using namespace std;

int main(){
   const int minValue = 1;
   const short maxValue = 6;
   
   srand(time(0));
   short first = (rand() % (maxValue - minValue + 1)) + minValue;
   short second = (rand() % (maxValue - minValue + 1)) + minValue;
   cout << first << ", " << second << endl; 
    return 0;
}