//
//  CruiseShip.h
//  As7
//
//  Created by Jeff on 10/3/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#ifndef CruiseShip_h
#define CruiseShip_h
#include "ship.h"

using namespace std;

class Cruise : public Ship{
    string name;
    int max;
};
Cruise(string name,int year,string n,int m )
:Ship(name,year){
    name = n;
    max = m;
}

#endif /* CruiseShip_h */
