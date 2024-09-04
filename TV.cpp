#include "TV.h"

TV::TV() {}
TV::TV(int powerRating, double screenSize) : Appliance(powerRating), screenSize(screenSize) {}

// getter and setter
void TV::setScreenSize(double screenSize)
{
    this->screenSize = screenSize;
}
double TV::getScreenSize()
{
    return screenSize;
}

double TV::getPowerConsumption()
{
    return powerRating * (screenSize / 10);
}