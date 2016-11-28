//====================================================
// testDate.cpp
//  Chapter 14, Programming Challenge 8: Date Class Modification
#include <iostream>
#include "Date.h"
using namespace std;

// Test Date Class
int main()
{
   // Demonstrate the overloaded - and << operators. 
   
   Date d1(12, 25, 2014); 
   Date d2; // default day
   cout << "\nDate d1(12, 25, 2014); ===> " << d1 
        << "\nDate d2; default today ===> " << d2 << endl;

   cout << d1 << " minus " << d2 << " equals " << d1 - d2 << " days\n";


   Date d3(12, 31, 2014); 
   // Demonstrate the overloaded ++ operators.
   cout << "\n____________________________"
        << "\nNew d3   as " << d3;
   cout << "\n  ++d3   is " << ++d3
        << "\n    d3(stm) " << d3;
   cout << "\n    d3   is " << d3;
   cout << "\n    d3++ is " << d3++
        << "\n    d3(stm) " << d3;
   cout << "\n    d3   is " << d3;

   d1.setMonth(1);
   d1.setDay(1);
   d1.setYear(2015);
   // Demonstrate the overloaded -- operators.
   cout << "\n____________________________"
        << "\nSet d1   as " << d1;
   cout << "\n  --d1   is " << --d1
        << "\n    d1(stm) " << d1;
   cout << "\n    d1   is " << d1;
   cout << "\n    d1-- is " << d1--
        << "\n    d1(stm) " << d1;
   cout << "\n    d1   is " << d1 << endl;
   
   while(true) {
      // Demonstrate the overloaded >> operator.
      cout << "\nTest a valid Date entry, 0th month to exit.\n";
      cin >> d1;
      if(d1.getMonth() == 0) break;
      if(!d1.isValidDate()) {
         cout << "Not a valid date!\n";
         continue;
      }
      cout << "You entered " << d1 << endl;
   }
   cout << "\nProgram exit!";
   return 1;
}