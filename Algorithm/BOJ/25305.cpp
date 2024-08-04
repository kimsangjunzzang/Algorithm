//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int testCase;
    int cutLine;
    vector<int>v;
    cin>> testCase >> cutLine;
    
    for( int i=0;i<testCase;i++) {
        int num; cin >> num;
        v.push_back(num);
    }
    sort(v.begin(),v.end(),greater());
    cout<< v[cutLine - 1] << "\n";
}
