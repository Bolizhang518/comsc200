//
//  main.cpp
//  7a
//
//  Created by Jeff on 9/26/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"
using namespace std;

int main() {
    Employee e1("James Baker", "1501", "1/1/2015");
    ProductionWorker pw1("John Jones", "1502", "1/1/2015", 2, 18.00);
    ProductionWorker pw2("Jerry Jones", "1503", "1/2/2015", 1, 15.00);
    
    cout << "\n---e1---";
    cout << "\n...output e1 with .tostring()"
    << e1.toString()
    << "\n\n...output e1 with <<" << e1
    << "\n\n...output e1 with display(): ";
    e1.display();
    // repeat for pw1 and pw2
    
    cout << "\n---pw1---";
    cout << "\n...output e1 with .tostring()"
    << pw1.toString()
    << "\n\n...output pw1 with <<" << pw1
    << "\n\n...output pw1 with display(): ";
    pw1.display();
    
    cout << "\n---pw2---";
    cout << "\n...output pw2 with .tostring()"
    << pw2.toString()
    << "\n\n...output pw2 with <<" << pw2
    << "\n\n...output pw2 with display(): ";
    pw2.display();
    
}
