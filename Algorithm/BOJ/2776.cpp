//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int testCase; cin >> testCase;

    for (int k = 0; k < testCase; k++) {
        int N; cin >> N;
        map<int, int> m;
        for (int i = 0; i < N; i++) {
            int num; cin >> num;
            m[num] = 1;
        }
        int M; cin >> M;
        for (int j = 0; j < M; j++) {
            int num; cin >> num;
            if (m[num] == 1) {
                cout << 1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }
        }
    }
    return 0;
}
