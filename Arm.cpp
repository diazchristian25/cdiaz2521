//
//  Arm.cpp
//  RobotPart
//
//  Created by Christian Diaz on 4/3/17.
//  Copyright © 2017 Christian Diaz. All rights reserved.
//

#include "Arm.h"
#include <iostream>
#include <string>

using namespace std;

int Arm::max_power() const
{
    return max_power_consumed;
}

ostream& operator<<(ostream& os, const Arm& arm)
{
    return os << fixed << setprecision(2) << arm._name() << arm._model_number() "weight " << arm._weight() << "cost $ " << arm._cost() << " max power " << arm.max_power() << " watts" << " " << arm._description();
}
