#include<iostream>
/*standard output stream [std::cout]
*stream insertion operator [<<]
*end of the line {std::endl}
*Using below expression we don't need to repeat it
*/
using namespace std;

int main(){
    int x = 43;
    double y = 34.41;
    cout << "x = " << x << endl
         << "y = " << y;
    return 0;
}