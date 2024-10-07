//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
using namespace std;

int main() {
    int h, x;
    cin >> h >> x;
    const int r = 1000000007;
    long long ans = 0;
    long long cnt = 1;

    for (int i = 0; i < h; ++i) {
        cnt = (cnt * x) % r;
        int value;
        cin >> value;
        ans = (ans + (static_cast<long long>(value) * cnt) % r) % r;
    }

    cout << ans << endl;

    return 0;
}
