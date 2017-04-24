//
//  Torso.hpp
//  RobotPart
//
//  Created by Christian Diaz on 4/3/17.
//  Copyright © 2017 Christian Diaz. All rights reserved.
//

#ifndef _TORSO
#define _TORSO_2017

#include "RobotPart.h"
#include <string>
#include <iostream>

using namespace std;

class Torso : public RobotPart{
    private:
        int battery_compartments;
    
    public:
        Torso(string _name, int _model_number, double _weight, double _cost, string _description, int _battery_compartments): RobotPart(_name, "torso", _model_number, _weight, _cost, _description), battery_compartments(_battery_compartments){}
    
        int max_batteries() const;
    
        friend ostream& operator<<(ostream& os, const Torso& torso);
    
};

#endif
