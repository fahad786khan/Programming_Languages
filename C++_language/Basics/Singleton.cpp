#include <iostream>

/*Singleton in C++ are nothing but the namespace.singleton class can just behave like namespace
Singleton in C++ are just a way to organize a bunch of global variables and static functions that sometimes may or may not act upon those
variables into one kind of organized block that is essentially under single namespace
Singletons use ful when we want functionality taht applies to some kind of global set of data that we just to potentionally repeatdly reuse*/

class Random
{
public:
    Random(const Random &) = delete;
    static Random &Get()
    {
        static Random instance;
        return instance;
    };

    static float Float() { return Get().IFloat(); } // IFloat means internal float function

private:
    float IFloat() { return m_RandomGenerator; }
    Random() {}
    float m_RandomGenerator = 0.5f;
};

int main()
{
    Random &instance = Random::Get();

    float number = Random::Float();

    std::cout << number << std::endl;
    std::cin.get();
}