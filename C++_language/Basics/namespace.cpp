#include <iostream>
#include <string>
#include <algorithm>

// todo : more research has to be done on namespaces en.cppreference.com/cpp/langauge/namespace
namespace apple
{
    void print(const char *text)
    {
        std::cout << text << std::endl;
    }
}

namespace orange
{
    void print(const char *text)
    {
        std::string temp = text;
        std::reverse(temp.begin(), temp.end());
        std::cout << temp << std::endl;
    }
}

int main()
{
    // namespace a = apple;// you can use alias for namespaces
    // a::print("Hello");
    apple::print("hello");
    std::cin.get();
}