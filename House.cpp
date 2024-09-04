#include "House.h"
#include <iostream>

using namespace std;

House::House() : numAppliances(0), house(nullptr), totalNum(0) {}
House::House(int numAppliances) : numAppliances(numAppliances), totalNum(0)
{
    house = new Appliance *[numAppliances];
}

House::~House()
{
    for (int i = 0; i < totalNum; i++)
    {
        delete[] house[i];
    }
    delete[] house;
}

bool House::addAppliance(Appliance *appliance)
{
    if (totalNum < numAppliances)
    {
        house[totalNum] = appliance;
        totalNum++;
        cout << "Appliance added successfully!" << endl;
        return true;
    }
    else
    {
        cout << "The house is full!" << endl;
        return false;
    }
}

double House::getTotalPowerConsumption()
{
    double totalPowerConsumption = 0;
    for (int i = 0; i < numAppliances; i++)
    {
        totalPowerConsumption += house[i]->getPowerConsumption();
    }

    return totalPowerConsumption;
}