#include <iostream>
#include <fstream>
using namespace std;

int main()
{
std::ifstream ifs;

ifs.open ("sensor.dat");

if (ifs.is_open()) {std::cout << "The file was properly opened\n\n";}
else {std::cout << "Error opening file";}

char c;

while (ifs.get(c))
{
std::cout << c;
}

ifs.close();

return 0;
}
