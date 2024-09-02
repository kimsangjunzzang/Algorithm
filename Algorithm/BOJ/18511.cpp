//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
using namespace std;

long long N, K;
long long arr[3];
long long ans = 0;

void func(long long cur) {
    if (cur > N) { return; }
    
    ans = max(ans, cur);
    for (int i = 0; i < K; i++) {
        func(cur * 10 + arr[i]);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;
    for (int i = 0; i < K; i++) {
        cin >> arr[i];
    }

    func(0);

    cout << ans<<endl;
}
