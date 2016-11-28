//
//  main.cpp
//  12e
//
//  Created by Jeff on 11/2/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
using namespace std;

int main(int argc, const char * argv[]) {
    //-----------------array----------------
    cout << "\n1. int array \n";
    int iArr[] = {1,2,3,4,5};
    for (auto item:iArr) cout << item << " ";
    cout << endl;
    //------------------vector---------------
    cout << "\n2. int vector \n";
    vector<int>iVec = {1,2,3,4,5};
    for (auto item:iVec) cout << item << " ";
    cout << endl;
    //-----------------string-----------------
    cout << "\n3. string list \n";
    vector<string>ilist= {"a","b","c"};
    for (auto item:ilist) cout << item << " ";
    cout << endl;
    //----------------------stack----------------
    cout << "\n4. string stack \n";
    deque<string>ss = {"a","b","c"};
    stack<string>s(ss);
    
    while(!s.empty()){
        cout << s.top()<< " ";
        s.pop();
        
    }
    cout <<"the stack does not support range iterator!"<< endl;
    
    //--------------------queue----------------------------
    cout << "\n5. int queue \n";
    deque<string>s1 = {"a","b","c"};
    queue<string>s2(s1);
    while(!s2.empty()){
        cout << s2.front()<< " ";
        s2.pop();
    }
    //---------------------map------------------
    cout << "\n6. string dequeue \n";
    deque<string>s3 = {"a","b","c"};
    for (auto item:s3) cout << item << " ";
    cout << endl;
    //----------------------set--------------------
    
    cout << "\n7. set \n";
    set<string>sSet = {"a","b","c"};
    for (auto item:sSet) cout << item << " ";
    cout << endl;
    
    //--------------------map---------------------
    cout << "\n7. map \n";
    map<int,string>sMap;
    sMap[1] = "a";
    sMap[2] = "b";
    sMap[3] = "c";
    sMap[4] = "d";
    for(map<int,string>::iterator it=sMap.begin();it!=sMap.end();it++)
        cout << it->second << " " << it->first<<endl;

    
    
}


