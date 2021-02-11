#include <iostream>
#include <fstream>
using namespace std;

int main()
{
std::ifstream ifs;

ifs.open ("test.txt");

if (ifs.is_open()) {std::cout << "I'm in!\n\n";}
else {std::cout << "Error opening file\n\n";}

char c;

while (ifs.get(c))
{
std::cout << c;
}

ifs.close();

if (ifs.is_open()) {std::cout << "\nThe file is still open\n";}
else {std::cout << "\nFile properly closed\n";}

return 0;
}