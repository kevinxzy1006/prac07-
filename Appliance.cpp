#include "Appliance.h"

#include <iostream>
using namespace std;

Appliance::Appliance()
{
}

Appliance::Appliance(int powerRating) : powerRating(powerRating) {}

// getter and setter
int Appliance::get_powerRating()
{
    return powerRating;
}
void Appliance::set_powerRating(int powerRating)
{
    this->powerRating = powerRating;
}

bool Appliance::get_isOn()
{
    return isOn;
}

void Appliance::set_isOn(bool isOn)
{
    this->isOn = isOn;
}

// member function
void Appliance::turnOn()
{
    set_isOn(true);
    cout << "Appliance turned on." << endl;
}
void Appliance::turnOff()
{
    set_isOn(false);
    cout << "Appliance turned off." << endl;
}

double Appliance::getPowerConsumption()
{
    return 0.0;
}