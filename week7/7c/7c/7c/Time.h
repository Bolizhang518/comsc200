//  comsc 200
//  Time.h
//  7c
//  boli zhang
//  completed 
//  Created by Jeff on 9/28/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#ifndef Time_h
#define Time_h
#include <iostream>


using namespace std;

class Time;
 ostream &operator <<(ostream&,const Time &d);
 istream &operator>>(istream&, Time&d);

class Time {
private:
    
    int hour;
    int min;
    int sec;
    
public:
    Time():hour(12),min(30),sec(23){};
    Time(int h,int m,int s) : hour(h),min(m),sec(s){};
    int getHour()const {return hour;};
    int getMin()const {return min;};
    int getSecond()const{return sec;};
    void setHour(int h) {
        hour =h;
    };
    void setMin(int m) {
        min =m;
    };
    void setSecond(int s) {
        sec = s;
    };

    friend ostream &operator <<(ostream &strm,const Time &d);
    friend istream &operator >>(istream &strm, Date &d);

    
    
};

ostream &operator <<(ostream&strm,const Time &d){
    strm << d.getHour()<<":" << d.getMin() << ":" << d.getSecond();
    return strm;
};
istream &operator>>(istream&strm, Time&d){
    int temp;
    cout << " \n Enter the hour: ";
   
    strm >> temp; d.setHour(temp);
    
    cout << " \n Enter the min: ";

    strm >> temp; d.setMin(temp);
    
    cout << " \n Enter the second: ";
    strm >> temp; d.setSecond(temp);
    return strm;
    
};
#endif /* Time_h */
