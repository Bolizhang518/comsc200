//
//  main.cpp
//  lab3a
//
//  Created by Jeff on 8/29/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include <sstream> // stringstream
#include <string>


using namespace std;
void menu(){
    cout<< "------------Fool_Proof_Meanu------------" << endl;
    cout<< "1-Enter a line of text" << endl
    <<"2-Enter a text phrse" <<endl
    <<"3-Enter a integer number "<<endl
    <<"4-Enter a float number " <<endl
    <<"q-Quite"<<endl
    <<"enter your choice: ";
}



int main()
{
    int i,choice1;
    string input,choice,text;
    
    double d;
    bool stay  = true;
    
    while(stay) {
        menu();
        cout << endl;
        cin >> choice;
        cin.ignore(1000,10);
        if(choice.size()==1){
            
            char ch = choice[0];
            switch(ch){
                case '1':{
                    cout<< endl << " enter a line of text :" <<endl;
                    while(true){
                    getline(cin, input);
                    stringstream ss(input);//  a copy of the current contents in the stream buffer.
                    text = ss.str();
                        if (!ss.fail())break; // not an integer
                        cout << " => Error in converting the string !\n"<<"retry: "<< endl;
                        
                }
                    cout << "you entered a line of text : " << endl<< text << endl;
                    break ;
                }
                    case '2':
                {
                    cout<< " enter a word of text :"<<endl;
                    while(true){
                        getline(cin, input);
                        //cin.ignore(1000,10);
                        stringstream ss(input);
                        ss >> text;   // string type
                        if (!ss.fail())break;// not an strying type
                        cout << " error in converting the string you entered \n" << endl <<"try again : " <<endl;
                        
                    }
                    cout << "you have entered : "<< endl <<text  << endl;
                    break;
                
                }
                    
                    
                case '3':{
                    cout << "\nEnter a intger number: ";
                    while(true){
                        getline(cin, input);
                        stringstream ss(input);
                        ss >> i;
                        if (!ss.fail()) break; // not an integer
                            cout << " => Can not find a intger number!\n"<< endl << "try it again :"<<endl;
                    }
                    
                    cout << " => Found this intger number: " << i << endl;
                    break;
                    
                }
                    
                    case '4':
                {
                    cout << "\nEnter a floating number: ";
                    while(true){
                    getline(cin, input);
                    cout << "    You have entered: " << input << endl;
                    stringstream ss(input);
                    //num = ss.float();
                    ss >> d;
                        if (!ss.fail()) break;// not an integer
                        cout << " => Can not find a floating number!\n";
                    }
                    
                        cout << " => Found this floating number: " << d << endl;
                    break;
                
                
                }
                    
                    
                    
                case 'q' :
                case 'Q' :
                    stay = false;
                    break ;
                    
                default:
                    cout << "command are not supported " <<endl;
                
                
                
            }
        }
        
    }
}
