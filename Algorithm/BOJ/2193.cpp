//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <iostream>
using namespace std;

int main() {
    long long dp[91];
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    for(long long i=3;i<91;i++){
        dp[i] = (dp[i-1] + dp[i-2]);
    }
    
    int num;
    cin>>num;
    cout<<dp[num]<<endl;
    
}
