#include <iostream>
#include "House.h"
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"

int main()
{
    House house(10);
    Appliance appliance(100);
    Fridge fridge(100, 200.1);
    TV tv(200, 70.1);
    Appliance *aptr;
    Appliance *fptr;
    Appliance *tptr;

    house.addAppliance(aptr);
    house.addAppliance(fptr);
    house.addAppliance(tptr);
    for (int i = 0; i < 8; i++)
    {
        house.addAppliance(aptr);
    }
    house.getTotalPowerConsumption();

    return 0;
}