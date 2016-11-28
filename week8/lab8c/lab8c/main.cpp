//  comsc 200
//  main.cpp
//  lab8c
//  completed
//  Created by Jeff on 10/5/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
void menu(){
    cout << "\n---Rainfall statistics smart menu---\n"
    <<"D display \n"
    <<"N new\n"
    <<"1-max\n"
    <<"2-min\n"
    <<"3-average\n"
    <<"4-median\n"
    <<"Q-to quit this program\n"
    <<"enter your command : ";
}
const int NUM_MONTH=12;
string del=","; //delimiter

int main() {

    cout<<"testing all 12 monthly rainfall (in inches) delimited by comma (,) : ";
    double rainFall[]= {1.10, 2, 3, 4, 5, 6, 7, 30.01, 9, 10, 11.11, 12 };
    
    vector<double>rf(rainFall,end(rainFall));
    vector<double>srf=rf;// diff srf(rf)  copy contain as it were created. srf=rf default constructor ,allocated the space , make a overloading ,copy assement ,not contain, nothing ?
    
    for(auto item:rf)
        cout << item<< " ";
    rf.clear();

    while(true){
        menu();
        string choice;
        cin >> choice;
        cin.ignore();
        
        switch (choice[0]) {
            case 'N':
            case 'n':
            {   string input, token;
                cout << "Enter a line of comma (,) delmited data set: ";
                getline (cin, input);  			// user input -> string
                stringstream ss(input);			// string -> stream
                while ( getline(ss, token, ',') )
                {	// stream -> string token
                    stringstream sst(token);	// string token -> stream token
                    double ff;
                    sst >> ff;
                    rf.push_back(ff);// stream token -> double token
                    
                    cout << ff << std::endl;
                }
                srf =rf;
                sort(srf.begin(),srf.end());
                break;
            }
                case 'D':
                case 'd':
            {
                
                for(auto item:rf)
                    cout << item<< " , ";
                    rf.clear();
                break;
            }
                case '1':
    
            {
                srf =rf;
                sort(srf.begin(),srf.end());
                cout<< srf.back();
                
                break;
            }
                case '2':
            {
                srf =rf;
                sort(srf.begin(),srf.end());
                cout<< srf.front();
                break;
            }
                case 's':
                case 'S':
            {
                srf =rf;
                sort(srf.begin(),srf.end());
                for(auto item:srf)
                    cout << item << endl;
                break;
            }
                case '3':
                
            {
                double t=0;
                for(auto item:rf)t += item;
                cout << t/NUM_MONTH<<endl;
                break;
            }
                case '4':
            {
                srf =rf;
                sort(srf.begin(),srf.end());
                size_t n = srf.size() / 2;
                std::nth_element(srf.begin(), srf.begin()+n, srf.end());
                int vn = srf[n];
                if(srf.size()%2 == 1)
                {
                    cout<< vn;
                }else
                {
                    std::nth_element(srf.begin(), srf.begin()+n-1, srf.end());
                    cout<< 0.5*(vn+srf[n-1]);
                }
            }break;
                case 'q':
                case 'Q':
            {
                return true;
                
            }
            default:
                cout<<"wrong command ! " ;
        }
              
    }
    }

