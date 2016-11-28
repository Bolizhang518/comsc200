//this is 6B
// the problem is the display not working yet
//incomplete yet
#include <iostream>
#include <sstream>
//#include "LandTract.h"
using namespace std;

void menu();
void getFeetInches(int & feet, int & inches);

class FeetInches;
ostream &operator << (ostream&, const FeetInches&);
istream &operator >> (istream&, FeetInches&);

class FeetInches{
private:
    int feet,inches;
    void lowTerm(){
        if(inches > 12){
            feet +=inches/12;
            inches = inches%12;
        }
    };
public:
    //string argument constructor
    FeetInches(int f,int i){
        feet = f;
        inches =i;
    };
    FeetInches(string s);


    void setFeet(int f){ feet=f;};
    void setInches(int i){ inches=i;};

    int getFeet()const{return feet;};
    int getInches()const{return inches;};
    //friend funciton for operator
    //friend ostream &operator <<(ostream,const FeetInches&);
    //friend  istream &operator>> (istream&, FeetInches&);

    friend ostream &operator << (ostream & stm, const FeetInches &obj) {
        return stm << "( " << obj.feet << " feet, " << obj.inches << " inches)";

    }

    friend istream &operator >> (istream & ss, FeetInches &obj) {
        ss >>obj.feet;
        char c = ss.peek();
        if(ss && c=='\'')
            ss.get();
        return ss>>obj.inches;


    }
};
FeetInches::FeetInches(string s){
    stringstream ss(s);
    ss >>feet;
    char c = ss.peek();
    if(ss && c=='\'')
        ss.get();
    ss>>inches;

};

int main()
{
    bool stay = true;                   // Boolean to stay in this menu
    string choice, word, text;   // User input for choices and input
    int feet, inches;
    string input;


    while(stay) {           // Main menu while starts
        menu();
        cin >> choice;      // Take in user choice from menu
        cin.ignore();
        int outputA;
        int outputB;
        int outputA1;
        int outputB1;
        if(choice.size() == 1) {
            char ch = choice[0];

            switch(ch) { // menu switch start
                case 'n':
                case 'N': // new LandTract
                {

                    cout << "enter a width - \n\t feet = ";
                    cin >> feet;
                    cout << "\t inches = ";
                    cin >> inches;
                    FeetInches fi0(feet,inches);
                    cout << "you have created a "<< fi0.getFeet()<< " \'"
                    << fi0.getInches() << "\" FeetInches instance.\n";
                    outputA = fi0.getFeet();
                    outputB = fi0.getInches();

                    cout << "enter a lenght - \n\t feet = ";
                    cin >> feet;
                    cout << "\t inches = ";
                    cin >> inches;
                    FeetInches fi1(feet,inches);
                    cout << "you have created a "<< fi1.getFeet()<< " \'"
                    << fi1.getInches() << "\" FeetInches instance.\n";
                    outputA1 = fi0.getFeet();
                    outputB1 = fi0.getInches();

                }
                case 'd':
                case 'D': // Display this LandTract
                {
                    // Display the area.

                    cout << "      the width is ( " << outputA <<"feet, "<< outputB << " inches"
                    << "\n      the length is ( " << outputB << "feet, " << outputB1 << "inches"
                    << "\n      the area is " <<endl;
                   // << "\n\n";
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
