//
//  Customer.h
//  
//
//  Created by Christian Diaz on 4/9/17.
//
//

#ifndef CUSTOMER_H
#define CUSTOMER_H_2017

#include <string>
#include <iostream>

using namespace std;

Class Customer
{
    private:
        string name;
        int customer_number;
        int phone_number;
        string email_address;
    
    public:
    Customer(string _name, int _customer_number, int _phone_number, string _email_address): name{_name}, customer_number{_customer_number}, phone_number{_phone_number}, email_address{_email_address}{};
    
        string _name() const;
        int _customer_number() const;
        int _phone_numner() const;
        string _email_address() const;
    
        friend ostream& operator<<(ostream& os, const Customer& customer);
}
#endif /* CUSTOEMR_H */
