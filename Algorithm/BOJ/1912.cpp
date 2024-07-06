//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <iostream>
#include <climits>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int arr[100000];
    int dp[100000];
    
    int testCase;
    cin >> testCase;
    
    for(int i = 0; i < testCase; i++) {
        cin >> arr[i];
    }
    
    dp[0] = arr[0];
    int ans = dp[0];
    
    for(int i = 1; i < testCase; i++){
        dp[i] = max(arr[i], dp[i-1] + arr[i]);
        ans = max(ans, dp[i]);
    }
    cout << ans<<endl;
}
