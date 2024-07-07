//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <iostream>
#include <stack>
#include <string>
using namespace std;

void stackprint(stack<char> &stack) {
    while(!stack.empty()){
        cout<<stack.top();
        stack.pop();
    }
}

int main() {
    stack<char> stack;
    string str;
    getline(cin,str);
    
    for(int i=0;i<str.size();i++) {
        
        if(str[i]=='<') {
            stackprint(stack);
            while(1) {
                cout<<str[i];
                if(str[i]=='>') {
                    break;
                }
                i++;
            }
        } 
        
        else if(str[i]==' ') {
            stackprint(stack);
            cout<<" ";
        } 
        
        else {
            stack.push(str[i]);
        }
        
    }
    stackprint(stack);
}
