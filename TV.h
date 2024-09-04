#ifndef TV_H
#define TV_H

#include "Appliance.h"

class TV : public Appliance
{
private:
    double screenSize; // screen size in inches

public:
    TV();
    TV(int powerRating, double screenSize);

    // getter and setter
    void setScreenSize(double screenSize);
    double getScreenSize();

    virtual double getPowerConsumption();
};

#endif