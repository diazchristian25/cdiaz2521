//
//  Arm.h
//  RobotPart
//
//  Created by Christian Diaz on 4/2/17.
//  Copyright © 2017 Christian Diaz. All rights reserved.
//

#ifndef _ARM
#define _ARM_2017
#include <string>
#include <iostream>
#include "RobotPart.h"

using namespace std;

class Arm: public RobotPart
{
    private:
        double max_power_consumed;
    
    public:
    Arm(string _name, int _model_number, double _weight, double _cost, string _description, int _max_power): RobotPart(_name,_model_number,_weight,_cost, _description), max_power_consumed{_max_power_consumed}{}
    
    double max_power() const;
    
    friend ostream& operator<<(ostream& os, const Arm& arm);
    
    
};
#endif
