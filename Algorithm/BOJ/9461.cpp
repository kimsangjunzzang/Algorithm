//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include<iostream>
#include <vector>
using namespace std;

int main() {
    int testCase; cin >> testCase;
    vector<long long>v(101);
    v[0] = 1;
    v[1] = 1;
    v[2] = 1;
    
    for (int i=3;i<101;i++) {
        v[i] = v[i -2] + v[i-3];
    }
    
    for( int i=0;i<testCase;i++) {
        int num; cin >> num;
        cout<<v[num - 1]<<endl;
    }
}
