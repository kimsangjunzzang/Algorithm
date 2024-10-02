//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include<string>
#include <stack>
#include <iostream>

using namespace std;

bool solution(string s)
{
    stack<char>st;
    bool answer = true;
    
    for(int i =0;i<s.size();i++) {
       if(st.empty() && s[i] == ')'){
           answer = false;
           return false;
       } else {
           if(s[i] == '(') {
               st.push(s[i]);
           } else {
               st.pop();
           }
       }
        
    }
    
    if(!st.empty()) {
        answer = false;
    } else {
        answer = true;
    }
    
    return answer;
}
