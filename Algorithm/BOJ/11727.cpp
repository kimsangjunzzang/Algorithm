//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <iostream>
using namespace std;

int main() {
    int dp[1001];
    dp[0]=0;
    dp[1]=1;
    dp[2]=3;
    for(int i=3;i<1001;i++){
        dp[i] = (dp[i-1] + dp[i-2]*2)%10007;
    }
    
    int num;
    cin>>num;
    cout<<dp[num]<<endl;
    
}
