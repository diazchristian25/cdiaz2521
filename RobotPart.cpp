//
//  RobotPart.cpp
//  RobotPart
//
//  Created by Christian Diaz on 4/2/17.
//  Copyright © 2017 Christian Diaz. All rights reserved.
//

#include <string>
#include "RobotPart.h"

string RobotPart::_name() const
{
    return name;
}

int RobotPart::_model_number() const
{
    return model_number;
}

double RobotPart::_weight() const
{
    return weight;
}

double RobotPart::_cost() const
{
    return cost;
}

string RobotPart::_description() const
{
    return description;
}

string RobotPart::to_string() const
{
    return name + " (model number " + model_number + ")";
}


