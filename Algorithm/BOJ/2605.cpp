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
    vector<int>v;

    for ( int i=0;i<testCase;i++) {
        int num; cin >> num;
        v.insert(v.end() - num, i+1);
    }
    for ( int i : v) {
        cout << i <<" ";
    }

    cout << endl;
}
