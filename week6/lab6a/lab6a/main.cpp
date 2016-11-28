//
//  main.cpp
//  lab6a
//  completed
//  Created by Jeff on 9/19/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include "FeetInches.h"
#include <cstdlib>
using namespace std;

class FeetInches;
ostream &operator << (ostream&, const FeetInches&);
istream &operator >> (istream&, FeetInches&);
void FeetInches::lowTerm() {
	if (inches >= 12) {
		feet += (inches / 12);
		inches = inches % 12;
	}
	else if (inches < 0) {
		feet -= ((abs(inches) / 12) + 1);
		inches = 12 - (abs(inches) % 12);
	}
}

int main() {
    string input;
    int feet,inches,feet1,inches1;
    do{

    cout << "enter the first fetiches(0,0 to exit) - \n\t feet = ";
    cin >> feet;
    cout << "\t inches = ";
    cin >> inches;
    FeetInches fi0(feet,inches);
    if(feet == 0 || inches ==0)
        return 0;
    else

    cout << "you have created a "<< fi0.getFeet()<< " \'"
    << fi0.getInches() << "\" FeetInches instance.\n";

    cout << "enter a second fetiches - \n\t feet = ";
    cin >> feet1;
    cout << "\t inches = ";
    cin >> inches1;
    FeetInches fi1(feet1,inches1);
    cout << "you have created second as:  "<< fi1.getFeet()<< " \'"
    << fi1.getInches() << "\" FeetInches instance.\n";
/*
    cout << "creating a feetinches(\"3\\\'4\"): ";
    FeetInches fil("3'4\"");
    cout << "\n the test driver has created: ";
    cout <<fil<<endl;
*/
    FeetInches fi2(5,6);
    cout << "\n Copy constructed the 3rd FeetInches:( " << fi2 << " )";


    cout << "\n  --->Overloaded Addition Operator (+): "<<endl;
    cout << "\n ( "<<feet <<" " << " feet," << inches<< " inches )+ "
      << " ( "<<feet1 <<" " << " feet," << inches1<< " inches ) =  ( " << fi0 + fi1 << ' ' << " )";

     cout << "\n  --->Overloaded Addition Operator (-): "<<endl;
    cout << "\n ( "<<feet <<" " << " feet," << inches<< " inches )- "
      << " ( "<<feet1 <<" " << " feet," << inches1<< " inches ) =  ( " << fi0 - fi1 << ' ' << " )";

     cout << "\n --> Overloaded Greater Than Operator (>): Is  " << fi0
     << " > " << fi1 << " ? "<<"\n" << ((fi0>fi1)? "True":"False")  << endl;

    cout << "\n  --> Overloaded Post ++ than -- Operators "<<endl;
    cout << "\n start first ( "<< fi0 << "  ) " <<endl;
    fi0++;
    cout << " Post ++ ( " << fi0 << ' ' <<" )" <<endl;
    fi0--;
    cout <<" Post -- (" << fi0<< ' ' <<")"<<endl;

    cout << "\n  --> Overloaded Pre ++ than -- Operators "<<endl;
    cout << "\n start second ( "<< fi1 << "  ) " <<endl;
    ++fi1;
    cout << " Post ++ ( " << fi1 << ' ' <<" )" <<endl;
    --fi1;
    cout <<" Post -- (" << fi1<< ' ' <<")"<<endl;

}while(feet !=0 || inches !=0);
return 0;
}
