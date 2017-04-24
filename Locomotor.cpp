//
//  Locomotor.cpp
//  RobotPart
//
//  Created by Christian Diaz on 4/3/17.
//  Copyright © 2017 Christian Diaz. All rights reserved.
//

#include "Locomotor.h"

int Locomotor::max_power() const
{
    return max_power_consumed;
}

ostream& operator<<(ostream& os, const Locomotor& locomotor)
{
    return os << fixed << setprecision(2) << locomotor._name() << locomotor._model_number() "weight " << locomotor._weight() << "cost $ " << locomotor._cost() << " max power " << locomotor.max_power() << " watts" << " " << locomotor._description();
}
