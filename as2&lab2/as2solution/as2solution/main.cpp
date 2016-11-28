//
//  main.cpp
//  as2solution
//
//  Created by Jeff on 8/24/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <stdio.h>

using namespace std;

class Angle{ // DMS cordinate
private:
    int degrees, minutes;
    double seconds;
    char direct;
public:
    // constructor
    Angle() {degrees=0; minutes=0; seconds=0; direct='N'; };
    Angle(int d, int m, double s, char dir) {
        degrees=d; minutes=m; seconds=s; direct=dir;
    }
    Angle(Angle &a) {
        degrees=a.degrees;
        minutes=a.minutes;
        seconds=a.seconds;
        direct=a.direct;
    };
    
    Angle(double gps, int latlong){ //latlong = 0 for N/S or 1 for E/W
        int dpart, mpart;
        double secpart;
        double tempgps, tempDeg, tempMin, tempSec;
        char dirpart;
        
        tempgps = gps;
        tempMin = modf(tempgps, &tempDeg);
        tempMin = tempMin * 60.0;
        secpart = modf(tempMin, &tempSec) * 60.0;
        
        dpart = tempDeg;
        mpart = tempMin;
        
        if (latlong == 0) dirpart = (gps > 0 ? 'N' : 'S');
        else dirpart = (gps > 0 ? 'E' : 'W');
        
        degrees = dpart;
        minutes = mpart;
        seconds = secpart;
        direct  = dirpart;
    }
    
    void setDegrees(int d) {degrees=d;};
    void setMinutes(int m) {minutes=m;};
    void setSeconds(double s) {seconds=s;};
    void setDirect(char dir) {direct=dir;};
    int getDegrees() const {return degrees;};
    int getMinutes() const {return minutes;};
    double getSeconds() const {return seconds;};
    char getDirect()const {return direct;};
    
    // features
    void print() {
        cout << std::setprecision(4) << std::fixed
        << degrees << "° " << seconds << "' "
        << minutes << "\"" << direct;
    };
    
};

Angle convertGPS(double gps, int latlong){ //latlong = 0 for N/S or 1 for E/W
    int dpart, mpart;
    double secpart;
    double tempgps, tempDeg, tempMin, tempSec;
    char dirpart;
    
    tempgps = gps;
    tempMin = modf(tempgps, &tempDeg);
    tempMin = tempMin * 60.0;
    secpart = modf(tempMin, &tempSec) * 60.0;
    
    dpart = tempDeg;
    mpart = tempMin;
    
    if (latlong == 0) dirpart = (gps > 0 ? 'N' : 'S');
    else dirpart = (gps > 0 ? 'E' : 'W');
    
    Angle* converted = new Angle(dpart, mpart, secpart, dirpart);
    return *converted;
}


int main() {
    double lat, lon;
    Angle latA, lonA;
    cout << "\n\tEnter GPS-style coordinates:"
    << "\n\t\tLatitude: (+/- 0-90.00): ";
    cin >> lat;
    cout << "\n\t\tLongitude: (+/- 0-180.00): ";
    cin >> lon;
    
    latA = convertGPS(lat, 0);
    lonA = convertGPS(lon, 1);
    cout << "Converted from GPS to DMS, "
    << lat << ", " << lon << " is: \n\t\t";
    latA.print(); cout << ", ";
    lonA.print();
    
    // using GPS to DMS constructor
    cout << "\n\tEnter GPS-style coordinates:"
    << "\n\t\tLatitude: (+/- 0-90.00): ";
    cin >> lat;
    Angle latC(lat, 0);
    
    cout << "\n\t\tLongitude: (+/- 0-180.00): ";
    cin >> lon;
    Angle lonC(lon, 1);
    cout << "\n\t\t";
    latC.print(); cout << ", ";
    lonC.print();
    
    return 0;
}
