#include <bits/stdc++.h>
#include <iostream>
// 5) For namespace If a class having the same name exists inside two namespaces we can use the namespace name with the scope resolution operator to refer that class without any conflicts

using namespace std;
#define nline "\n"

// Global Declarations

string name1 = "faraz";
string favlang = "python";
string companyName = "kfc";

// You can also do the same thing in classes as we did in
// our struct example

class Developer
{
public:
    string name = "fahad";
    string favLang = "c++";
    string company = "subway";

    // Accessing Global Declarations

    Developer(string favlang, string company)
        : favLang(favlang), company(companyName)
    {
    }
};

int main()
{
    Developer obj = Developer("python", "kfc");
    cout << "favourite Language : " << obj.favLang << endl;
    cout << "company Name : " << obj.company << nline;
}
