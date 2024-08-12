//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
using namespace std;

int main() {
    long long num; cin >> num;
    int testCase; cin >>testCase;
    long long cnt = 0;
    
    for( int i=0;i<testCase;i++) {
        long long p,n;
        cin >> p >> n;
        cnt += p * n;
    }
    if (num == cnt) cout << "Yes" <<endl;
    else cout << "No"<<endl;
}
