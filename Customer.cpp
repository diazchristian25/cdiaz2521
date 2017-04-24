//
//  Customer.cpp
//  
//
//  Created by Christian Diaz on 4/9/17.
//
//

#include "Customer.h"
#include <iostream>
#include <string>

using namespace std;

string Customer::_name() const
{
    return name;
}

int Customer::_customer_number() const
{
    return customer_number;
}

int Customer::_phone_number() const
{
    return phone_number;
}

string Customer::_email_address() const
{
    return email_address;
}

ostream& operator<<(ostream& os, const Customer& customer)
{
    return os << " " << customer._name() << endl << " " << customer._customer_number() << endl << " " << customer._phone_number() << endl << " " << customer._email_address();
}

