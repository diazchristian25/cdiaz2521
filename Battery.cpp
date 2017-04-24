//
//  Battery.cpp
//  RobotPart
//
//  Created by Christian Diaz on 4/3/17.
//  Copyright © 2017 Christian Diaz. All rights reserved.
//

#include "Battery.h"
#include <iostream>
#include <iomanip>

using namespace std;

ostream& operator<<(ostream& os, const Battery& battery)
{
    return os << fixed << setprecision(2) << battery._name() << battery._model_number() "weight " << battery._weight() << "cost $ " << battery._cost() << " max power " << battery.max_energy() << " kilowatts" << " " << battery._description();
}
