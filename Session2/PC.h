#ifndef PC_H
#define PC_H

#include <iostream>
using namespace std;

class PC
{
private:
int t_;
float ah_;
int p0_;

public:
PC();
PC(int, float, int);
~PC();

double GetTemperature();
double GetAbsoluteHumidity();
double GetPressure();
void SetTemperatureAbsoluteHumidityPressure (double t_, double ah_, double p0_);

void clear();

void print();
};

#endif