#include <iostream>
#include <map>
#include <string>
#include <vector>
// Illustration of range-for loop
/*It executes a for loop over a range. Used as a more readable equivalent to the traditional for loop operating over a range of values, such as all elements in a container/array.
for ( range_declaration : range_expression ){
    loop_statement
    }
Parameters :range_declaration :a declaration of a named variable, whose type is the type of the element of the sequence represented by
range_expression, or a reference to that type.Often uses the auto specifier for automatic type deduction.
range_expression :any expression that represents a suitable sequenceor a braced-init-list.
loop_statement :any statement, typically a compound statement, which is the body of the loop.
*/
using namespace std;

// Driver
int main()
{
    // Iterating over whole array
    vector<int> v = {0, 1, 2, 3, 4, 5}; //?vector are just dynamic arrray
    for (auto i : v)
        cout << i << ' ';

    cout << '\n';

    // the initializer may be a braced-init-list
    for (int n : {0, 1, 2, 3, 4, 5})
        cout << n << ' ';

    cout << '\n';

    // Iterating over array
    int a[] = {0, 1, 2, 3, 4, 5};
    for (int n : a)
        cout << n << ' ';

    cout << '\n';

    // Just running a loop for every array
    // element
    for (int n : a)
        cout << "In loop" << ' ';

    cout << '\n';

    // Printing string characters
    string str = "Geeks";
    for (char c : str)
        cout << c << ' ';

    cout << '\n';

    // Printing keys and values of a map
    map<int, int> MAP({{1, 1}, {2, 2}, {3, 3}});
    for (auto i : MAP)
        cout << '{' << i.first << ", " << i.second << "}\n";
}