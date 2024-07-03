//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/3/24.
//

#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void printV(vector<int> &v) {
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main() {
    int testCase;
    cin>> testCase;
    
    vector<int> v;
    
    for(int i=0;i<testCase;i++) {
        int num;
        cin>>num;
        v.push_back(num);
    }
    
    if(prev_permutation(v.begin(), v.end())){
        printV(v);
    }else {
        cout<<"-1"<<'\n';
    }
    
    return 0;
}
