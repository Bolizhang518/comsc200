//
//  main.cpp
//  as
//
//  Created by Jeff on 9/7/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


void Payroll::setHours(double h){
    if(h>60){
        cout <<"invalid number of hours. \n" ;
        
        hours = h;
    }
}


int main() {
    double hours;
    double rate;
    int count =1;
    string input;
    int num_employees;
    Payroll p;
    
    while(true){
        cout << "enter the hours worked and pay rate " << "for " << num_employees <<
        "employees: \n";
        cout << "\n employees #" << count;

        getline(cin, input);
        stringstream ss(input);//  a copy of the current contents in the stream buffer.
        ss >> rate;
        
        if (!ss.fail())break; // not an integer
        cout << " is not ... !\n"<<"retry: "<< endl;
        else if (rate <0)
            cout << "rate can not be ...";
        else
            break;
    }

    
}
