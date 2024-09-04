#include <iostream>
#include "Fridge.h"

using namespace std;

int main()
{
    Fridge fridge(100, 200.1);

    cout << "Power rating of the fridge: " << fridge.get_powerRating() << endl;
    cout << "Volume of the fridge: " << fridge.getVolume() << endl;

    fridge.setVolume(50);
    cout << "Volume set to be: " << fridge.getVolume() << endl;

    cout << "Power consumption of the fridge: " << fridge.getPowerConsumption() << endl;

    return 0;
}