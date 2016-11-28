#include <iostream>
#include <cstdlib> // labs()
using namespace std;

class frac; // Forward Declaration <--- necessary for using frac before it is defined

// Function Prototypes for Overloaded Stream Operators
ostream &operator << (ostream &, const frac &);

// Define the GoodFriend class which has a Friend outputfrac()
class GoodFriend {
public:
    void showFrac(frac &);
};

class BestFriend {
public:
    void showFrac(frac &);
};

class Friend {
public:
    void showFrac(frac &);
};

class best{
public:
    void displayFrac(frac &);
};

class frac {
    long num, den;
public:
    frac() { num = 0; den = 1; }
    frac(long n, long d) { num = n; den = d; }
    frac(const frac &f) {num = f.num; den = f.den;}
    
    // 2. Friend function ---> GoodFriend::outputfrac() prototype here
    friend void GoodFriend::showFrac(frac &);
    friend class BestFriend;
    friend class Friend;
    friend class best;
    friend ostream &operator << ( ostream &strm, const frac &right) {
        strm << right.num << "/" << right.den;
        return strm;
    }
};

// 3. Friend class to frac - method definition here
// GoodFriend showFrac() defintion
void GoodFriend::showFrac(frac &f) { cout<< "GoodFriend good.outputFrac(f) is" << " " << f.num << "/" << f.den << " "<<endl;}
void BestFriend::showFrac(frac &f) { cout <<"BestFriend Best.outputFrac(f) is"<< " " << f.num << "/" << f.den << " "<<endl;}
void Friend::showFrac(frac &f) {cout<< "Friend showFrac(f) is" << " " << f.num << "/" << f.den << " "<<endl; }
void best::displayFrac(frac &f) {cout<< "Buddy of BestFriend best.displayFrac(f) is" << " " << f.num << "/" << f.den << " "<<endl; }
int main()
{
    // testing friendship
    frac f(3,8);
    cout << "frac f(3,8) is " << frac(3,8) <<endl;
    
    Friend fd;
    fd.showFrac(f);
    
    BestFriend bf;
    bf.showFrac(f);
    
    GoodFriend gf;
    gf.showFrac(f);
    
    best bb;
    bb.displayFrac(f);
    
    
    return 0;
}
