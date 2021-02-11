#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (){

std::string s1;

std::ifstream ifs;
ifs.open ("sensor2.csv");

if (ifs.is_open()) {std::cout << "I'm in!\n\n";}
else {std::cout << "Error opening file\n\n";}

std::getline(ifs,s1);

cout << s1;

ifs.close();

if (ifs.is_open()) {std::cout << "\nI'm stuck in there :(\n";}
else {std::cout << "\nAdios\n";}

return 0;
}
