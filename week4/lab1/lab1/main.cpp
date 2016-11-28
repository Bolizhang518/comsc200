//  comsc 200
//  boli zhang
//  completed 
//  main.cpp
//  lab1
//
//  Created by Jeff on 9/7/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include <string>
#include "Frac.h"
using namespace std;

int main() {
    //mathod 1
    Frac x(3,4);
    Frac y(2,3);
    cout << " created x as ";   //argument constructors.
    x.show();
    cout << "\n created y as ";
    y.show();
    cout <<endl;
    
    Frac z = x;     //assignment (=) operator.
    cout << "\n Overload assignment operator = \n Frac z=x; created z as " << z << endl;  //assignment (=) operator.
  
    /*   //mathod 2
    cout<< "created x :" << x.toString()
    << "\n created y :" << y.toString() << endl;
  */
    
    
    //mathod 3 operator
   // cout<< " x assigned as y :" << x;
   // << "\n created y :" << y << endl;
    
    Frac zz(x);
    cout << "\n copy constructor: \n Frac zz(x); created z: "<< zz << endl;  //copy constructor: Frac x(y) that accept a Frac object as an argument.
    
    cout << "\n Overloaded assignment operator + \n " << x <<" + "<< y <<" = "<< x+y << endl;
    
    cout << "\n Overloaded assignment operator - \n " << x <<" - "<< y <<" = "<< x-y << endl;
    
    cout << "\n Overloaded assignment operator * \n " << x <<" * "<< y <<" = "<< x*y << endl;
    
    cout << "\n Overloaded assignment operator / \n " << x <<" / "<< y <<" = "<< x/y << endl;
    
    cout << "\n Overloaded assignment operator > \n " << y << " the predication " << x << " > "<<y <<" is " << ((x>y)? "True":"False")  << endl;
    
    cout << "\n Overloaded assignment operator < \n " << y << " the predication " << x << " < "<<y <<" is " << ((x<y)? "True":"False")  << endl;
    
    
    
    
    
}
