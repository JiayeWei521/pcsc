#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(int argc, char* argv[])
{
    std::vector<std::string> destinations;
    destinations.reserve(6);
    destinations.push_back("Paris");
    destinations.push_back("New York");
    destinations.push_back("Singapore");
    std::cout << "Length of vector is " << destinations.size() << "\n";
    std::cout << "Entries of vector are \n";
    for (int i=0; i<3; i++)
    {
        std::cout << destinations[i] << "\n";
    }
}