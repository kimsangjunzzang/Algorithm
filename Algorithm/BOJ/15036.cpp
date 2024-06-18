//
//  main.cpp
//  boj
//
//  Created by 김상준 on 6/19/24.
//
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    
    int testCase;
    cin >> testCase;
    
    double sum = 0;
    
    for(int i=0;i<testCase;i++){
        int num;
        cin >> num;
        sum += (num ? 1.0 / num : 2);
    }
    cout << fixed << setprecision(7) << sum;
    
}
