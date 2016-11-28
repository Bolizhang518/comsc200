// Chapter 14, Programming Challenge 12: LandTract Class
//comsc 200
//completed
//boli zhang

#include <iostream>
#include <sstream>
#include "LandTract.h"
using namespace std;

void menu();
void getFeetInches(int & feet, int & inches);

int main()
{
    bool stay = true;                   // Boolean to stay in this menu
    string choice, word, text;   // User input for choices and input
    int feet, inches;
    FeetInches width, length;
    LandTract myProperty;

	while(stay) {           // Main menu while starts
        menu();
		cin >> choice;      // Take in user choice from menu
		cin.ignore();

		if(choice.size() == 1) {
			char ch = choice[0];

			switch(ch) { // menu switch start
                case 'n':
                case 'N': // new LandTract
                {
                    cout << "      Enter Tract Width in Feet/Inches: \n";
                    getFeetInches(feet, inches);
                    width.setFeet(feet);
                    width.setInches(inches);
                    myProperty.setWidth(width);

                    cout << "      Enter Tract Length in Feet/Inches: \n";
                    getFeetInches(feet, inches);
                    length.setFeet(feet);
                    length.setInches(inches);
                    myProperty.setLength(length);
                    cout << endl;
                    break;
                }
                case 'd':
                case 'D': // Display this LandTract
                {
                    // Display the area.
                	cout << "      the width is " << myProperty.getWidth()
                	     << "\n      the length is " << myProperty.getLength()
                	     << "\n      the area is " << myProperty.getArea()
                	     << "\n\n";
                    break;
                }

                case 'q':
				case 'Q': // User can press q or Q to exit
					stay = false;
					break;

				default: // Invalid! Tells user to try again
					cout << "\nInvalid command!\nTry again!\n\n";
            }
        }
    }
    cout << "\nProgram exit!";
}

// A LandTract test with a fool proof menu
void menu() {
	cout << "_______ LandTract Class Test Menu __________\n"
		 << "    n - Create a new LandTract\n"
		 << "    d - Display the LandTract attributes\n"
		 << "    q - Quit\n"
		 << "    Enter your choice:";

}

void getFeetInches(int & feet, int & inches) {
    string input;
    cout << "        Enter Feet: ";
    while(true) {
        getline(cin, input);
        stringstream ss(input);
        ss >> feet;
        if (ss.fail())
            cout << "Feet is an integer! Try again: ";
        else break;
    }

    cout << "        Enter Inches: ";
    while(true) {
        getline(cin, input);
        stringstream ss(input);
        ss >> inches;
        if (ss.fail())
            cout << "Inches is an integer! Try again: ";
        else break;
    }
}
