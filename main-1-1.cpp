#include <iostream>
#include "Appliance.h"

using namespace std;

int main()
{
    Appliance appliance(100);
    int power_rate = appliance.get_powerRating();
    cout << "Power rating of the appliance: " << appliance.get_powerRating() << endl;
    appliance.set_powerRating(10);
    cout << "Power rating changed to be: " << appliance.get_powerRating() << endl;

    bool on = appliance.get_powerRating();
    if (on != true)
    {
        appliance.turnOn();
    }
    else
    {
        cout << "Appliance is on." << endl;
    }

    appliance.turnOff();

    double PowerConsumption = appliance.getPowerConsumption();
    cout << "Power Consumption: " << PowerConsumption << endl;

    return 0;
}