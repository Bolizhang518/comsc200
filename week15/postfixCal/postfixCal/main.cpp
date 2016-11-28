
//  main.cpp
//  postfixCal
//
//  Created by Jeff on 11/21/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<stack>
#include<ctype.h>
using namespace std;
int calc(char token, int num1, int num2);

int main(){
    string postfix;
    while(true){
        cout << "\n Enter a postfix expression: ";
        getline(cin,postfix);
        if(postfix == "q") break;
        cout << "\npostfix => " << postfix << endl;
        std::deque<char>postfixStk ;
        for(auto item:postfix) postfixStk.push_back(item);
        stack<int> stk; // operand
        int num1, num2, result, step =1;
        while(!postfixStk.empty()){
            char token = postfixStk.front();
            if(isalnum(token)){
                stk.push(token-'0');
                postfixStk.pop_front();
            }
            else if(token == '+'||token == '-'||token == '*' || token == '/' || token == '^'){
                postfixStk.pop_front();
                num2 = stk.top(); stk.pop();
                num1 = stk.top(); stk.pop();
                result = calc(token,num1,num2);
                stk.push(result);
                cout << "Step " << step << ":" << result
                <<" = " << num1 << token << num2 << endl;
                step++;

            }

        }cout << "Answer : " << result;
    }

}
int calc(char token, int num1,int num2){
    int result;
    switch(token){
        case '*': result = num1 * num2;
            break;
        case '/': result = num1 / num2;
            break;
        case '-': result = num1 - num2;
            break;
        case '+': result = num1 + num2;
            break;
        case '^': result = pow(num1,num2);

    }
    return result;
}
