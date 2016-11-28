//  comsc 200
//  Date.h
//  7c
//  boli zhang
//  completed
//  Created by Jeff on 9/28/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#ifndef Date_h
#define Date_h
#include <iostream>

using namespace std;

class DateTime;
ostream &operator<<(ostream&,const DateTime &);
istream &operator>>(istream&, DateTime &);

class Date{
private:
    int month;
    int day;
    int year;
    
public:
    Date():month(1),day(1),year(2016){};
    Date(int m,int d,int y):month(m),day(d),year(y){};
    int getMonth()const {return month;};
    int getDay()const {return day;};
    int getYear()const{return year;};
    void setMonth(int m) {
        month =m;
    };
    void setDay(int d) {
        day =d;
    };
    void setYear(int y) {
        year = y;
    };
    friend ostream &operator <<(ostream &strm,const Date &);
    friend istream &operator>>(istream &strm, Date&);
};
ostream &operator <<(ostream &strm,const Date &d){
    strm << d.getMonth()<<"/" << d.getDay() << "/" << d.getYear()<<" ";
    return strm; 
};
istream &operator>>(istream&strm, Date&d){
    int temp;
    cout << " \n Enter the month: \n\t ";
    strm >> temp; d.setMonth(temp);
   
    cout << " \n Enter the day: \n\t ";
    strm >> temp; d.setDay(temp);
    
    cout << " \n Enter the year: \n\t ";
    strm >> temp; d.setYear(temp);
    return strm;
    
};

#endif /* Date_h */
