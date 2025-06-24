#include <iostream>
#include <array>

int main()
{
    int c;
    int arr[] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    std::cout << "The array is: ";
    for (auto i : arr) // use of auto keyword to assign arr data type to i
    {
        std::cout << i << " ";
        c++;
    }
    std::cout << "\nThe length of the given array is: " << c;

    return 0;
}