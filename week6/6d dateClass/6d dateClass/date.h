//
//  date.h
//  6d dateClass
//
//  Created by Jeff on 9/21/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#ifndef date_h
#define date_h

#include <string>
#include <cstdlib>
#include <iostream>

//const int NUM_MONTH = 12;
using namespace std;

class Date;
ostream &operator << (ostream &, const Date &);
istream &operator >> (istream &, Date &);
   static const string monthNames[] ={"January","February","March","April","May","June","July","August","September","October","November","December"};
   static const int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
class Date{
private:
    
    int month,day,year;

  //  int daysInyear[] = {0,31,59,90};
public:
    Date(){
        month = 9;
        day = 21;
        year = 2016;
    }
    Date(int m,int d, int y){
        month=m;
        day=d;
        year=y;
    }
    Date(Date &d){
        month =d.month;
        day = d.day;
        year = d.year;
        
    }
    int getDay(){
        return day;
    }
    
    int getMonth(){
        return month;
    }
    
    int getYear(){
        return year;
    }
    
    void setDay(int d){
       day = d;
    }
    void setMonth(int m){
        month = m;
    }
    void setYear(int y){
        year = y;
    }
    
    string getMonthName(){
        return monthNames[month-1];
    }
    bool valid(){
        if(month>12)
            return false;
        else if (day > 31)
            return false;
        else
            return true;
    }
    void showDate(){
        cout << getMonthName() << day << "," <<year<<std::endl;
    }
    //prefix
    friend ostream &operator << (ostream &strm, const Date &obj){
        strm << monthNames[obj.month - 1] << " " << obj.day << ", " << obj.year;
        return strm;
    }
    
    friend istream &operator >> (istream &strm, Date &obj){
        cout << "\nEnter a Date";
        cout << "\n     the month: ";
        strm >> obj.month;
       // if(obj.month > 12 || obj.month <= 0) exit(EXIT_FAILURE);
        cout << "     the day: ";
        strm >> obj.day;
        
        cout << "     the year: ";
        strm >> obj.year;
        if(obj.month > 12 || obj.month <= 0 || obj.day > daysInMonth[obj.month - 1]) cout << "Not a valid date!";
        return strm;
    }
    int operator-(const Date &right){
        int totalDays1;
        int totalDays2;
        int diff;
        totalDays1 = day;
        totalDays2 = right.day;
        diff = year - right.year;
        if(diff < 0){
            totalDays2 += 365 * abs(diff);
        }
        else{
            totalDays1 += 365*diff;
        }
        for(int i = 0; i <= (month - 1); i++){
            totalDays1 += daysInMonth[i];
        }
        
        for(int i = 0; i <= right.month - 1; i++){
            totalDays2 += daysInMonth[i];
        }
        return (totalDays1-totalDays2);
    }
    
    Date operator++(){
        ++day;
        if(day > daysInMonth[month - 1] && month != 12){ day = 1; ++month;}
        else if(day > daysInMonth[month - 1]){ day = 1; month = 1; ++year;}
        return *this;
    }
    
    Date operator++(int){
        Date temp(*this);
        temp.day++;
        if(temp.day > daysInMonth[temp.month - 1] && temp.month != 12){ temp.day = 1; temp.month++;}
        else if(day > daysInMonth[temp.month - 1]){ temp.day = 1; temp.month = 1; temp.year++;}
        return temp;
    }
    
    Date operator--(){
        --day;
        if(day <= 0 && month != 1){ day = daysInMonth[month - 2]; --month;}
        else if(day <= 0){ month = 12; day = daysInMonth[month - 1];}
        return *this;
    }
    
    Date operator--(int){
        Date temp(*this);
        temp.day--;
        if(day <= 0 && month != 1){ day = daysInMonth[month - 2]; month--;}
        else if(day <= 0){ month = 12; day = daysInMonth[month - 1];}
        return temp;
    }

};


#endif /* date_h */
