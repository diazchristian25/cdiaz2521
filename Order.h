//
//  Order.h
//  
//
//  Created by Christian Diaz on 4/9/17.
//
//

#ifndef ORDER_H
#define ORDER_H_2017

#include <string>
#include "RobotModel.h"
#include "Customer.h"
#include "SalesAssociate.h"

Class Order
{
    private:
        int order_number;
        string date;
        int status;
        RobotModel& robot_model;
        Customer& customer;
        SalesAssociate& sales_associate;

    public:
        Order(int _order_number, string _date, int _status, RobotModel& _robot_model, Customer& _customer, SalesAssociate& _sales_associate): order_number{_order_number}, date{_date}, status{_status}, robot_model{_robot_model}, customer{_customer}, sales_associate{_sales_associate}, sales_tax_rate{0.0825}{};
    
        double sales_tax_rate;
        int _order_number() const;
        string _date() const;
        int _status() const;
        RobotModel& _robot_model() const;
        Customer& _customer() const;
        SalesAssociate& _sales_associate() const;
        double subtotal() const;
        double sales_tax() const;
        double total_cost() const;
        string to_string() const;
    
        friend ostream& operator<<(ostream& os, const Order& robot_model);
}
#endif /* ORDER_H */
