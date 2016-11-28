//
//  date.h
//  6d dateClass
//
//  Created by Jeff on 9/21/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#ifndef date_h
#define date_h
const int NUM_MONTH = 12;

class Date{
private:

    int month,day,year;
    std::string monthNames[12] = {"jan","Feb","Mar","april", "may", "jun", "july" , "aug","sept","oct","nov","dec"};
    int daysInMonth[NUM_MONTH +1] = {0,31,28,31,30,31,30,31,31,30,30,31};
    int daysInyear[NUM_MONTH +1] = {0,31,59,90};
public:
    Date(){
        month = 9;
        day = 21;
        year = 2016;
    }
    Date(int m,int d, int y){
        month = m;
        day=d;
        year=y;
    }
    std::string getMonthName(){
        return monthNames[month-1];
    }
    void showDate(){
        std::cout << getMonthName() <<" " << day << "," <<year<<std::endl;
    }
    Date operator - (const Date &);
    //prefix
    /*
    operator++() {
        if(day == daysInMonth[month])
    }
    operator++(int){//postfix
         if(day == daysInMonth[month])
    }
    */
};

Date Date::operator - (const Date &right) {
	Date temp;
	temp.inches = inches - right.inches;
	temp.feet = feet - right.feet;
	temp.lowTerm();
	return temp;
}
#endif /* date_h */
