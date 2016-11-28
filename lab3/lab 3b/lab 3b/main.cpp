//
//  main.cpp
//  lab 3b
//
//  Created by Jeff on 8/29/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include <sstream> // stringstream
#include <string>

using namespace std;

void menu() {
    cout << "________Fool_Proof_Menu_________\n"
    << "   1 - Enter a line of txt\n"
    << "   2 - Enter a word of txt\n"
    << "   3 - Enter an integer number\n"
    << "   4 - Enter a floating point number\n"
    << "   q - quit\n"
    << "   Enter your choice: ";
}

int main()
{
    int i;
    double d;
    string input, choice, text;
    bool stay = true;
    while(stay)
    {
        menu();
        cout << endl;
        cin>> choice;
        cin.ignore(1000, 10);
        
        if(choice.size() == 1 ) {
            char ch = choice[0];
            switch(ch) {
                case '1': // line of text
                {
                    cout << "Enter a line of text: ";
                    while(true) {
                        getline(cin, input);
                        stringstream ss(input);
                        text = ss.str();
                        if(!ss.fail()) break;
                        cout << "Error in converting the string you entered. \n\tTry again:";
                    }
                    cout << "You have entered a line: " << text << endl;
                    break;
                }
                case '2': // one word
                {
                    cout << "Enter a word of text: ";
                    while(true) {
                        getline(cin, input, ' '); // delimiter
                        cin.ignore(1000, 10);
                        stringstream ss(input);
                        ss >> text;
                        if(!ss.fail()) break;
                        cout << "Error in converting the string you entered. \n\tTry again:";
                    }
                    cout << "You have entered a word: " << text << endl;
                    break;
                }
                    
                case '3': // integer
                {
                    cout << "\nEnter an integer: ";
                    while(true) {
                        getline(cin, input);
                        stringstream ss(input);
                        ss >> i;
                        if(!ss.fail()) break; //it is an integer!
                        cout << "Error in converting the string you entered. \n\tTry again:";
                    }
                    cout << "You have entered an integer: " << i << endl;
                    break;
                }
                    
                case '4': // floating number
                {
                    cout << "\nEnter a floating number: ";
                    while(true) {
                        getline(cin, input);
                        stringstream ss(input);
                        ss >> d;
                        if(!ss.fail()) break; //it is an integer!
                        cout << "Error in converting the string you entered. \n\tTry again:";
                    }
                    cout << "You have entered a floating number: " << d << endl;
                    break;
                }
                    
         
                    
                case 'q':
                case 'Q':
                    stay = false;
                    break;
                    
                default:
                    cout << "Commands not supported.\n";
            }
        }
    }
}