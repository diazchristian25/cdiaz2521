//
//  Shop.cpp
//  
//
//  Created by Christian Diaz on 4/17/17.
//
//

#include "Shop.h"
#include "shop.h"
#include <iostream>
#include <iomanip>
#include <string>

// managing Robot Parts
void Shop::create_new_arm(string _name, int model_number, double _weight, double _cost, int _max_power_consumed, string _description)
{
    arms.push_back(Arm{_name, _model_number, _weight,
        _cost, _max_power_consumed, _description});
}

vector<Arm> Shop::_arms() const
{
    return arms;
}

void Shop::create_new_battery(string _name, int _model_number, double _weight, double _cost, double _power, string _description)
{
    battery.push_back(Battery{_name, _model_number, _weight,
        _cost, _power, _description});
}

vector<Battery> Shop::_battery() const
{
    return battery;
}

void Shop::create_new_head(string _name, int _model_number, double _weight, double _cost, string _description)
{
    head.push_back(Head{_name, _model_number, _weight,
        _cost, _description});
}
vector<Head> Shop::_head() const
{
    return head;
}

void Shop::create_new_locomotor(string _name, int _model_number, double _weight, double _cost, int _max_power_consumed, string _description)
{
    locomotor.push_back(Locomotor{_name, _model_number, _weight, _cost, _max_power_consumed, _description});
}
vector<Locomotor> Shop::_locomotor() const

{
    return locomotor;
}

void Shop::create_new_torso(string _name, int _model_number, double _weight, double _cost, int _battery_compartments, string _description)
{
    torso.push_back(Torso{_name, _model_number, _weight,
        _cost, _battery_compartments, _description});
}

vector<Torso> Shop::_torso() const
{
    return torso;
}

//managing robot model
void Shop::create_new_robot_model(string name, int _model_number, double _cost, Torso& _torso, Head& _head, Arm& _arm1, Arm& _arm2, Locomotor& _locomotor, Battery& _battery1, Battery& _battery2, Battery& _battery3)
{
    robot_model.push_back(RobotModel{_name, _model_number, _cost, _torso, _head, _arm1, _arm2, _locomotor,
        _battery1, _battery2, _battery3});
}

vector<RobotModel> Shop::_robot_model() const
{
    return robot_model;
}

// managing customer and sales associate

void Shop::create_new_customer(string _name, int _customer_number)
{
    customer.push_back(Customer{_name, _customer_number});
}

vector<Customer> Shop::_customer() const
{
    return customer;
}

void Shop::create_new_sales_associate(string _name, int _employee_number)
{
    sales_associate.push_back(SalesAssociate{_name, _employee_number});
}

vector<SalesAssociate> Shop::_sales_associate() const
{
    return sales_associate;
}

// managing new orders
void Shop::create_new_order(int _order_number, string _date, RobotModel& _robot_model, Customer& _customer, SalesAssociate& _sales_associate)
{
    order.push_back(Order{_order_number, _date,
        _robot_model, _customer, _sales_associate});
}
vector<Order> Shop::_order() const
{
    return order;
}

// managing the shop
string Shop::_name() const
{
    return name;
}

string Shop::to_string() const
{
    return name;
}

ostream& operator<<(ostream& os, const Shop& shop)
{
    os << fixed << setprecision(2) << endl
    << "================================" << endl
    << shop.name() << endl
    << "================================" << endl;
    os << "Parts" << endl
    << "--------------------------------" << endl;
    for (Arm A: shop.arms()) os << A << endl;
    for (Battery B: shop.battery()) os << B << endl;
    for (Head H: shop.head()) os << H << endl;
    for (Locomotor H: shop.locomotor()) os << L << endl;
    for (Torso T: shop.torso()) os << T << endl;
    os << "--------------------------------" << endl
    << "Robot Models" << endl
    << "--------------------------------" << endl;
    for (RobotModel R: shop.robot_model()) os << R << endl;
    os << "--------------------------------" << endl
    << "Customers" << endl
    << "--------------------------------" << endl;
    for (Customer C: shop.customer()) os << C << endl;
    os << "--------------------------------" << endl
    << "Sales Associates" << endl
    << "--------------------------------" << endl;
    for (Sales_associate S: shop.sales_associate()) os << S << endl;
    os << "--------------------------------" << endl
    << "Orders" << endl
    << "--------------------------------" << endl;
    for (Order O: shop.order()) os << O << endl;
    return os; 
}

