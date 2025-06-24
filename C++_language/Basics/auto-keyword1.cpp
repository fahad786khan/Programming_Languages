#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

char *GetName()
{
    return "Oman";
}

class Device
{
};

class DeviceManager
{
private:
    std::unordered_map<std::string, std::vector<Device *>> m_Devices;

public:
    const std::unordered_map<std::string, std::vector<Device *>> &GetDevices() const
    {
        return m_Devices;
    }
};
int main()
{
    std::vector<std::string> strings;
    strings.push_back("Apple");
    strings.push_back("Orange");

    for (auto it = strings.begin(); it != strings.end(); it++)
    {
        std::cout << *it << std::endl;
    }
    DeviceManager dm;
    const std::unordered_map<std::string, std::vector<Device *>> &devices = dm.GetDevices(); // assigning this big type to devies

    const auto &devices = dm.GetDevices(); // auto help to make above code lot smaller

    std::cin.get();
}