//
//  main.cpp
//  lab2
//
//  Created by Jeff on 9/19/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
using namespace std;
class NumDays{
private:
    double hours;
    double days;
public:
    NumDays(double h=0){
        hours=h;
        days=h/8;
    }
    void setHours(double h){
        hours = h;
        days = h/8;
    }
    double getHours()const {
        return hours;
    }
    void setDays(double d){
        days = d ;
        hours = d*8;
    }
    double getDays() const {
        return days;
    }
    NumDays operator+(NumDays&right){
        NumDays temp;
        temp.setHours(hours + right.getHours());
        return temp;
    }
    
    NumDays operator++(){//prefix
    hours++;
    days = hours/8;
    return *this;
    }
    NumDays operator--(){//prefix
        hours--;
        days = hours/8;
        return *this;
    }
    NumDays operator--(int){//prefix
        NumDays temp(hours);
        hours--;
        days = hours/8;
        return temp;
    }
    NumDays operator++(int){//prefix
        NumDays temp(hours);
        hours++;
        days = hours/8;
        return temp;
    }

};
int main() {
    NumDays one(25),two(15);
    NumDays three,four;
    cout << "one(25): "<< one.getDays()<<endl;
       cout << "two(25): "<< two.getDays()<<endl;
    three = one + two;
    cout<< "\n three = one + two is "<< three.getDays();
    ++three;
    cout << "\n prefix increment ++three is " << three.getDays();
    three++;
    cout << "\n prefix increment three++ is " << three.getDays();
    --three;
    cout << "\n prefix increment --three is " << three.getDays();
    three--;
    cout << "\n prefix increment three-- is " << three.getDays();
    
    
}
