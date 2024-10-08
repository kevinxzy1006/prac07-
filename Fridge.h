#ifndef FRIDGE_H
#define FRIDGE_H

#include "Appliance.h"

class Fridge : public Appliance
{
private:
    double volume; // in litres

public:
    Fridge();
    Fridge(int powerRating, double volume);

    // getter and setter
    void setVolume(double volume);
    double getVolume();

    virtual double getPowerConsumption();
};

#endif