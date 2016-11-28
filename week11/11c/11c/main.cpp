#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include "Q.h"

using namespace std;

int main() {
    string catchS;
    Q<string> strQ;
    string sArr[] = {"using", "queue", "may", "be", "easier"};
    vector<string> inputS(sArr, end(sArr));
    
    for (auto item: inputS) strQ.push_front( item );
    cout << "\nstrQ: " << strQ.toString();
    
    if( strQ.pop_front(catchS) )
        cout << "\n pop_front() => " << catchS ;
    else "\n pop_front() => Empty strQ!";
    if( strQ.pop_back(catchS) )
        cout << "\n pop_back() => " << catchS ;
    else "\n pop_back() => Empty strQ!";
    strQ.push_front("Donald");
    cout << "\n push_front() => Donald";
    strQ.push_back("Duck");
    cout << "\n push_back() => Duck";
    cout << "\n strQ: " << strQ.toString();
    cout << "\n strQ[2] is " << strQ[2];
    strQ[2] = "President";
    cout << "\n strQ[2] set as 'President'\n strQ[2] is now " << strQ[2];
    cout << "\n strQ: " << strQ.toString();
    
    int catchI;
    Q<int> intQ;
    int iArr[] = {1 ,3, 5, 7, 9};
    vector<int> inputI(iArr, end(iArr));
    
    for (auto item: inputI) intQ.push_front( item );
    cout << "\n\nintQ: " << intQ.toString();
    
    if( intQ.pop_front(catchI) )
        cout << "\n pop_front() => " << catchI ;
    else "\n pop_front() => Empty intQ!";
    if( intQ.pop_back(catchI) )
        cout << "\n pop_back() => " << catchI ;
    else "\n pop_back() => Empty intQ!";
    intQ.push_front(11);
    cout << "\n push_front() => 11";
    intQ.push_back(22);
    cout << "\n push_back() => 22";
    cout << "\n intQ: " << intQ.toString();
    cout << "\n intQ[2] is " << intQ[2];
    intQ[2] = 2;
    cout << "\n intQ[2] = 2; \n intQ[2] is now " << intQ[2];
    cout << "\n intQ: " << intQ.toString();
    
}
