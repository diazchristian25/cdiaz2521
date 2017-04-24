//
//  SalesAssociate.cpp
//  
//
//  Created by Christian Diaz on 4/10/17.
//
//

#include "SalesAssociate.h"
#include <iostream>

using namespace std;

string SalesAssociate::_name() const
{
    return name;
}

int SalesAssociate::_employee_number() const
{
    return employee_number;
}

ostream& operator<<(ostream& os, const SalesAssociate& sales_associate)
{
    return os << sales_aasociate._name() << " (" << sales_associate._employee_number() << ")";
}
