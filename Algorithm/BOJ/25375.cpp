//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int testCase; cin >> testCase;
    while (testCase--) {
        long long a, b; cin >> a >> b;
        if (b % a == 0 && a < b) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
}
