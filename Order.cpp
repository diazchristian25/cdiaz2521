//
//  Order.cpp
//  
//
//  Created by Christian Diaz on 4/9/17.
//
//

#include "Order.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int Order::_order_number() const
{
    return order_number;
}

string Order::_date() const
{
    return date;
}

int Order::_status() const
{
    return status;
}

RobotModel& Order::_robot_model() const
{
    return robot_model;
}

Customer& Order::_customer() const
{
    return customer;
}

SalesAssociate& Order::_sales_associate() const
{
    return sales_associate;
}

double Order::subtotal() const
{
    return robot_model._cost();
}

double Order::sales_tax() const
{
    return robot_model._cost()*sales_tax_rate;
}

double Order::total_price() const
{
    return robot_model._cost()*(1+sales_tax_rate);
}

string Order::to_string() const
{
    return order_number+ " (" + robot_model._name() + " for" + customer._name() + "by" + sales_associate._name() + ")";
}

ostream& operator<<(ostream& os, const Order& order) {
    return os << fixed << setprecision(2) << order.order_number() << " Price: $" << order.total_price()
    << " (subtotal $" << order.subtotal() << " + sales tax $" << order.sales_tax() << endl
    << "   Customer: " << order.customer() << endl << "   Sales Associate: " << order.sales_associate() << endl
    << "   Robot Model: " << order.robot_model();
}
