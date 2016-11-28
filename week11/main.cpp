#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include "Q.h"
#include <boost/tokenizer.hpp>
using namespace boost;
using namespace std;
void menu(){
	cout << "\n--- Lab_11C Queue Test Menu ---\n"
		 << "	N - to bulk create New Queue\n"
		 << "	D - to Display\n"
		 << "	E - is Empty?\n"
		 << "	A - to Add ~ push Front \n"
		 << "	a - to append ~ push Back\n"
		 << "	R - to Remove ~ pop Front\n"
		 << "	r - to remove ~ Pop Back\n"
		 << "	G - to Get by subscription\n"
		 << "	P - to Put by subscription\n"
		 << "	L - Length of Queue?\n"
		 << "	C - to Clear\n"
		 << "	Q - to Q this program\n"
		 << "	H - this menu\n";
}

int main(){
bool stay = true;
 cout << "\nInstanciate an object of Queue\n"; 
 Q<string> strQ;
 string choice;
 string str;
 string sArr[] = {"apple","banna","cherry","durian","mango"};
 vector<string> inputS(sArr,end(sArr));

 for(auto item:inputS) strQ.push_front( item );

 menu();
while(stay){
		cout << "\n Enter your command: ";
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
		if(choice.size() == 1){
			char ch = choice[0];
			vector<int>dump;
			string value;
			switch(ch){
				case 'D':
				case 'd':{
					cout <<"  Queue: " << strQ.toString();
					break;
				}
				case 'r':{
				    string temp;
                        if( 0 < strQ.getSize()) {
                           
                            strQ.pop_back(temp);
                             cout << "\n removed " << temp <<"\n";
                        }
                        else cout << " queue is empty already";
                            cout << strQ.toString();
                        break;
				}
				case 'R':{
				    string temp;
				        if( 0 < strQ.getSize()) {
				            strQ.pop_front(temp);
				            cout << "\n removed " << temp <<"\n";
				            }
				            
                        else cout << " queue is empty already";
                            cout << strQ.toString() << "\n";
                        break;
				}
				case 'A':{
				         string n;
                        cout << "\n Enter a phrase: ";
                        cin >> n;
                        strQ.push_front(n);
                        cout << "You have entered: "<<n;
                        cout << "\n Queue: "<< strQ.toString() << "\n";
                        break;
				}
				case 'a':{
				        string n;
                        cout << "\n Enter a phrase: ";
                        cin >> n;
                        strQ.push_back(n);
                        cout << "You have entered: "<<n;
                        cout << "\n Queue: "<< strQ.toString() <<"\n";
                        break;
				}
				case 'l':
				case 'L':{
				        cout << "\n Number of Enteries in Queue: "<<strQ.getSize() << endl;
                        break;
				}
				case 'e':
				case 'E':{
				         if(!strQ.isEmpty()) {
                        cout << "Queue is not empty. \n";
                    }
                    else{ cout << "Queue is empty. \n"; }
                        break;
				}
				case 'c':
				case 'C':{
				    cout << " Queue is cleared. ";
				    strQ.clear();
				    break;
				}
				case 'n':
				case 'N':{
		             if(!strQ.isEmpty()) strQ.clear();
		             string str;
                     cout << "Enter a line of comma (,) delmited data set: ";
                     getline (cin, str);  			// user input -> string
                     ss << str;	   		// string -> stream
                     char_separator<char> sep(",");
                     tokenizer<char_separator<char>> tokens(str, sep);
                     for (const auto& t : tokens) {
                         strQ.push_front(t);
                        }
                    break;
				}
				case 'q':
				case 'Q':{
				    stay = false;
				    break;
				}
				case 'g':
				case 'G':{
				    int i;
				    cout << "\n Enter Item index: ";
				    cin >> i;
				    cout << "geting q["<<i<<"] ...   ";
				    if(i>strQ.getSize()){
				        cout << "\n Exception" << i << " invalid subscription.";
				    break;
				    }
                    else 
                    {
                        cout << " contains : " <<strQ[i-1];
                        break;
                    }
				}
				case'p':
				case'P':{
				    int i;
				    string p;
				    cout << "\n Enter Item index: ";
				    cin >> i ;
				
				    cout << "\n Enter a phrase: ";
				    cin >> p ; 
				    cout << "\n You have entered: " << p;
				    
				    if(i>strQ.getSize() || i < 1){
				        cout << "\n Exception: " << i << " is out of range!";
				    }else{
				       strQ[i-1] = p ; 
				    }
				    
				    
				    break;
				}
				
			}
		}

}

}