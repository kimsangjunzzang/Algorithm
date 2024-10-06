//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
using namespace std;

int main() {
    int testCase; cin >> testCase;
    
    for( int i=0;i<testCase;i++) {
        int num1,num2; cin >> num1 >> num2;
        if(num1<num2)  cout << "NO BRAINS" <<endl;
        else cout << "MMM BRAINS"<< endl;
    }
}
