//
//  Locomotor.hpp
//  RobotPart
//
//  Created by Christian Diaz on 4/3/17.
//  Copyright © 2017 Christian Diaz. All rights reserved.
//

#ifndef _LOCOMOTOR
#define _LOCOMOTOR_2017

#include "RobotPart.h"
#include <string>
#include <iostream>

class Locomotor : public RobotPart{
    private:
        double max_power_consumed;
    
    public:
    Locomotor(string _name, int _model_number, double _weight, double _cost, string _description, double _max_power_consumed): RobotPart(_name, _model_number, _weight, _cost, _description), max_power_consumed(_max_power_consumed){}
    
    int max_power() const;
    
    friend ostream& operator<<(ostream& os, const Locomotor& locomotor);
};

#endif
