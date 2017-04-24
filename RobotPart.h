//
//  RobotPart.h
//  RobotPart
//
//  Created by Christian Diaz on 4/2/17.
//  Copyright © 2017 Christian Diaz. All rights reserved.
//

#ifndef _ROBOT_PART
#define _ROBOT_PART 2017

#include <string>

using namespace std;

class RobotPart{
    protected:
        string name;
        int model_number;
        double weight;
        double cost;
        string description;
    
    public:
        RobotPart(string _name, int _model_number, double _weight, double _cost, string _description): name{_name}, model_number{_model_number}, weight{_weight}, cost{_cost}, description{_description}{};
    
        string _name() const;
        int _model_number() const;
        double _weight const();
        double _cost() const;
        string _description() const;
        string to_string() const;
    
};


#endif
