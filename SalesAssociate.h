//
//  SalesAssociate.h
//  
//
//  Created by Christian Diaz on 4/10/17.
//
//

#ifndef SALESASSOCIATE_H
#define SALESASSOCIATE_H_2017

#include <iostream>
#include <string>

using namespace std;

class SalesAssociate
{
    private:
        string name;
        int employee_number;
    
    public:
    SalesAssociate(string _name, int _employee_number):name{_name}, employee_number{_employee_number}{};
    
    string _name() const;
    string _employee_number () const;
    
    friend ostream& operator<<(ostream& os, const SalesAssociate& sales_associate);
}
#endif /* SALESASSOCIATE_H */
