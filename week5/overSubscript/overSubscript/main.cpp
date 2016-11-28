#include <iostream>
#include <cstdlib> // exit()
using namespace std;
const int LIMIT = 100; //array size
////////////////////////////////////////////////////////////////
class safearay
{
private:
    int arr[LIMIT];
public:
    int& operator [](int n) //note: return by reference
    {
        if( n< 0 || n>=LIMIT )
        { cout << "\nIndex out of bounds"; exit(1); }
        return arr[n];
    }
};

int main()
{
    safearay sa1;
    cout << "Enter lower and upper index:   " << endl;
    int j,temp1;
    cin >> j >> temp1;
    //cout << "upper bounds: " << endl;
    //cin >> temp1;
    for( int j=0; j<LIMIT; j++){ //insert elements
        sa1[j] = j*10;
    }//*left* side of equal sign
    
    for(j; j<temp1+1; j++) //display elements
    {
//        int temp = sa1[j]; //*right* side of equal sign
        cout << "Element " << j << " is " << sa1[j] << endl;
    }
    
    cout << "To modify which cell?: " << endl;
    int Modnum;
    cin >> Modnum;
    
    safearay sa2;
    cout << "Enter lower and upper index:   " << endl;
    int k,temp2;
    cin >>k >> temp2;

    for( int k=0; k<LIMIT; k++){ //insert elements
        sa1[k] = k*10;
    }//*left* side of equal sign
    for(k; k<Modnum; k++) //display elements
    {
        int temp = sa1[k]; //*right* side of equal sign
        cout << "Element " << k << " is " << temp << endl;
    }
    
   
    
        cout << "Element " << Modnum << " is " << Modnum << endl;
   
    
    for(Modnum; Modnum<temp2; Modnum++) //display elements
    {
               int temp = sa1[Modnum+1]; //*right* side of equal sign
        cout << "Element " << Modnum+1 << " is " << temp << endl;
    }
    
    
    

    return 0;
}
