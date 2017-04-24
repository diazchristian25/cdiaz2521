//
//  Head.cpp
//  RobotPart
//
//  Created by Christian Diaz on 4/3/17.
//  Copyright © 2017 Christian Diaz. All rights reserved.
//

#include "Head.h"
#include <iostream>
#include <string>

using namespace std;

ostream& operator<<(ostream& os, const Head& head)
{
return os << fixed << setprecision(2) << head._name() << head._model_number() "weight " << head._weight() << "cost $ " << head._cost() << " " << head._description();
}
