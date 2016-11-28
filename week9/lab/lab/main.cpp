//
//  main.cpp
//  lab
//
//  Created by Jeff on 10/10/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

const string months[12] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"};

const int monthEnds[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

const string s="Input is not a valid value for the month.\n";
const string u="Input is not a valid value for the day.\n";

class Date{
private:
    int month, day, year;
    
public:
    class InvalidMonth{
    private:
        int month;
    public:
        InvalidMonth(int m){month =m;};
        int getMonth()const{return month;};
    };
    
    class InvalidDay{
    private:
        int day;
    public:
        InvalidDay(int d){day =d;};
        int getDay()const{return day;};
    };
    
    
    
    Date();
    Date(int,int,int);
    void setMonth(int m){
        if(m<1 || 12<m){
            month=m;
        }
       // else
            //throw InvalidMonth(m);
        
    }
    
    void setDay(int d){
        if(d<1||monthEnds[month-1]<d){
            day=d;
        }
        //else
          //  throw InvalidDay(d);
        }
    
    void setYear(int x){year=x;};
    int getMonth(){return month;};
    int getDay(){return day;};
    int getYear(){return year;};
    void showDate1();
    void showDate2();
    void showDate3();};

Date::Date():month(1), day(0), year(0){}

Date::Date(int m, int d, int y): month(m), day(d), year(y){
    if(m<1 || m>12){
  
        throw InvalidMonth(m);
    }
    else if(d<1 || d>monthEnds[m-1]){
    //    cout << d << " is not a valid value for the day.\n";
    //    exit(1);}}
        throw InvalidDay(d);}
    else
        day = d;
        
    }

void Date::showDate1(){cout<<month<<"/"<<day<<"/"<<year;}
void Date::showDate2(){
    if(month==0){return;}
    cout<<months[month-1]<<" "<<day<<", "<<year;}
void Date::showDate3(){
    if(month==0){return;}
    cout<<day<<" "<<months[month-1]<<" "<<((year<0)?-year:year)
    <<((year<0)?" B.C.":"");}

int main(){
   Date today(10, 12, 2015);
    
    cout<<"today in Format 1: ";
    today.showDate1();
    
    today.setMonth(10);
    today.setDay(12);
    today.setYear(2015);
  
    cout<<"\ntoday in Format 2: ";
    today.showDate2();
    
    cout<<"\ntoday in format 3: ";
    today.showDate3();
  
    int month, day, year;
    Date newDay;
    bool stay=true;
    while(stay){
        cout << "\n\nEnter date as in 10 12 2015: ";
        cin >> month >> day >> year;
        try{
        newDay.setMonth(month);
        newDay.setDay(day);
        newDay.setYear(year);
        }catch(Date::InvalidMonth e){
            cout<<"month error : " << e.getMonth() <<endl;
        }catch(Date::InvalidDay e){
            cout<<"day error : " << e.getDay() <<endl;
        }
        
        cout << "\nDate form 1: ";
        newDay.showDate1();
        cout << "\nDate form 2: ";
        newDay.showDate2();
        cout << "\nDate form 3: ";
        newDay.showDate3();
        if(newDay.getYear()==2050){stay=false;}
        
    }
    
    return 0;
}
