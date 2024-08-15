//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
using namespace std;

int main() {
    int dp[21];
    dp[0] = 0;
    dp[1] = 1;
    int num; cin >> num;
    for( int i=2;i<21;i++){
        dp[i] = dp[i-2] + dp[i-1];
    }
    cout<<dp[num]<<endl;
}
