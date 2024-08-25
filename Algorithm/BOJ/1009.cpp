//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int testCase ; cin >> testCase;
    
    for( int i=0;i<testCase;i++) {
        int a,b; cin >> a>> b;
        
        long long n = 1;
        
        for( int j=0;j<b;j++) {
            n = n * a % 10;
        }
        if(n ==0){
            cout << 10 <<endl;
        } else {
            cout << n <<endl;
        }
    }
}


