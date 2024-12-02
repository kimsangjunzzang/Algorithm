//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    while (1) {
        int N, M; cin >> N >> M;
        vector<int>v(N);
        int cnt = 0;

        if (N == 0 && M == 0) break;
        for (int i = 0; i < N; i++) {
            cin >> v[i];
        }

        for (int i = 0; i < M; i++) {
            int x; cin >> x;
            int start = 0, end = N - 1;

            while (start <= end) {
                int mid = (start + end) / 2;
                if (v[mid] == x) {
                    cnt++;
                    break;
                } else if (v[mid] > x) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
