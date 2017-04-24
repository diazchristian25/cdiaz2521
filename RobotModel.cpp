//
//  RobotModel.cpp
//  
//
//  Created by Christian Diaz on 4/8/17.
//
//

#include "RobotModel.h"
#include <iostream>
#include <string>

using namespace std;

string RobotModel::_name() const
{
    return name;
}

int RobotModel::_model_number() const
{
    return model_number;
}

double RobotModel::_cost() const
{
    return cost;
}

Torso& RobotModel::_torso() const
{
    return torso;
}

Head& RobotModel::_head() const
{
    return head;
}

Arm& RobotModel::_arm1() const
{
    return arm1;
}

Arm& RobotModel::_arm2() const
{
    return arm2;
}

Locomotor RobotModel::_locomotor() const
{
    return locomotor;
}

Battery& RobotModel::_battery1() const
{
    return battery1;
}

Battery& RobotModel::_battery2() const
{
    return battery2;
}

Battery& RobotModel::_battery3() const
{
    return battery3;
}

double RobotModel::part_cost() const
{
    return torso.cost() + head.cost() + arm1.cost() + arm2.cost() + locomotor.cost() + battery1.cost() + battery2.cost() + battery3.cost();
}

string RobotModel::to_string() const
{
    return name + " (model number " + model_number + ")";
}

ostream& operator<<(ostream& os, const RobotModel& robot_model)
{
    return os << fixed << setprecision(2) << robot_model._name() << robot_model._model_number() << "cost $ " << robot_model._cost() << " " << robot_model._torso() << endl << " " << robot_model._head() << endl << " " << robot_model.arm1() << endl << " " << robot_model.arm2() << endl << " " << robot_model.locomotor() << endl << " " << robot_model.battery1() << endl << " " << robot_model.battery2() << endl << " " << robot_model.battery3();
}
