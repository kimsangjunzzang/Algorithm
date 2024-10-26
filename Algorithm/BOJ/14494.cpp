//
//  main.cpp
//  ex
//
//  Created by 김상준 on 5/18/24.
//
#include <iostream>
using namespace std;

unsigned int DP[1001][1001];

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= 1000; i++) {
        DP[i][1] = DP[1][i] = 1;
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= m; j++) {
            DP[i][j] = (DP[i - 1][j - 1] + DP[i][j - 1] + DP[i - 1][j]) % 1000000007;
        }
    }

    cout << DP[n][m];
    return 0;
}
