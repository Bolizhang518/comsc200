//
//  main.cpp
//  lab11b
//
//  Created by Jeff on 10/24/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "IntLinkedQueue.h"
using namespace std;

string del = ",";

void menu(){
   cout <<" --- Lab_11B LinkedQueue Test Menu --- \n"
    <<"N - to bulk create New Queue \n"
    <<"D - to Display \n"
    <<"E - is Empty? \n"
    <<"A - to Add \n"
    <<"R - to Remove \n"
    <<"L - Length of Queue? \n"
    <<"C - to Clear \n"
    <<"Q - to Q this program \n"
    <<"H - this menu \n"<<endl;



}
int main()
{
    bool stay = true;

    // create one instance for each of the test classes
    cout << "\nInstanciate an object of Queue\n";
    string catchVar; // To hold values popped off the Queue
    IntLinkedQueue q;

    cout << "\nFirst, test with hard-wired data sets!\n"
    << "For example, \nyou may use one set of tokens for all test classes: \n";
    string choice; // user input for choices
    string str; // user input for list, delimiter, ...
    int s[] = {1, 3, 5, 7, 9};
    vector<int> input(s, end(s));

    // show the initial item list
    int input_size = input.size();
    for (auto item : input ) {
        cout << item << ((input_size <= 1) ? " " : ", ");
        input_size--;
    }
    cout << endl;

    // initialize the Queue class instances
    for (auto i: input) q.add( i );
    cout << "\nUse menu to test a Queue class instance.\n";
    menu();
    // main menu while
    while(stay) {  // main menu while starts
        cout << "\n	Enter your command: ";
        stay = true;
        cin >> choice;
        cin.ignore();
        int pos;
        string input;
        string token;
        int item;
        stringstream sst;
        stringstream ss;
        int Queue_size;

        if(choice.size() == 1) {
            char ch = choice[0];
            vector<int> dump;
            string value;
            switch(ch) {  // main menu switch starts
                case 'N':
                case 'n':
                {
                    if(!q.isEmpty()) q.clear();
                    cout << "Enter a line of comma (,) delmited data set: ";
                    getline (cin, input);  			// user input -> string
                    ss << input;			// string -> stream
                    while ( getline(ss, token, ',') ) {	// stream -> string token
                        stringstream sst(token);
                        sst >> item;
                        q.add(item);
                    }

                    break;
                }
                    case 'D':
                    case 'd':
                    {
                    cout << q.toString();
                        break;
                    }

                    case 'E':
                    case 'e':
                    {
                    if(!q.isEmpty()) {
                        cout << "List is not empty. \n";
                    }
                    else{ cout << "List is empty. \n"; }
                        break;
                    }
                    case 'H':
                    case 'h':
                    {
                        menu();
                        break;
                    }
                    case 'R':
                    case 'r':
                    {
                        int temp;
                        if( 0 < q.getSize()) q.remove(temp);
                        else cout << " queue is empty already";
                            cout << q.toString();
                        break;
                    }
                    case 'c':
                    case 'C':
                    {
                        q.clear();
                        break;
                    }
                    case 'l':
                    case 'L':
                    {
                        cout << q.getSize() << endl;
                        break;
                    }
                    case 'a':
                    case 'A':
                    {
                        int n;
                        cout << "Enter a number: ";
                        cin >> n;
                        q.add(n);
                        cout << "You have entered: "<<n;
                        break;
                    }
                    case 'q':
                    case 'Q':{
                    stay = false;
                    }
//                default:{
//                    cout << "invaild \n ";
//                }
              //  }
            }
        }
    }cout << " program end " ;
}

