//
//  Shop.hpp
//  
//
//  Created by Christian Diaz on 4/17/17.
//
//

#ifndef _SHOP_H
#define _SHOP_H_2017

#include <string>
#include <vector>
#include <iostream>
#include "Arm.h"
#include "Head.h"
#include "Battery.h"
#include "Torso.h"
#include "Locomotor.h"
#include "RobotModel.h"
#include "Customer.h"
#include "Order.h"
#include "SalesAssociate.h"

using namespace std;

private:
    string name;
    vector<Arm> arms;
    vector<Head> head;
    vector<Battery> battery;
    vector<Torso> torso;
    vector<Locomotor> locomotor;
    vector<RobotModel> robot_model;
    vector<Customer> customer;
    vector<Order> order;
    vector<SalesAssociate> sales_associate;

public:
    Shop(string _name) : name{_name}{}

    //manage robot parts
    void create_new_arm(string _name, int _model_number, double _weight, double _cost, int _max_power_consumed, string _description);
    vector<Arm> _arms() const;
    void create_new_head(string _name, int _model_number, double _weight, double _cost, string _description);
    vector<Head> _head() const;
    void create_new_battery(string _name, int _model_number, double _weight, double _cost, double _power, string _description);
    vector<Battery> _battery() const;
    void create_new_torso(string _name, int _model_number, double _weight, double _cost, int _battery_compartments, string _description);
    vector<Torso> _torso() const;
    void create_new_locomotor(string _name, int _model_number, double _weight, double _cost, double _max_power_consumed, string _description);
    vector<Locomotor> locomotor() const;

    //manage robot model
    void create_new_robot_model(string _name, int _model_number, double _cost, Torso& _torso, Head&, _head, Arm& _arm1, Arm& _arm2, Locomotor& _locomotor, Battery& _battery1, Battery& _battery2, Battery& _battery3);
    vector<RobotModel> _robot_model() const;

    // manage customer and sales associate
    void create_new_customer(string _name, int _customer_number);
    vector<Customer> _customer() const;
    void create_new_sales_associate(string _name, int _employee_number);
    vector<SalesAssociate> _sales_associate() const;

    //manage new orders
    void create_new_order(int _order_number, string _date, RobotModel& robot_model, Customer& _customer, SalesAssociate& sales_associate);
    vector<Order> order() const;

    string _name() const;
    string to_string() const;
    friend ostream& operator<<(ostream& os, const Shop& shop);

#endif /* Shop_h */
