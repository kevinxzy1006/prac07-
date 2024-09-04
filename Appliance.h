#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance
{
protected:
    int powerRating;
    bool isOn;

public:
    Appliance();
    Appliance(int powerRating);

    // getter and setter
    int get_powerRating();
    void set_powerRating(int powerRating);
    bool get_isOn();
    void set_isOn(bool isOn);

    // member function
    void turnOn();
    void turnOff();
    virtual double getPowerConsumption();
};

#endif