#include "PC.h"

PC::PC(){
t_ = 293;
ah_ = 5e-3;
p0_ = 100000;
}

S

void PC::print(){
printf("\nValues: \nTemperature = %d K \nHumidity = %E kg water / kg dry air \nPressure = %d Pa \n", t_, ah_, p0_);
}

PC::~PC(){}