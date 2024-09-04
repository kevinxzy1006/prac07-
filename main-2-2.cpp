#include <iostream>
#include "TV.h"

using namespace std;

int main()
{
    TV tv(200, 70.1);

    cout << "Power rating of the TV: " << tv.get_powerRating() << endl;
    cout << "Screen size of the tv: " << tv.getScreenSize() << endl;

    tv.setScreenSize(50);
    cout << "Screen size set to be: " << tv.getScreenSize() << endl;

    cout << "Power consumption of the tv: " << tv.getPowerConsumption() << endl;

    return 0;
}