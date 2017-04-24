//
//  Torso.cpp
//  RobotPart
//
//  Created by Christian Diaz on 4/3/17.
//  Copyright © 2017 Christian Diaz. All rights reserved.
//

#include "Torso.h"
#include <iostream>

using namespace std;

int Torso::max_batteries() const
{
    return battery_compartments;
}

ostream& operator<<(ostream& os, const Torso& torso)
{
    return os << fixed << setprecision(2) << torso._name() << torso._model_number() "weight " << torso._weight() << "cost $ " << torso._cost() << ", " << torso.max_batteries() << " battery max" << " " << torso._description();
}
