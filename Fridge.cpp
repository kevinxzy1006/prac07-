#include "Fridge.h"

Fridge::Fridge() {}
Fridge::Fridge(int powerRating, double volume) : Appliance(powerRating), volume(volume) {}

double Fridge::getVolume()
{
    return volume;
}
void Fridge::setVolume(double volume)
{
    this->volume = volume;
}

double Fridge::getPowerConsumption()
{
    return powerRating * 24 * (volume / 100);
}