//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//
#include <iostream>
using namespace std;

int main() {
    long long n;
    long long arr[500010];
    long long ps[500010];
    long long ans = 0;
    
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        ps[i] = ps[i - 1] + arr[i];
        ans += arr[i] * ps[i - 1];
        ans %= 1000000007;
    }
    cout << ans;
}
