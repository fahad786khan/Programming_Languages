#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    int a = 10, b = 20;
    auto sum = a + b;
    cout << "Sum  = " << sum << endl;
    cout << typeid(sum).name() << endl;

    double c = 1.2, d = 2.4;
    auto sum_d = c + d;
    cout << "Sum  = " << sum_d << endl;
    cout << typeid(sum_d).name() << endl;

    /*As a declarating can involve only a single base type, the initializers for all the variables in the declaration must have types that are consistent with
    Each other:*/
    auto i = 0, *p = &i; // i is int and p is a pointer to int

    auto sz = 5, pi = 3.14; //! error inconsistent types for sz and pi

    return 0;
}