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
    string a, b; cin >> a >> b;

    for (int i = 1; i <= a.length(); i++) {
        for (int j = 1; j <= b.length(); j++) {

            if (a[i - 1] == b[j-1]) dp[i][j] = dp[i - 1][j - 1] + 1;

            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    cout << dp[a.length()][b.length()]<<endl;
}
