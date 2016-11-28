//
//  ProductionWorker.h
//  7a
//
//  Created by Jeff on 9/26/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#ifndef ProductionWorker_h
#define ProductionWorker_h
#include <string>
#include <sstream>
#include <iostream>
#include "Employee.h"

using namespace std;


class ProductionWorker : public Employee{
private:
    
    int shift;
    double rate;
    
public:
    ProductionWorker() : Employee(){
        shift = 0;
        rate = 0.0;
    }
    ProductionWorker(string nam, string num,string d,int s,double r)
        :Employee(nam,num,d){
            shift = s;
            rate =r;
    }
    void setShift(int s){
        shift = s;
    }
    void setRate(double r){
        rate = r;
    }
    int getShift()const{
        return shift;
    }
    double getRate()const{
        return rate;
    }
    string getShiftName()const{
        if(shift ==1)
            return "day";
        else if (shift ==2)
            return "Night";
        return "ivalid";
    }
    string toString(){
        string s = Employee::toString();
        stringstream ss;
        ss<< "\n shift" << this->getShiftName()
        <<"\n Rate "  << this->getRate() << " this to string in production"<< endl;
        s += ss.str();
        return s;
        
    }
    /*
    ostream &operator << (ostream &strm, const Employee &e) {
        string s = Employee::toString();
        stringstream ss;
        ss<< "\n shift" << this->getShiftName()
        <<"\n Rate "  << this->getRate() << " this to string in production"<< endl;
        s += ss.str();
        return s;
        
    }
*/
    
};
#endif /* ProductionWorker_h */
