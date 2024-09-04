#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"

class House : public Appliance
{
private:
    Appliance **house;
    int numAppliances;
    int totalNum;

public:
    House();
    House(int numAppliances);
    ~House();

    bool addAppliance(Appliance *appliance);
    double getTotalPowerConsumption(); // return the total power consumption of all appliances in the House
};

#endif
