//  comsc 200
//  completed 
//  main.cpp
//  7c
//  boli zhang
//  Created by Jeff on 9/28/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include "Date.h"
#include "Time.h"


class DateTime;
using namespace std;

ostream &operator<<(ostream&strm,const DateTime &d);
istream &operator<<(istream&strm, DateTime &d);

class DateTime : public Date,public Time{
public:
    DateTime():Date(),Time(){};
    DateTime(int m,int d,int y,int h, int mn, int s)
    :Date(m,d,y),Time(h,mn,s){};
    
   friend ostream &operator<<(ostream&strm,const DateTime &d);
   friend istream &operator<<(istream&strm, DateTime &d);
};

ostream &operator<<(ostream&strm,const DateTime &dt){
    
strm << dt.getMonth()<<"/" << dt.getDay() << "/" << dt.getYear()<<"  "<< dt.getHour()<<":" << dt.getMin() << ":" << dt.getSecond();
    return strm;

};

istream &operator>>(istream&strm, DateTime &dt){
    int temp;
    cout << " \n Enter the month: \n\t ";
             strm >> temp; dt.setMonth(temp);
             
             cout << " \n Enter the day: \n\t ";
             strm >> temp; dt.setDay(temp);
             
             cout << " \n Enter the year: ";
    
             strm >> temp; dt.setYear(temp);
             
             cout << " \n Enter the hour: ";
    
             strm >> temp; dt.setHour(temp);
             
             cout << " \n Enter the min: ";
    
             strm >> temp; dt.setMin(temp);
             
             cout << " \n Enter the second: ";
    
             strm >> temp; dt.setSecond(temp);
        

             return strm;
             
             };
int main(){
    Date oneDay;
    cout << "\nDate oneDate;  " << oneDay;
    Time oneTime;
    cout << "\nTime oneTime;  " << oneTime;
    DateTime oneDayTime;
    cout << "\nDateTime oneDayTime; " << oneDayTime;
    
    Date toDay(9, 30, 2015);
    cout <<  "\nDate toDay(9, 30, 2015);  " << toDay;
    Time toTime(8, 11, 22);
    cout << "\nTime toTime(8, 11, 22);  " << toTime;
    DateTime toDayTime(9, 30, 2015, 8, 11, 22);
    cout << "\nDateTime toDayTime(9, 30, 2015, 8, 11, 22);  \n" << toDayTime << endl;
    
    cout << "Enter a Date: ";
    cin >> oneDay;
    cout << "\n ... You have entered: " << oneDay;
    cout << "\n Enter a Time: ";
    cin >> oneTime;
    cout << "\n ... You have entered: " << oneTime;
    cout << "\n Etner a DateTime: ";
    cin >> oneDayTime;
    cout << "\n ... You have entered: " << oneDayTime <<endl;
   
}
