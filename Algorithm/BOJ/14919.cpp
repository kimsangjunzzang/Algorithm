//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
typedef long long ll;

ll M;
ll arr[1000000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> M;
    int N = 0;
    string s;
    while (cin >> s) {
        while ((int)s.length() < 8) s += '0';
        arr[N++] = stoll(s.substr(2, 6));
    }

    sort(arr, arr + N);

    int cnt = 0;
    ll idx = 1;
    for (int i = 0; i < N; i++) {
        if (arr[i] * M < 1000000LL * idx) cnt++;
        else {
            cout << cnt << ' ';
            cnt = 0;
            idx++;
            i--;
        }
    }

    while (idx <= M) {
        cout << cnt << ' ';
        cnt = 0;
        idx++;
    }
}
