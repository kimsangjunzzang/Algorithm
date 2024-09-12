//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int testCase; cin >> testCase;
    
    for ( int i=0;i<testCase;i++) {
        int num; cin >> num;
        int max = 0;
        
        for ( int j = 1;j<num;j++) {
            if(j*j + j <= num) max = j;
        }
        cout << max <<endl;
        
    }
}
