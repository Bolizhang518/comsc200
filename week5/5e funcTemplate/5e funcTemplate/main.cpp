//
//  main.cpp
//  5e funcTemplate
//
//  Created by Jeff on 9/14/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include<iostream>
#include<string>
using namespace std;

// absoluteValue template
template <typename T>
inline T const& absoluteValue(T const& a){
    if(a >0)
        return a;
    else return a*(-1);
}

// Template for the minimum function
template <typename T>
inline T const& minimum (T const& a, T const& b)
{
    return a < b ? b:a;
}

// Template for the maximum function
template <typename T>
inline T const& maximum (T const& a, T const& b)
{
    return a > b ? b:a;
}

// The main function
int main()
{
    // MinMax and Absolute Test with int arguments.
    int num1 = -5;
    int num2 = 3;
    cout << "minimum of " << num1 << " and " << num2
    << " is:  " << minimum(num1, num2) << endl;
    cout << "maximum of " << num1 << " and " << num2
    << " is:  " << maximum(num1, num2) << endl;
    cout << "Absolute value of " << num1
    << " is: " << absoluteValue(num1) << endl;
    cout << "Absolute value of " << num2
    << " is: " << absoluteValue(num2) << endl;
    
    // MinMax and Absolute Test with double arguments.
    double num3 = -5.5;
    double num4 = 3.5;
    cout << "minimum of " << num3 << " and " << num4
    << " is:  " << minimum(num3, num4) << endl;
    cout << "maximum of " << num3 << " and " << num4
    << " is:  " << maximum(num3, num4) << endl;
    cout << "Absolute value of " << num3
    << " is: " << absoluteValue(num3) << endl;
    cout << "Absolute value of " << num4
    << " is: " << absoluteValue(num4) << endl;
    
    // MinMax Test with string arguments.
    string s1 = "hello";
    string s2 = "hi";
    cout << "minimum of " << s1 << " and " << s2
    << " is: " << minimum(s1, s2) << endl;
    cout << "maximum of " << s1 << " and " << s2
    << " is: " << maximum(s1, s2) << endl;
    
    return 0;
}
