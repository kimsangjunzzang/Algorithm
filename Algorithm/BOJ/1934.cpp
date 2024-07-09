//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int GCD(int a,int b) {
    if(b == 0 ) return a;
    else {
        return GCD(b,a%b);
    }
}

int LCM(int a,int b) {
    return a*b / GCD(a,b);
}

int main() {
    int testCase;
    cin>> testCase;
    
    for(int i=0;i<testCase;i++) {
        int a,b;
        cin>>a>>b;
        
        cout<<LCM(a,b)<<endl;;
    }
}
