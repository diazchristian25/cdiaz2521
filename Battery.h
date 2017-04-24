//
//  Battery.hpp
//  RobotPart
//
//  Created by Christian Diaz on 4/3/17.
//  Copyright © 2017 Christian Diaz. All rights reserved.
//

#ifndef _BATTERY
#define _BATTERY_2017

#include <string>
#include <iostream>
#include "RobotPart.h"

using namespace std;

class Battery : public RobotPart {
    
private:
    double power_available;
    
public:
    Battery(string _name, int _model_number, double _weight, double _cost, string _description, double _power_available, double _max_energy)
    : RobotPart(_name, "battery", _model_number, _weight, _cost, _description), power_available(_power_available){};
    
    double max_energy() const;
    
    friend ostream& operator<<(ostream& os, const Battery& battery);
};

#endif

