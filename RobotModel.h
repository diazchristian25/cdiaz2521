//
//  RobotModel.h
//  
//
//  Created by Christian Diaz on 4/8/17.
//
//

#ifndef ROBOTMODEL_H
#define ROBOTMODEL_H_2017

#include "Arm.h"
#include "Battery.h"
#include "Head.h"
#include "Locomotor.h"
#include "Torso.h"

using namespace std;

class RobotModel
{
    private:
        string name;
        int model_number;
        double cost;
        Torso& torso;
        Head& head;
        Arm& arm1;
        Arm& arm2;
        Locomotor& locomotor;
        Battery& battery1;
        Battery& battery2;
        Battery& battery3;
    
    public:
        RobotModel(string _name, int _model_number, double _cost, Torso& _torso, Head& _head, Arm& _arm1, Arm& _arm2, Locomotor& _locomotor, Battery& _battery1, Battery& _battery2, Battery& _battery3): name{_name}, model_number{_model_number}, cost{_cost}, torso{_torso}, head{_head}, arm1{_arm1}, arm2{_arm2}, locomotor{_locomotor}, battery1{_battery1}, battery2{_battery2}, battery3{_battery3}{}
    
        string _name() const;
        int _model_number() const;
        double _cost() const;
        Torso& _torso() const;
        Head& _head() const;
        Arm& _arm1() const;
        Arm& _arm2() const;
        Locomotor& _locomotor() const;
        Battery& _battery1() const;
        Battery& _battery2() const;
        Battery& _battery3() const;
        double part_cost() const;
        string to_string() const;
    
        friend ostream& operator<<(ostream& os, const RobotModel& robot_model);
};

#endif
