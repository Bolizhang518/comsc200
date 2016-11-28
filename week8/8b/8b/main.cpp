//  comsc 200
//  main.cpp
//  8b
//  completed 
//  Created by Jeff on 10/3/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include "myName.h"
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
    cout << "namespace std \n"
    <<"7 ^ 3 = " << pow(7,3) << endl;
    cout << "7.1 ^ 3.1 = " << pow(7.1, 3.1) <<endl;
    
    cout << "namespace mymath1 \n"
    <<"7 ^ 3 = " << mymath1::pow(7,3) << endl;
    cout << "7.1 ^ 3.1 = " << mymath1::pow(7.1, 3.1) <<endl;
    
    cout << "namespace mymath1 \n"
    <<"7 ^ 3 = " << mymath2::pow(7,3) << endl;
    cout << "7.1 ^ 3.1 = " << mymath2::pow(7.1, 3.1) <<endl;
}
