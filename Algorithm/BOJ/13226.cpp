//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 6/29/24.

#include <iostream>
using namespace std;

void solve() {
    int L, R; 
    cin >> L >> R;
    int ans = 1;
    
    while (L <= R) {
        int cur = L;
        int tmp = 1;
        for (int i = 2; i * i <= L; i++) {
            int cnt = 1;
            while (cur % i == 0) {
                cnt++;
                cur /= i;
            }
            tmp *= cnt;
        }
        if (cur > 1) tmp *= 2;
        ans = max(ans, tmp);
        L++;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T; cin >> T;
    while (T--) {
        solve();
    }
}
