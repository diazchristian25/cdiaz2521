//
//  Head.hpp
//  RobotPart
//
//  Created by Christian Diaz on 4/3/17.
//  Copyright © 2017 Christian Diaz. All rights reserved.
//

#ifndef _HEAD
#define _HEAD_2017

#include "RobotPart.h"
#include <string>
#include <iostream>

class Head : public RobotPart{
    private:
        double power;
    
    public:
    Head(string _name, int _model_number, double _weight, double _cost, string _description, double _power): RobotPart(_name, _model_number, _weight, _cost, _description) power(_power){}
    
    friend ostream& operator<<(ostream& os, const Head& head);
};

#endif
