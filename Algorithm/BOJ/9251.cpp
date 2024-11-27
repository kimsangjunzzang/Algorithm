//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int dp[1001][1001]={0};
    string str1, str2; cin >> str1 >> str2;

    for (int i = 1; i < str1.length()+1; i++) {
        for (int j = 1; j < str2.length()+1; j++) {

            if (str1[i-1] == str2[j-1]) dp[i][j] = dp[i-1][j-1] + 1;

            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout << dp[str1.length()][str2.length()]<<endl;
}
