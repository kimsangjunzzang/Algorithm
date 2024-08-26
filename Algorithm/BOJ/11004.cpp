//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    long long testCase, num; cin >> testCase >> num;
    vector<long long>v;
    
    for( int i=0;i<testCase;i++) {
        int n; cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    cout << v[num-1] <<"\n";
}

