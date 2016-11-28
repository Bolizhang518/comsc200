//
//  main.cpp
//  as2
//
//  Created by Jeff on 8/22/16.
//  Copyright © 2016 Jeff zhang. All rights reserved
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <stdio.h>

using namespace std;

class Angle{
private:
    int degrees, minutes;
    double seconds;
    char direct;
public:
    //constructor
    Angle (double gps,int latlong){
        //latlong = 0 for N/S latitude, 1 for E/W longitude
        int d_part,m_part;
        double s_part;
        char dir_part;
        
        double degTemp, minTemp;
        
        int temp = gps;
        temp = modf(temp,&degTemp);
        temp = temp*60.0;
        temp = modf(temp,&minTemp);
        s_part = temp*60.0;
        
        d_part = degTemp;
        m_part = minTemp;
        
        if(latlong == 0)
            dir_part =((gps>0)?'N':'S');
        else
            dir_part = ((gps>0)?'E':'W');
       // Angle* converted = new Angle(d_part,m_part,s_part,dir_part);
        //return *converted;
        degrees = d_part;
        minutes = m_part;
        seconds = s_part;
        direct  = dir_part;
        
    }
    
    Angle(){degrees=0;minutes=0;seconds=0;direct='N';};
    Angle(int d,int m,double s, char dir){
        degrees=d;minutes=m;seconds=s;direct=dir;
    }
    Angle(Angle &a){
        degrees = a.degrees;
        minutes =a.minutes;
        seconds = a.seconds;
        direct = a.direct;
    };
    //setters
    void setDegrees(int d) {degrees=d;};
    void setMinutes(int m) {minutes=m;};
    void setSeconds(double s){seconds=s;};
    void setDirect(char dir){direct=dir;};
    
    //getter
    int getDegrees() {return degrees;};
    int getMinutes() {return minutes;};
    double getSeconds(){return seconds;};
    char getDirect(){return direct;};
    //features
   void print(){
       cout<<std::setprecision(4)<<degrees << " ^0" << seconds << "' " << minutes << "\""<<direct ;
    };

};
Angle convertGPS(double gps,int latlong){
    //latlong = 0 for N/S latitude, 1 for E/W longitude
    int d_part,m_part;
    double s_part;
    char dir_part;
    
    double degTemp, minTemp;
    
    int temp = gps;
    temp = modf(temp,&degTemp);
    temp = temp*60.0;
    temp = modf(temp,&minTemp);
    s_part = temp*60.0;
    
    d_part = degTemp;
    m_part = minTemp;
    
    if(latlong == 0)
        dir_part =((gps>0)?'N':'S');
    else
        dir_part = ((gps>0)?'E':'W');
    Angle* converted = new Angle(d_part,m_part,s_part,dir_part);
    return *converted;
    
}
int main() {
    // insert code here...
    
    double lat,lon;
    Angle latA,lonA;
    cout <<"\n\n Enter GPS- style coordinates: " << endl << "Latitude: (+/- 0-90.00): ";
    cin >> lat;
    
    cout <<"\n\n Enter GPS- style coordinates: " << endl << "Longitude: (+/- 0-180.00): ";
    cin >> lon;
    
    latA = convertGPS(lat, 0);
    lonA = convertGPS(lon,1);
    cout << "conver from GPS to DMS, " <<lat << "," <<lat << "," << lon << "is : " <<endl;
    latA.print();
    cout << "," ;
    lonA.print();
    
    cout <<"\n\n Enter GPS- style coordinates: " << endl << "Latitude: (+/- 0-90.00): ";
    cin >> lat;
    Angle latC(lat,0);
    
    cout <<"\n\n Enter GPS- style coordinates: " << endl << "Longitude: (+/- 0-180.00): ";
    cin >> lon;
    Angle lonC(lon,0);
    
    latC.print();
    cout << " , ";
    lonC.print();
    
    return 0;
}
