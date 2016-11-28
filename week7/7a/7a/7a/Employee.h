//
//  Employee.h
//  7a
//
//  Created by Jeff on 9/26/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#ifndef Employee_h
#define Employee_h

#include <iostream>
#include <sstream>
#include <string>
#include "ProductionWorker.h"

using namespace std;

class Employee;
ostream &operator << (ostream&, const Employee &);

class Employee{
private:
    string name;
    string number;
    string date;
public:
    Employee(){
        name="";number="";date="";
    }
    Employee(string nam, string num,string d){
        name = nam;
        number = num;
        date = d;
    }
    void setName(string n){
        name = n;
    }
    void setNumber(string n){
        number =n;
    }
    void setDate(string d){
        date = d;
    }
    string getName()const{
        return name;
    }
    string getNumber()const{
        return number;
    }
    string getDate()const{
        return date;
    }
    void display();
    string toString();
        // pass by reference
    friend ostream &operator << (ostream &, const Employee &);
    
};
void Employee::display(){
    cout << "\n name" << this->getName() << "\n number : " << getName()
    << "\n date "  << this->getDate() << endl;
}
string Employee::toString(){
    stringstream ss;
    ss<< "\n name" << this->getName() << "\n number : " << getName()
    << "\n date "  << this->getDate() <<"this tostring in employee.h"<< endl;
    return ss.str();
}
ostream &operator << (ostream &strm, const Employee &e){
    strm<< "\n name" << e.getName() << "\n number : " << e.getName()
    << "\n date "  << e.getDate() << endl;
    return strm;
}


#endif /* Employee_h */
